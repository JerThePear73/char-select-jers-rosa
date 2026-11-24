-- name: [CS] \\#93deff\\Rosa
-- description: [CS] \\#93deff\\Rosa\n\\#ffffff\\By \\#008800\\JerThePear\n\n\\#ffffff\\Write a description here you dumb fuck!!!.\n\n\\#ff7777\\This Pack requires Character Select\nto use as a Library!

local TEXT_MOD_NAME = "Rosa"

-- Stops mod from loading if Character Select isn't on
if not _G.charSelectExists then
    djui_popup_create("\\#ffffdc\\\n"..TEXT_MOD_NAME.."\nRequires the Character Select Mod\nto use as a Library!\n\nPlease turn on the Character Select Mod\nand Restart the Room!", 6)
    return 0
end

-- Models --
local E_MODEL_ROSA = smlua_model_util_get_id('jers_rosalina_geo')
init_physbone_chain(E_MODEL_ROSA, 0, 0.2, 1, 90, 40)
init_physbone_chain(E_MODEL_ROSA, 1, 0.15, 1, 15, 30, rosa_dress_physbone)
local E_MODEL_ROSA_CAP = smlua_model_util_get_id('rosa_crown_geo')
local E_MODEL_ROSA_METAL_CAP = smlua_model_util_get_id('rosa_metal_crown_geo')
local E_MODEL_ROSA_WING_CAP = smlua_model_util_get_id('rosa_wing_crown_geo')

local E_MODEL_ROSA_RACER = smlua_model_util_get_id('jers_rosalina_racer_geo')
init_physbone_chain(E_MODEL_ROSA_RACER, 0, 0.2, 1, 90, 90)

local E_MODEL_ROSA_WITCH = smlua_model_util_get_id('jers_rosalina_witch_geo')
init_physbone_chain(E_MODEL_ROSA_WITCH, 0, 0.2, 1, 90, 40)
init_physbone_chain(E_MODEL_ROSA_WITCH, 1, 0.15, 1, 15, 30, rosa_dress_physbone)

local RosaModels = {
    E_MODEL_ROSA,
    E_MODEL_ROSA_RACER,
    E_MODEL_ROSA_WITCH,
}

-- Textures --
local TEX_ROSA = get_texture_info("rosa_icon")
local TEX_ROSA_GRAFFITI = get_texture_info("rosa_graffiti")

local VOICETABLE_ROSA = {
    [CHAR_SOUND_ATTACKED] = {"rosa_hurt1.ogg", "rosa_hurt2.ogg", "rosa_hurt3.ogg"},
    [CHAR_SOUND_COUGHING1] = nil,
    [CHAR_SOUND_COUGHING2] = nil,
    [CHAR_SOUND_COUGHING3] = nil,
    [CHAR_SOUND_DOH] = "rosa_hurt3.ogg",
    [CHAR_SOUND_DROWNING] = "rosa_drowning.ogg",
    [CHAR_SOUND_DYING] = "rosa_dying.ogg",
    [CHAR_SOUND_EEUH] = "rosa_lift.ogg",
    [CHAR_SOUND_GROUND_POUND_WAH] = "rosa_huh.ogg",
    [CHAR_SOUND_HAHA] = "rosa_notbad.ogg",
    [CHAR_SOUND_HAHA_2] = "rosa_notbad.ogg",
    [CHAR_SOUND_HERE_WE_GO] = "rosa_ohyeah.ogg",
    [CHAR_SOUND_HOOHOO] = "rosa_hoo.ogg",
    [CHAR_SOUND_HRMM] = "rosa_lift.ogg",
    [CHAR_SOUND_IMA_TIRED] = nil,
    [CHAR_SOUND_MAMA_MIA] = "rosa_mamamia.ogg",
    [CHAR_SOUND_LETS_A_GO] = "rosa_alright.ogg",
    [CHAR_SOUND_ON_FIRE] = "rosa_burning.ogg",
    [CHAR_SOUND_OOOF] = "rosa_oof.ogg",
    [CHAR_SOUND_OOOF2] = "rosa_hurt3.ogg",
    [CHAR_SOUND_PANTING] = nil,
    [CHAR_SOUND_PANTING_COLD] = nil,
    [CHAR_SOUND_PUNCH_HOO] = "rosa_hooo.ogg",
    [CHAR_SOUND_PUNCH_WAH] = "rosa_ha.ogg",
    [CHAR_SOUND_PUNCH_YAH] = "rosa_ho.ogg",
    [CHAR_SOUND_SO_LONGA_BOWSER] = "rosa_solongabowser.ogg",
    [CHAR_SOUND_SNORING1] = nil,
    [CHAR_SOUND_SNORING2] = nil,
    [CHAR_SOUND_SNORING3] = nil,
    [CHAR_SOUND_TWIRL_BOUNCE] = "rosa_wow.ogg",
    [CHAR_SOUND_UH] = "rosa_ledge.ogg",
    [CHAR_SOUND_UH2] = "rosa_lift.ogg",
    [CHAR_SOUND_UH2_2] = nil,
    [CHAR_SOUND_WAAAOOOW] = "rosa_falling.ogg",
    [CHAR_SOUND_WAH2] = "rosa_huh.ogg",
    [CHAR_SOUND_WHOA] = "rosa_ledge.ogg",
    [CHAR_SOUND_YAHOO] = "rosa_yeah.ogg",
    [CHAR_SOUND_YAWNING] = nil,
    [CHAR_SOUND_YAHOO_WAHA_YIPPEE] = {"rosa_wohohoo.ogg", "rosa_woohoo.ogg", "rosa_woo.ogg"},
    [CHAR_SOUND_YAH_WAH_HOO] = {"rosa_hah.ogg", "rosa_hoh.ogg", "rosa_ya.ogg"},
    [CHAR_SOUND_OKEY_DOKEY] = "rosa_laugh.ogg"
}

