local function bhv_starbit_proj_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oTimer = 0
    o.oForwardVel = 1
    o.oVelY = 1
    o.oGravity = 0
    o.hitboxRadius = 50
    o.hitboxHeight = 20
    o.oMoveAngleYaw     = obj_angle_to_object(o, o.parentObj)
    o.oMoveAnglePitch   = obj_pitch_to_object(o, o.parentObj)
    o.oAnimState = math.random(0, 5)
    obj_set_model_extended(o, E_MODEL_STARBIT_PROJECTILE)
    audio_sample_play(SOUND_ROSA_STARBIT_SHOOT, {x = o.oPosX, y = o.oPosY, z = o.oPosZ}, pause_check())
end
local function bhv_starbit_proj_loop(o)
    local speed = 100
    o.oFaceAnglePitch   = o.oFaceAnglePitch + 0x1000
    o.oFaceAngleRoll    = o.oFaceAngleRoll + 0x1000
    spawn_non_sync_object(id_bhvShrinkParticle, E_MODEL_WHITE_PARTICLE, o.oPosX, o.oPosY, o.oPosZ, function(trail)
        trail.oBehParams = 1
    end)

    local step = object_step_without_floor_orient()
    if step & OBJ_COL_FLAG_GROUNDED ~= 0 or step & OBJ_COL_FLAG_HIT_WALL ~= 0 or o.oVelY == 0 then
        audio_sample_play(SOUND_ROSA_STARBIT_MISS, {x = o.oPosX, y = o.oPosY, z = o.oPosZ}, pause_check())
        o.oAction = 1
    else
        o.oForwardVel = speed * coss(o.oMoveAnglePitch)
        o.oVelY = speed * -sins(o.oMoveAnglePitch)
    end

    local targetDist = 0x20000
    for key in pairs(rosaAttackTypes) do
        local hitObj = cur_obj_nearest_object_with_behavior(get_behavior_from_id(key))
        if hitObj ~= nil then
            local dist = dist_between_objects(o, hitObj)
            if dist < targetDist then
                targetDist = dist
            end
            if obj_check_hitbox_overlap(o, hitObj) then
                hitObj.oInteractStatus = hitObj.oInteractStatus | INT_STATUS_WAS_ATTACKED | INT_STATUS_INTERACTED
                audio_sample_play(SOUND_ROSA_STARBIT_HIT, {x = o.oPosX, y = o.oPosY, z = o.oPosZ}, pause_check())
                o.oAction = 1
            end
        end
    end

    if o.oAction == 1 then
        spawn_mist_particles()
        obj_mark_for_deletion(o)
    end
end
id_bhvStarbitProjectile = hook_behavior(nil, OBJ_LIST_GENACTOR, true, bhv_starbit_proj_init, bhv_starbit_proj_loop, "bhvStarbitProjectile")