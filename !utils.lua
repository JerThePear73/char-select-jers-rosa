E_MODEL_STARBIT_COIN        = smlua_model_util_get_id("jers_rosa_starbit_coin_geo")
E_MODEL_STARBIT_PROJECTILE  = smlua_model_util_get_id("jers_rosa_starbit_projectile_geo")

SOUND_ROSA_GALAXY_SPIN      = audio_sample_load("rosa_galaxy_spin.ogg")
SOUND_ROSA_STARBIT_COLLECT  = audio_sample_load("sound_rosa_starbit_collect.ogg")
SOUND_ROSA_STARBIT_HIT      = audio_sample_load("sound_rosa_starbit_hit.ogg")
SOUND_ROSA_STARBIT_MISS     = audio_sample_load("sound_rosa_starbit_miss.ogg")
SOUND_ROSA_STARBIT_SHOOT    = audio_sample_load("sound_rosa_starbit_shoot.ogg")

TEX_ROSA_TARGET_POITNER     = get_texture_info("rosa_hud_pointer")
TEX_ROSA_STARBIT            = get_texture_info("rosa_hud_starbit")

function pause_check()
    local m = gMarioStates[0]

    if (_G.charSelectExists and _G.charSelect.is_menu_open()) or is_game_paused() then
        return 0
    elseif m.action == ACT_START_SLEEPING or m.action == ACT_SLEEPING or (m.actionTimer < 80 and (m.action == ACT_STAR_DANCE_EXIT or m.action == ACT_STAR_DANCE_NO_EXIT or m.action == ACT_STAR_DANCE_WATER)) then
        return 0.2
    else
        return 1
    end
end

function rosa_dress_physbone(rotNode)
    local o = geo_get_current_object()
    local m = geo_get_mario_state()
    local isMario = m.marioObj == o
    --local ang = degrees_to_sm64(50)
    local spinTime = 26

    if isMario then
        if m.action == ACT_SIDE_FLIP then
            if m.actionArg ~= 73 then -- fucked up compat of evilswag
                rotNode.rotation.x = math.clamp(m.vel.y, 0, 100) * 0x80
                rotNode.rotation.z = math.clamp(m.vel.y, -100, 0) * -0x80
            end
        end
        if m.action == ACT_DIVE then
            rotNode.rotation.x = 0
            rotNode.rotation.z = m.vel.y * -0x40
        end
        if m.action == ACT_ROSA_ACTION and m.actionArg <= 2 then
            rotNode.rotation.y = degrees_to_sm64((spinTime - (math.clamp(m.actionTimer, 0, spinTime))) * 4)
        else
            rotNode.rotation.y = 0
        end
        if m.action == ACT_BUTT_SLIDE then
            rotNode.rotation.z = -0x1000
        end
        if m.action & ACT_FLAG_RIDING_SHELL ~= 0 then
            rotNode.rotation.x = -0x80
            rotNode.rotation.z = -0x1000
        end
    end
end