local PALETTES_ROSA = {
    {
        name = "Default",
        [PANTS]  = "B4F8FF",
        [SHIRT]  = "6FB4A2",
        [GLOVES] = "bcbcbc",
        [SHOES]  = "ffffff",
        [HAIR]   = "d4ae77",
        [SKIN]   = "FFCEC0",
        [CAP]    = "bcbcbc",
        [EMBLEM] = "ffb742",
    },{
        name = "Fire Flower",
        [PANTS]  = "ffffff",
        [SHIRT]  = "ae0000",
        [GLOVES] = "bcbcbc",
        [SHOES]  = "ffffff",
        [HAIR]   = "d4ae77",
        [SKIN]   = "FFCEC0",
        [CAP]    = "bcbcbc",
        [EMBLEM] = "ffb742",
    },{
        name = "Pale Sorceress",
        [PANTS]  = "ff2500",
        [SHIRT]  = "c3dfff",
        [GLOVES] = "ffbe00",
        [SHOES]  = "ff2500",
        [HAIR]   = "ff464a",
        [SKIN]   = "ffa989",
        [CAP]    = "aaaaaa",
        [EMBLEM] = "007866",
    },{
        name = "Amethyst Athlete",
        [PANTS]  = "bd0056",
        [SHIRT]  = "edd98f",
        [GLOVES] = "ffbe00",
        [SHOES]  = "bd0056",
        [HAIR]   = "944186",
        [SKIN]   = "ffa989",
        [CAP]    = "aaaaaa",
        [EMBLEM] = "a80000",
    },{
        name = "Legacy",
        [PANTS]  = "ffffff",
        [SHIRT]  = "93DEFF",
        [GLOVES] = "bcbcbc",
        [SHOES]  = "ffffff",
        [HAIR]   = "E0C199",
        [SKIN]   = "FFCEC0",
        [CAP]    = "bcbcbc",
        [EMBLEM] = "FFDB7E",
    },
}

local PALETTES_ROSA_RACER = {
    {
        name = "Default",
        [PANTS]  = "ffffff",
        [SHIRT]  = "d4f8ff",
        [GLOVES] = "666666",
        [SHOES]  = "61f1ff",
        [HAIR]   = "d4ae77",
        [SKIN]   = "FFCEC0",
        [CAP]    = "bcbcbc",
        [EMBLEM] = "ffb742",
    },
}

local PALETTES_ROSA_WITCH = {
    {
        name = "Default",
        [PANTS]  = "00FFFF",
        [SHIRT]  = "402850",
        [GLOVES] = "bcbcbc",
        [SHOES]  = "9D33C2",
        [HAIR]   = "d4ae77",
        [SKIN]   = "FFCEC0",
        [CAP]    = "402850",
        [EMBLEM] = "ffb742",
    },{
        name = "Crimson Caster",
        [PANTS]  = "ff5d00",
        [SHIRT]  = "792619",
        [GLOVES] = "ffb254",
        [SHOES]  = "ff5e00",
        [HAIR]   = "ae7162",
        [SKIN]   = "ffa38d",
        [CAP]    = "792619",
        [EMBLEM] = "ff5d00",
    },{
        name = "Stygian Sorcerer",
        [PANTS]  = "cda339",
        [SHIRT]  = "2c269a",
        [GLOVES] = "ffb600",
        [SHOES]  = "995d40",
        [HAIR]   = "1b1a2c",
        [SKIN]   = "FFCEC0",
        [CAP]    = "cda339",
        [EMBLEM] = "009cff",
    },{
        name = "Serene Remedy",
        [PANTS]  = "a480a8",
        [SHIRT]  = "7a478b",
        [GLOVES] = "ffff93",
        [SHOES]  = "ffff93",
        [HAIR]   = "372f3b",
        [SKIN]   = "ffbda7",
        [CAP]    = "7a478b",
        [EMBLEM] = "ff00ff",
    },
}

local function rosa_punch_hands(m, frame)
    m.marioBodyState.punchState = 0
    return MARIO_HAND_PEACE_SIGN
end

