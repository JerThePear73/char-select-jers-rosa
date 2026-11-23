local function bhv_shrink_particle_init(o)
    o.oFlags = OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE
    o.oTimer = 0
    obj_set_billboard(o)
end
local function bhv_shrink_particle_loop(o)
    obj_scale(o, ((10 - o.oTimer)/10) * o.oBehParams)
    if o.oTimer >= 10 then
        obj_mark_for_deletion(o)
    end
end
id_bhvShrinkParticle = hook_behavior(nil, OBJ_LIST_UNIMPORTANT, true, bhv_shrink_particle_init, bhv_shrink_particle_loop, "bhvShrinkParticle")