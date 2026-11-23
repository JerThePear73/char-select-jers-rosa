if not _G.wpets then return end

local E_MODEL_LUMA_PET = smlua_model_util_get_id('luma_pet_geo')

local ID_LUMA_PET = _G.wpets.add_pet({
	name = "Luma", credit = "JerThePear",
	description = "A little shiny companion. Smells like star bits.",
	modelID = E_MODEL_LUMA_PET,
	scale = 0.8, yOffset = 0, flying = true
})

_G.wpets.set_pet_anims_wing(ID_LUMA_PET)

_G.wpets.set_pet_sounds(ID_LUMA_PET, {
	spawn = {'luma_chirp.ogg', 'luma_sparkle.ogg'},
	happy = 'luma_sparkle.ogg',
	vanish = nil,
	step = nil
})