local ANIMTABLE_ROSA = {
    [_G.charSelect.CS_ANIM_MENU]    = "jers_rosa_anim_menu",
    [CHAR_ANIM_RUNNING]             = function(m, frame)
                                        m.marioBodyState.torsoAngle.x = 0
                                        m.marioBodyState.torsoAngle.z = m.marioBodyState.torsoAngle.z * 0.9
                                        return "rosa_run"
                                    end,
    [CHAR_ANIM_WALKING]             = function(m, frame)
                                        m.marioBodyState.torsoAngle.x = 0
                                        m.marioBodyState.torsoAngle.z = 0
                                    end,
    [CHAR_ANIM_TIPTOE]              = function(m, frame)
                                        m.marioBodyState.torsoAngle.x = 0
                                        m.marioBodyState.torsoAngle.z = 0
                                    end,
    [CHAR_ANIM_IDLE_HEAD_LEFT]      = "rosa_idle",
    [CHAR_ANIM_IDLE_HEAD_RIGHT]     = "rosa_idle",
    [CHAR_ANIM_IDLE_HEAD_CENTER]    = "rosa_idle",
    [CHAR_ANIM_FIRST_PERSON]        = "rosa_idle",
}
local EYETABLE_ROSA = {
    [_G.charSelect.CS_ANIM_MENU]    = MARIO_EYES_LOOK_RIGHT,
}
local HANDTABLE_ROSA = {
    [_G.charSelect.CS_ANIM_MENU]    = MARIO_HAND_PEACE_SIGN,
    [CHAR_ANIM_FIRST_PUNCH]         = rosa_punch_hands,
    [CHAR_ANIM_SECOND_PUNCH]        = rosa_punch_hands,
    [CHAR_ANIM_FIRST_PUNCH_FAST]    = rosa_punch_hands,
    [CHAR_ANIM_SECOND_PUNCH_FAST]   = rosa_punch_hands,
    [CHAR_ANIM_GROUND_KICK]         = rosa_punch_hands,
    [CHAR_ANIM_AIR_KICK]            = rosa_punch_hands,
}

local CAP_ROSA = {
    normal = E_MODEL_ROSA_CAP,
    wing = E_MODEL_ROSA_WING_CAP,
    metal = E_MODEL_ROSA_METAL_CAP,
    metalWing = nil,
}

if _G.charSelectExists then
    CT_ROSA = _G.charSelect.character_add(
        "Rosa",
        "A mysterious princess from beyond the cosmos.",
        "JerThePear",
        {r = 100, g = 200, b = 255},
        E_MODEL_ROSA,
        CT_MARIO,
        TEX_ROSA,
        1.3
    )
end

local CSloaded = false
local function on_character_select_load()
    charSelect.character_add_costume(
        CT_ROSA,
        "Racer Rosa",
        "A mysterious princess from beyond the cosmos.",
        "JerThePear",
        {r = 100, g = 200, b = 255},
        E_MODEL_ROSA_RACER,
        CT_MARIO,
        TEX_ROSA,
        1.3
    )
    charSelect.character_add_costume(
        CT_ROSA,
        "Witch Rosa",
        "A mysterious princess from beyond the cosmos.",
        "JerThePear",
        {r = 157, g = 051, b = 194},
        E_MODEL_ROSA_WITCH,
        CT_MARIO,
        TEX_ROSA,
        1.3
    )
    for i=1, #PALETTES_ROSA do
        _G.charSelect.character_add_palette_preset(E_MODEL_ROSA, PALETTES_ROSA[i], PALETTES_ROSA[i].name)
	end
    for i=1, #PALETTES_ROSA_RACER do
        _G.charSelect.character_add_palette_preset(E_MODEL_ROSA_RACER, PALETTES_ROSA_RACER[i], PALETTES_ROSA_RACER[i].name)
	end
    for i=1, #PALETTES_ROSA_WITCH do
        _G.charSelect.character_add_palette_preset(E_MODEL_ROSA_WITCH, PALETTES_ROSA_WITCH[i], PALETTES_ROSA_WITCH[i].name)
	end

    for i=1, #RosaModels do
        charSelect.character_add_voice(RosaModels[i], VOICETABLE_ROSA)
        charSelect.character_add_animations(RosaModels[i], ANIMTABLE_ROSA, EYETABLE_ROSA, HANDTABLE_ROSA)
    end
    charSelect.character_add_caps(E_MODEL_ROSA, CAP_ROSA)
    charSelect.character_add_model_replacement(CT_ROSA, id_bhvYellowCoin, E_MODEL_STARBIT_COIN, false)

    charSelect.character_add_graffiti(CT_ROSA, TEX_ROSA_GRAFFITI)
    charSelect.character_set_nickname(CT_ROSA, "Rosalina", true)
    --charSelect.character_add_health_meter(CT_ROSA, HEALTH_METER_ROSA)

    CSloaded = true
end

local function on_character_sound(m, sound)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_ROSA then return _G.charSelect.voice.sound(m, sound) end
end

local function on_character_snore(m)
    if not CSloaded then return end
    if _G.charSelect.character_get_voice(m) == VOICETABLE_ROSA then return _G.charSelect.voice.snore(m) end
end

hook_event(HOOK_ON_MODS_LOADED, on_character_select_load)
hook_event(HOOK_CHARACTER_SOUND, on_character_sound)
hook_event(HOOK_MARIO_UPDATE, on_character_snore)