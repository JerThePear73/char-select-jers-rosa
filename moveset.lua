ACT_ROSA_ACTION = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR)
ACT_ROSA_ATTACK = allocate_mario_action(ACT_GROUP_AIRBORNE | ACT_FLAG_AIR)

local ARG_GALAXY_SPIN_AIR = 0
local ARG_GALAXY_SPIN_FAST = 1
local ARG_GALAXY_SPIN_GROUND = 2
local ARG_CREATE_SLING_STAR = 3

local rosaRange = 2000

gRosaStates = {}
for i = 0, MAX_PLAYERS - 1 do
    gRosaStates[i] = {
        targetObj = nil,
        isShooting = false,
        starbits = 0,
    }
end

local function get_int_types(m)

end

---@param m MarioState
local function get_rosa_wand_pos(m)
    local handPos = gVec3fZero{}
    local handAng = gVec3sZero{}
    local handAng2nd = gVec3sZero{}
    get_mario_anim_part_pos(m, MARIO_ANIM_PART_RIGHT_HAND, handPos)
    get_mario_anim_part_rot(m, MARIO_ANIM_PART_RIGHT_HAND, handAng)
    handAng2nd.x = handAng.x
    handAng2nd.y = handAng.y + degrees_to_sm64(90)
    handAng2nd.z = handAng.z
    local localOffset = {
        x = (100 * sins(handAng2nd.z)),
        y = 0,
        z = (100 * coss(handAng2nd.z)),
    }

    local worldOffset = {x = localOffset.x, y = localOffset.y, z = localOffset.z}
    vec3f_rotate_zxy(worldOffset, handAng)

    return {
        x = handPos.x + worldOffset.x,
        y = handPos.y + worldOffset.y,
        z = handPos.z + worldOffset.z,
    }
end

---@param m MarioState
local function do_rosa_twirl_particles(m)
    local offset = 100
    local posR = gVec3fZero{}
    local posL = gVec3fZero{}
    local angR = m.faceAngle.y + 0x4000
    posR.x = m.pos.x + math.sin(m.actionTimer*0.6) * offset
    posR.z = m.pos.z + math.cos(m.actionTimer*0.6) * offset   
    posR.y = m.pos.y + 90
    spawn_non_sync_object(id_bhvShrinkParticle, E_MODEL_SPARKLES_ANIMATION, posR.x, posR.y, posR.z, function(o)
        o.oBehParams = 2
    end)
end

---@param m MarioState
---@returns Object
local function rosa_find_target(m)
    for key in pairs(rosaAttackTypes) do
        local nearestObj = cur_obj_nearest_object_with_behavior(get_behavior_from_id(key))
        if nearestObj and dist_between_objects(m.marioObj, nearestObj) < rosaRange then
            return nearestObj
        end
    end
    --djui_chat_message_create("no targets found")
end

---@param m MarioState
local function rosa_shoot_starbit(m)
    local e = gRosaStates[m.playerIndex]
    if not e.targetObj then return end
    m.faceAngle.y = mario_obj_angle_to_object(m, e.targetObj)
    e.starbits = e.starbits - 1
    e.isShooting = true
    if m.playerIndex == 0 then
        spawn_sync_object(id_bhvStarbitProjectile, E_MODEL_NONE, m.pos.x, m.pos.y + 120, m.pos.z, function(o)
            o.parentObj = e.targetObj
        end)
    end
end

---@param m MarioState
local function act_galaxy_spin_air(m)
    local e = gRosaStates[m.playerIndex]
    local speedCap = 40

    smlua_anim_util_set_animation(m.marioObj, "jers_rosa_galaxy_spin")
    m.marioBodyState.handState = e.isShooting and MARIO_HAND_PEACE_SIGN or MARIO_HAND_OPEN

    if m.actionTimer == 0 then
        audio_sample_play(SOUND_ROSA_GALAXY_SPIN, m.pos, 1)
        m.marioObj.header.gfx.animInfo.animID = -1
        m.vel.y = 30
        if e.targetObj then
            rosa_shoot_starbit(m)
        end
        if m.forwardVel > speedCap and m.actionArg ~= ARG_GALAXY_SPIN_FAST then
            m.forwardVel = math.clamp(m.forwardVel * 0.5, speedCap, 9999999)
        end
    end
    local stepResult = common_air_action_step(m, ACT_FREEFALL_LAND, MARIO_ANIM_RUNNING_UNUSED, AIR_STEP_CHECK_LEDGE_GRAB)
    m.vel.y = m.vel.y + 1

    if m.actionTimer < 15 and stepResult == AIR_STEP_NONE then
        do_rosa_twirl_particles(m)
    elseif m.action == ACT_ROSA_ATTACK then
        m.action = ACT_ROSA_ACTION
    end

    if m.action == ACT_ROSA_ACTION and e.targetObj and m.input & INPUT_B_PRESSED ~= 0 then
        m.action = ACT_ROSA_ATTACK
        m.actionTimer = -1
    end

    if (m.input & INPUT_Z_PRESSED) ~= 0 then
        set_mario_action(m, ACT_GROUND_POUND, 0)
    end
