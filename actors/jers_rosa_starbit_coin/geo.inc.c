#include "src/game/envfx_snow.h"

const GeoLayout jers_rosa_starbit_coin_1_Colour_Switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, jers_rosa_starbit_coin_Starbit_Coin_DL_mesh_layer_1_mat_override_Starbit1_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jers_rosa_starbit_coin_1_Colour_Switch_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, jers_rosa_starbit_coin_Starbit_Coin_DL_mesh_layer_1_mat_override_Starbit2_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jers_rosa_starbit_coin_1_Colour_Switch_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, jers_rosa_starbit_coin_Starbit_Coin_DL_mesh_layer_1_mat_override_Starbit3_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jers_rosa_starbit_coin_1_Colour_Switch_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, jers_rosa_starbit_coin_Starbit_Coin_DL_mesh_layer_1_mat_override_Starbit4_3),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jers_rosa_starbit_coin_1_Colour_Switch_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, jers_rosa_starbit_coin_Starbit_Coin_DL_mesh_layer_1_mat_override_Starbit5_4),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout jers_rosa_starbit_coin_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 178, 75),
		GEO_OPEN_NODE(),
			GEO_ASM(0, jers_rosa_starbit_coin_rotation),
			GEO_ROTATION_NODE(LAYER_OPAQUE, 0, 0, 0),
			GEO_OPEN_NODE(),
				GEO_SWITCH_CASE(0, jers_rosa_starbit_coin_switch),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, jers_rosa_starbit_coin_Starbit_Coin_DL_mesh_layer_1),
					GEO_CLOSE_NODE(),
					GEO_BRANCH(1, jers_rosa_starbit_coin_1_Colour_Switch_opt1),
					GEO_BRANCH(1, jers_rosa_starbit_coin_1_Colour_Switch_opt2),
					GEO_BRANCH(1, jers_rosa_starbit_coin_1_Colour_Switch_opt3),
					GEO_BRANCH(1, jers_rosa_starbit_coin_1_Colour_Switch_opt4),
					GEO_BRANCH(1, jers_rosa_starbit_coin_1_Colour_Switch_opt5),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