end

---@param m MarioState
local function act_galaxy_spin_ground(m)
    local e = gRosaStates[m.playerIndex]
    local speed = m.forwardVel
    smlua_anim_util_set_animation(m.marioObj, "jers_rosa_galaxy_spin")
    m.marioBodyState.handState = e.isShooting and MARIO_HAND_PEACE_SIGN or MARIO_HAND_OPEN

    if m.actionTimer == 0 then
        audio_sample_play(SOUND_ROSA_GALAXY_SPIN, m.pos, 1)
        m.marioObj.header.gfx.animInfo.animID = -1
        m.vel.y = 0
        if e.targetObj then
            rosa_shoot_starbit(m)
        end
    end
    local stepResult = perform_ground_step(m)
    if stepResult == GROUND_STEP_LEFT_GROUND then
        set_mario_action(m, ACT_FREEFALL, 0)
    elseif stepResult == GROUND_STEP_HIT_WALL then
        mario_bonk_reflection(m, 0)
        m.faceAngle.y = m.faceAngle.y + 0x8000
        play_sound(SOUND_ACTION_BONK, m.marioObj.header.gfx.cameraToObject)
        speed = -20
    end

    speed = speed * 0.9
    mario_set_forward_vel(m, speed)
    set_mario_particle_flags(m, PARTICLE_DUST, 0)
    set_anim_to_frame(m, m.actionTimer)

    if m.actionTimer < 15 then
        do_rosa_twirl_particles(m)
    elseif m.action == ACT_ROSA_ATTACK then
        m.action = ACT_ROSA_ACTION
    end

    if m.action == ACT_ROSA_ACTION and e.targetObj and m.input & INPUT_B_PRESSED ~= 0 then
        m.action = ACT_ROSA_ATTACK
        m.actionTimer = -1
    end

    if m.actionTimer > 20 then
        set_mario_action(m, ACT_IDLE, 0)
    end

    m.marioObj.header.gfx.pos.y = m.pos.y - 10
end

local rosaArgDefines = {
    [ARG_GALAXY_SPIN_AIR] = act_galaxy_spin_air,
    [ARG_GALAXY_SPIN_FAST] = act_galaxy_spin_air,
    [ARG_GALAXY_SPIN_GROUND] = act_galaxy_spin_ground,
    --[ARG_CREATE_SLING_STAR] = act_create_sling_star,
}
local function act_rosa_action(m)
    rosaArgDefines[m.actionArg](m)
    m.actionTimer = m.actionTimer + 1
    return 0
end
hook_mario_action(ACT_ROSA_ACTION, act_rosa_action)
local function act_rosa_attack(m)
    rosaArgDefines[m.actionArg](m)
    m.actionTimer = m.actionTimer + 1
    return 0
end
hook_mario_action(ACT_ROSA_ATTACK, act_rosa_attack, INT_KICK)

local spinActions = {
    [ACT_BACKFLIP] = true,
    [ACT_LONG_JUMP] = true,
    [ACT_TWIRLING] = true,
}

local function rosa_update(m)
    local e = gRosaStates[m.playerIndex]
    -- galaxy spin extra conditions then
    if spinActions[m.action] and m.input & INPUT_B_PRESSED ~= 0 then
        set_mario_action(m, ACT_ROSA_ATTACK, ARG_GALAXY_SPIN_AIR)
    end

    --[[ sparkles on wand
    if m.marioBodyState.handState == MARIO_HAND_PEACE_SIGN then
        local wandPos = get_rosa_wand_pos(m)
        spawn_non_sync_object(id_bhvSparkle, E_MODEL_SPARKLES_ANIMATION, wandPos.x, wandPos.y - 40, wandPos.z, function(o)
            obj_scale(o, 0.5)
        end)
    end]]

    -- targetting
    e.targetObj = (m.controller.buttonDown & L_TRIG ~= 0 and m.action & ACT_FLAG_INTANGIBLE == 0 and e.starbits > 0) and rosa_find_target(m) or nil
end

local function rosa_set_action(m)
    local e = gRosaStates[m.playerIndex]

    if e.isShooting then
        e.isShooting = false
    end
end

local function rosa_before_set_action(m, act)
    local e = gRosaStates[m.playerIndex]
    -- galaxy spin
    if act == ACT_MOVE_PUNCHING or (e.targetObj and act == ACT_DIVE and m.action & ACT_FLAG_AIR == 0) then
        return set_mario_action(m, ACT_ROSA_ATTACK, ARG_GALAXY_SPIN_GROUND)
    elseif act == ACT_JUMP_KICK and not e.isShooting then
        return set_mario_action(m, ACT_ROSA_ATTACK, ARG_GALAXY_SPIN_FAST)
    elseif (act == ACT_DIVE and ((m.input & INPUT_A_DOWN == 0)) and m.action & ACT_FLAG_AIR ~= 0) and m.action ~= ACT_GROUND_POUND then
        return set_mario_action(m, ACT_ROSA_ATTACK, ARG_GALAXY_SPIN_AIR)
    end
end

local function rosa_hud()
    local m = gMarioStates[0]
    local e = gRosaStates[m.playerIndex]
    if gNetworkPlayers[0].currActNum == 99 or m.action == ACT_INTRO_CUTSCENE or obj_get_first_with_behavior_id(id_bhvActSelector) or _G.charSelect.is_menu_open() then return end
    djui_hud_set_resolution(RESOLUTION_N64)
    djui_hud_set_color(255, 255, 255, 255)
    djui_hud_set_font(FONT_HUD)
    local width = djui_hud_get_screen_width()
    local height = 240

    if gHudDisplay.flags & HUD_DISPLAY_FLAGS_COIN_COUNT ~= 0 then
        local starbitX = width/2 + 9
        local starbitY = 34
        djui_hud_render_texture(TEX_ROSA_STARBIT, starbitX, starbitY, 1, 1)
        djui_hud_print_text("@", starbitX + 15, starbitY, 1, 1)
        djui_hud_print_text(tostring(e.starbits), starbitX + 28.5, starbitY, 1, 1)
    end

    local ScreenPos = gVec3fZero{}
    if e.targetObj then
        local targetPos = {x = e.targetObj.oPosX, y = e.targetObj.oPosY, z = e.targetObj.oPosZ}
        djui_hud_world_pos_to_screen_pos(targetPos, ScreenPos)
        local pointerScale = -1500/ScreenPos.z
        djui_hud_set_rotation(get_global_timer() * -0x800, 0.5, 0.5)
        djui_hud_render_texture(TEX_ROSA_TARGET_POITNER, ScreenPos.x - (8 * pointerScale), ScreenPos.y - (8 * pointerScale), pointerScale, pointerScale)
    end
end

local replaceCoinSound = false
local function rosa_interact(m, o, type)
    if obj_has_model_extended(o, E_MODEL_STARBIT_COIN) ~= 0 then
        replaceCoinSound = true
    end
end
local function rosa_sound(id)
    local m = gMarioStates[0]
    local e = gRosaStates[m.playerIndex]
    if (id == SOUND_GENERAL_COIN or id == SOUND_GENERAL_COIN_WATER) and replaceCoinSound then
        audio_sample_play(SOUND_ROSA_STARBIT_COLLECT, m.pos, pause_check())
        e.starbits = e.starbits + 1
        replaceCoinSound = false
        return NO_SOUND
    end
end

_G.charSelect.character_hook_moveset(CT_ROSA, HOOK_MARIO_UPDATE, rosa_update)
_G.charSelect.character_hook_moveset(CT_ROSA, HOOK_ON_SET_MARIO_ACTION, rosa_set_action)
_G.charSelect.character_hook_moveset(CT_ROSA, HOOK_BEFORE_SET_MARIO_ACTION, rosa_before_set_action)
_G.charSelect.character_hook_moveset(CT_ROSA, HOOK_ON_HUD_RENDER_BEHIND, rosa_hud)
_G.charSelect.character_hook_moveset(CT_ROSA, HOOK_ON_INTERACT, rosa_interact)
_G.charSelect.character_hook_moveset(CT_ROSA, HOOK_ON_PLAY_SOUND, rosa_sound)