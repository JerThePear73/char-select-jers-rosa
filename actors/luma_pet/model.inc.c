Lights1 luma_pet_Body_lights = gdSPDefLights1(
	0x7F, 0x68, 0x19,
	0xFF, 0xD2, 0x3C, 0x28, 0x28, 0x28);

Lights1 luma_pet_pet_basic_lights = gdSPDefLights1(
	0x72, 0x72, 0x72,
	0xE5, 0xE5, 0xE5, 0x28, 0x28, 0x28);

Lights1 luma_pet_Eyes_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx luma_pet_pet_basic_ia8_aligner[] = {gsSPEndDisplayList()};
u8 luma_pet_pet_basic_ia8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x3f, 0x0f, 0x0f, 0x3f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0x8f, 0xdf, 0x3f, 0x0f, 0x3f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0xdf, 0xdf, 0x3f, 0x0f, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x3f, 0x3f, 0x0f, 0x0f, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x0f, 0x2f, 0x2f, 0x2f, 0x2f, 0x0f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x3f, 0x0f, 0x3f, 0x3f, 0x0f, 0x3f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x3f, 0x0f, 0x0f, 0x3f, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Gfx luma_pet_eye_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 luma_pet_eye_rgba16[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x42, 0x11, 0x42, 0x11, 
	0x42, 0x11, 0x42, 0x11, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0xff, 0xff, 0xff, 0xff, 
	0x63, 0x19, 0x63, 0x19, 0x42, 0x11, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0xff, 0xff, 0xff, 0xff, 
	0x63, 0x19, 0x42, 0x11, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0xff, 0xff, 0xff, 0xff, 
	0x63, 0x19, 0x42, 0x11, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0x63, 0x19, 0x63, 0x19, 
	0x42, 0x11, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0x63, 0x19, 0x42, 0x11, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0x42, 0x11, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x42, 0x11, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 
	0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	
};

Vtx luma_pet_Body_mesh_layer_1_vtx_0[58] = {
	{{ {-11, -13, 18}, 0, {368, -16}, {217, 153, 62, 255} }},
	{{ {-5, -18, 8}, 0, {368, -16}, {238, 134, 28, 255} }},
	{{ {5, -18, 8}, 0, {368, 240}, {18, 134, 28, 255} }},
	{{ {11, -13, 18}, 0, {368, 240}, {39, 153, 62, 255} }},
	{{ {19, -13, 0}, 0, {368, 368}, {76, 154, 0, 255} }},
	{{ {8, -18, 0}, 0, {368, 368}, {34, 134, 0, 255} }},
	{{ {-5, -18, 8}, 0, {112, 240}, {238, 134, 28, 255} }},
	{{ {-8, -18, 0}, 0, {112, 368}, {222, 134, 0, 255} }},
	{{ {-5, -18, -8}, 0, {112, 496}, {238, 134, 228, 255} }},
	{{ {5, -18, -8}, 0, {368, 496}, {18, 134, 228, 255} }},
	{{ {11, -13, -18}, 0, {368, 496}, {39, 153, 194, 255} }},
	{{ {-5, -18, -8}, 0, {368, 752}, {238, 134, 228, 255} }},
	{{ {-11, -13, -18}, 0, {368, 752}, {217, 153, 194, 255} }},
	{{ {-19, -13, 0}, 0, {368, 880}, {180, 154, 0, 255} }},
	{{ {-8, -18, 0}, 0, {368, 880}, {222, 134, 0, 255} }},
	{{ {-5, -18, 8}, 0, {368, 1008}, {238, 134, 28, 255} }},
	{{ {-11, -13, 18}, 0, {368, 1008}, {217, 153, 62, 255} }},
	{{ {-28, -5, 0}, 0, {624, 880}, {146, 192, 0, 255} }},
	{{ {-15, -5, 25}, 0, {624, 1008}, {198, 190, 92, 255} }},
	{{ {-31, 5, 0}, 0, {624, 880}, {130, 243, 0, 255} }},
	{{ {-17, 5, 28}, 0, {624, 1008}, {189, 242, 107, 255} }},
	{{ {-17, 17, 27}, 0, {624, 1008}, {192, 40, 102, 255} }},
	{{ {-30, 17, 0}, 0, {624, 880}, {135, 39, 0, 255} }},
	{{ {-11, 32, 19}, 0, {624, 1008}, {203, 78, 85, 255} }},
	{{ {-21, 32, 0}, 0, {624, 880}, {153, 75, 0, 255} }},
	{{ {-11, 32, -19}, 0, {624, 752}, {203, 78, 171, 255} }},
	{{ {-17, 17, -27}, 0, {624, 752}, {192, 40, 154, 255} }},
	{{ {17, 17, -27}, 0, {624, 496}, {64, 40, 154, 255} }},
	{{ {11, 32, -19}, 0, {624, 496}, {53, 78, 171, 255} }},
	{{ {30, 17, 0}, 0, {624, 368}, {121, 39, 0, 255} }},
	{{ {21, 32, 0}, 0, {624, 368}, {103, 75, 0, 255} }},
	{{ {11, 32, 19}, 0, {624, 240}, {53, 78, 85, 255} }},
	{{ {30, 17, 0}, 0, {624, 368}, {121, 39, 0, 255} }},
	{{ {11, 32, 19}, 0, {624, 240}, {53, 78, 85, 255} }},
	{{ {17, 17, 27}, 0, {624, 240}, {64, 40, 102, 255} }},
	{{ {-11, 32, 19}, 0, {624, -16}, {203, 78, 85, 255} }},
	{{ {-17, 17, 27}, 0, {624, -16}, {192, 40, 102, 255} }},
	{{ {17, 5, 28}, 0, {624, 240}, {67, 242, 107, 255} }},
	{{ {-17, 5, 28}, 0, {624, -16}, {189, 242, 107, 255} }},
	{{ {15, -5, 25}, 0, {624, 240}, {58, 190, 92, 255} }},
	{{ {-15, -5, 25}, 0, {624, -16}, {198, 190, 92, 255} }},
	{{ {-11, -13, 18}, 0, {368, -16}, {217, 153, 62, 255} }},
	{{ {11, -13, 18}, 0, {368, 240}, {39, 153, 62, 255} }},
	{{ {28, -5, 0}, 0, {624, 368}, {110, 192, 0, 255} }},
	{{ {19, -13, 0}, 0, {368, 368}, {76, 154, 0, 255} }},
	{{ {11, -13, -18}, 0, {368, 496}, {39, 153, 194, 255} }},
	{{ {15, -5, -25}, 0, {624, 496}, {58, 190, 164, 255} }},
	{{ {-15, -5, -25}, 0, {624, 752}, {198, 190, 164, 255} }},
	{{ {-11, -13, -18}, 0, {368, 752}, {217, 153, 194, 255} }},
	{{ {-28, -5, 0}, 0, {624, 880}, {146, 192, 0, 255} }},
	{{ {-19, -13, 0}, 0, {368, 880}, {180, 154, 0, 255} }},
	{{ {-31, 5, 0}, 0, {624, 880}, {130, 243, 0, 255} }},
	{{ {-17, 5, -28}, 0, {624, 752}, {189, 242, 149, 255} }},
	{{ {-17, 17, -27}, 0, {624, 752}, {192, 40, 154, 255} }},
	{{ {-30, 17, 0}, 0, {624, 880}, {135, 39, 0, 255} }},
	{{ {17, 17, -27}, 0, {624, 496}, {64, 40, 154, 255} }},
	{{ {17, 5, -28}, 0, {624, 496}, {67, 242, 149, 255} }},
	{{ {31, 5, 0}, 0, {624, 368}, {126, 243, 0, 255} }},
};

Gfx luma_pet_Body_mesh_layer_1_tri_0[] = {
	gsSPVertex(luma_pet_Body_mesh_layer_1_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
	gsSP2Triangles(5, 2, 6, 0, 5, 6, 7, 0),
	gsSP2Triangles(8, 5, 7, 0, 8, 9, 5, 0),
	gsSP2Triangles(4, 5, 9, 0, 4, 9, 10, 0),
	gsSP2Triangles(10, 9, 11, 0, 10, 11, 12, 0),
	gsSP2Triangles(13, 12, 11, 0, 13, 11, 14, 0),
	gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
	gsSP2Triangles(16, 17, 13, 0, 16, 18, 17, 0),
	gsSP2Triangles(18, 19, 17, 0, 18, 20, 19, 0),
	gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
	gsSP2Triangles(22, 21, 23, 0, 22, 23, 24, 0),
	gsSP2Triangles(22, 24, 25, 0, 22, 25, 26, 0),
	gsSP2Triangles(27, 26, 25, 0, 27, 25, 28, 0),
	gsSP2Triangles(29, 27, 28, 0, 29, 28, 30, 0),
	gsSP1Triangle(29, 30, 31, 0),
	gsSPVertex(luma_pet_Body_mesh_layer_1_vtx_0 + 32, 26, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
	gsSP2Triangles(2, 3, 4, 0, 5, 2, 4, 0),
	gsSP2Triangles(5, 4, 6, 0, 7, 5, 6, 0),
	gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 7, 10, 0),
	gsSP2Triangles(11, 10, 12, 0, 13, 11, 12, 0),
	gsSP2Triangles(13, 14, 11, 0, 15, 14, 13, 0),
	gsSP2Triangles(15, 13, 16, 0, 17, 15, 16, 0),
	gsSP2Triangles(17, 16, 18, 0, 15, 17, 19, 0),
	gsSP2Triangles(15, 19, 20, 0, 19, 21, 20, 0),
	gsSP2Triangles(19, 22, 21, 0, 20, 21, 23, 0),
	gsSP2Triangles(20, 23, 24, 0, 25, 24, 23, 0),
	gsSP2Triangles(25, 23, 0, 0, 25, 0, 2, 0),
	gsSP2Triangles(25, 2, 5, 0, 7, 25, 5, 0),
	gsSP2Triangles(7, 11, 25, 0, 14, 25, 11, 0),
	gsSP2Triangles(14, 24, 25, 0, 15, 24, 14, 0),
	gsSP1Triangle(15, 20, 24, 0),
	gsSPEndDisplayList(),
};

Vtx luma_pet_Head_skinned_mesh_layer_1_vtx_0[7] = {
	{{ {-21, 32, 0}, 0, {624, 880}, {153, 75, 0, 255} }},
	{{ {-11, 32, 19}, 0, {624, -16}, {203, 78, 85, 255} }},
	{{ {-11, 32, 19}, 0, {624, 1008}, {203, 78, 85, 255} }},
	{{ {-11, 32, -19}, 0, {624, 752}, {203, 78, 171, 255} }},
	{{ {11, 32, -19}, 0, {624, 496}, {53, 78, 171, 255} }},
	{{ {21, 32, 0}, 0, {624, 368}, {103, 75, 0, 255} }},
	{{ {11, 32, 19}, 0, {624, 240}, {53, 78, 85, 255} }},
};

Gfx luma_pet_Head_skinned_mesh_layer_1_tri_0[] = {
	gsSPVertex(luma_pet_Head_skinned_mesh_layer_1_vtx_0 + 0, 7, 0),
	gsSPEndDisplayList(),
};

Vtx luma_pet_Head_mesh_layer_1_vtx_0[7] = {
	{{ {4, 29, 6}, 0, {624, 240}, {47, 88, 79, 255} }},
	{{ {-4, 29, 6}, 0, {624, -16}, {209, 92, 74, 255} }},
	{{ {7, 29, 0}, 0, {624, 368}, {110, 57, 27, 255} }},
	{{ {4, 29, -6}, 0, {624, 496}, {37, 64, 153, 255} }},
	{{ {-4, 29, -6}, 0, {624, 752}, {206, 88, 180, 255} }},
	{{ {-7, 29, 0}, 0, {624, 880}, {166, 90, 1, 255} }},
	{{ {-4, 29, 6}, 0, {624, 1008}, {209, 92, 74, 255} }},
};

Gfx luma_pet_Head_mesh_layer_1_tri_0[] = {
	gsSPVertex(luma_pet_Head_mesh_layer_1_vtx_0 + 0, 7, 7),
	gsSP2Triangles(1, 7, 8, 0, 1, 6, 7, 0),
	gsSP2Triangles(5, 7, 6, 0, 5, 9, 7, 0),
	gsSP2Triangles(5, 4, 9, 0, 9, 4, 10, 0),
	gsSP2Triangles(4, 3, 10, 0, 10, 3, 11, 0),
	gsSP2Triangles(0, 11, 3, 0, 0, 12, 11, 0),
	gsSP2Triangles(0, 13, 12, 0, 0, 2, 13, 0),
	gsSPEndDisplayList(),
};

Vtx luma_pet_Head_mesh_layer_1_vtx_1[8] = {
	{{ {2, 37, -1}, 0, {-16, 1008}, {3, 127, 254, 255} }},
	{{ {-7, 29, 0}, 0, {624, 880}, {166, 90, 1, 255} }},
	{{ {-4, 29, 6}, 0, {624, 1008}, {209, 92, 74, 255} }},
	{{ {-4, 29, -6}, 0, {624, 752}, {206, 88, 180, 255} }},
	{{ {4, 29, -6}, 0, {624, 496}, {37, 64, 153, 255} }},
	{{ {12, 33, -6}, 0, {-16, 1008}, {113, 33, 209, 255} }},
	{{ {7, 29, 0}, 0, {624, 368}, {110, 57, 27, 255} }},
	{{ {4, 29, 6}, 0, {624, 240}, {47, 88, 79, 255} }},
};

Gfx luma_pet_Head_mesh_layer_1_tri_1[] = {
	gsSPVertex(luma_pet_Head_mesh_layer_1_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
	gsSP2Triangles(5, 0, 6, 0, 7, 6, 0, 0),
	gsSP2Triangles(2, 7, 0, 0, 5, 6, 4, 0),
	gsSPEndDisplayList(),
};

Vtx luma_pet_Head_mesh_layer_4_vtx_0[8] = {
	{{ {6, -13, 29}, 0, {-16, 496}, {0, 10, 127, 255} }},
	{{ {17, 9, 27}, 0, {240, -16}, {0, 10, 127, 255} }},
	{{ {6, 9, 27}, 0, {-16, -16}, {0, 10, 127, 255} }},
	{{ {17, -13, 29}, 0, {240, 496}, {0, 10, 127, 255} }},
	{{ {-17, 9, 27}, 0, {-16, -16}, {0, 10, 127, 255} }},
	{{ {-6, -13, 29}, 0, {240, 496}, {0, 10, 127, 255} }},
	{{ {-6, 9, 27}, 0, {240, -16}, {0, 10, 127, 255} }},
	{{ {-17, -13, 29}, 0, {-16, 496}, {0, 10, 127, 255} }},
};

Gfx luma_pet_Head_mesh_layer_4_tri_0[] = {
	gsSPVertex(luma_pet_Head_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx luma_pet_LeftArm_mesh_layer_1_vtx_0[28] = {
	{{ {7, 9, -12}, 0, {803, -16}, {123, 253, 31, 255} }},
	{{ {-1, 14, -5}, 0, {1008, -16}, {31, 62, 107, 255} }},
	{{ {-1, 3, -6}, 0, {803, -16}, {28, 181, 99, 255} }},
	{{ {5, 13, -18}, 0, {803, 496}, {112, 48, 222, 255} }},
	{{ {1, 0, -17}, 0, {598, -16}, {62, 149, 226, 255} }},
	{{ {-1, 3, -6}, 0, {598, -16}, {28, 181, 99, 255} }},
	{{ {0, 4, -23}, 0, {598, 496}, {47, 193, 156, 255} }},
	{{ {-11, 4, -20}, 0, {394, 496}, {163, 193, 196, 255} }},
	{{ {-10, 0, -14}, 0, {394, -16}, {188, 149, 7, 255} }},
	{{ {-1, 3, -6}, 0, {394, -16}, {28, 181, 99, 255} }},
	{{ {-13, 13, -13}, 0, {189, 496}, {143, 48, 31, 255} }},
	{{ {-11, 9, -6}, 0, {189, -16}, {168, 253, 92, 255} }},
	{{ {-1, 3, -6}, 0, {189, -16}, {28, 181, 99, 255} }},
	{{ {-1, 14, -5}, 0, {-16, -16}, {31, 62, 107, 255} }},
	{{ {-1, 3, -6}, 0, {-16, -16}, {28, 181, 99, 255} }},
	{{ {-3, 19, -11}, 0, {-16, 496}, {13, 117, 47, 255} }},
	{{ {-10, 18, -24}, 0, {189, 496}, {154, 73, 234, 255} }},
	{{ {-6, 20, -23}, 0, {-16, 496}, {253, 127, 247, 255} }},
	{{ {-8, 19, -27}, 0, {189, 496}, {228, 75, 157, 255} }},
	{{ {-10, 15, -26}, 0, {394, 496}, {170, 241, 163, 255} }},
	{{ {-8, 19, -27}, 0, {394, 496}, {228, 75, 157, 255} }},
	{{ {-5, 15, -28}, 0, {598, 496}, {24, 241, 132, 255} }},
	{{ {-8, 19, -27}, 0, {598, 496}, {228, 75, 157, 255} }},
	{{ {-3, 18, -26}, 0, {803, 496}, {75, 73, 184, 255} }},
	{{ {-8, 19, -27}, 0, {803, 496}, {228, 75, 157, 255} }},
	{{ {-3, 19, -11}, 0, {1008, 496}, {13, 117, 47, 255} }},
	{{ {-6, 20, -23}, 0, {1008, 496}, {253, 127, 247, 255} }},
	{{ {-8, 19, -27}, 0, {1008, 496}, {228, 75, 157, 255} }},
};

Gfx luma_pet_LeftArm_mesh_layer_1_tri_0[] = {
	gsSPVertex(luma_pet_LeftArm_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(3, 4, 6, 0, 4, 7, 6, 0),
	gsSP2Triangles(4, 8, 7, 0, 8, 4, 9, 0),
	gsSP2Triangles(8, 10, 7, 0, 8, 11, 10, 0),
	gsSP2Triangles(11, 8, 12, 0, 10, 11, 13, 0),
	gsSP2Triangles(13, 11, 14, 0, 10, 13, 15, 0),
	gsSP2Triangles(15, 16, 10, 0, 15, 17, 16, 0),
	gsSP2Triangles(16, 17, 18, 0, 7, 10, 16, 0),
	gsSP2Triangles(7, 16, 19, 0, 19, 16, 20, 0),
	gsSP2Triangles(7, 19, 21, 0, 21, 19, 22, 0),
	gsSP2Triangles(7, 21, 6, 0, 6, 21, 23, 0),
	gsSP2Triangles(23, 21, 24, 0, 6, 23, 3, 0),
	gsSP2Triangles(25, 3, 23, 0, 25, 23, 26, 0),
	gsSP2Triangles(26, 23, 27, 0, 1, 3, 25, 0),
	gsSPEndDisplayList(),
};

Vtx luma_pet_LeftLeg_mesh_layer_1_vtx_0[28] = {
	{{ {9, -4, -3}, 0, {803, -16}, {110, 56, 225, 255} }},
	{{ {0, -4, -10}, 0, {1008, -16}, {0, 62, 145, 255} }},
	{{ {0, 1, 0}, 0, {803, -16}, {0, 127, 10, 255} }},
	{{ {9, -12, -4}, 0, {803, 496}, {117, 229, 216, 255} }},
	{{ {6, -5, 8}, 0, {598, -16}, {68, 46, 97, 255} }},
	{{ {0, 1, 0}, 0, {598, -16}, {0, 127, 10, 255} }},
	{{ {6, -13, 7}, 0, {598, 496}, {73, 218, 97, 255} }},
	{{ {-6, -13, 7}, 0, {394, 496}, {183, 218, 97, 255} }},
	{{ {-6, -5, 8}, 0, {394, -16}, {188, 46, 97, 255} }},
	{{ {0, 1, 0}, 0, {394, -16}, {0, 127, 10, 255} }},
	{{ {-9, -12, -4}, 0, {189, 496}, {139, 229, 216, 255} }},
	{{ {-9, -4, -3}, 0, {189, -16}, {146, 56, 225, 255} }},
	{{ {0, 1, 0}, 0, {189, -16}, {0, 127, 10, 255} }},
	{{ {0, -4, -10}, 0, {-16, -16}, {0, 62, 145, 255} }},
	{{ {0, 1, 0}, 0, {-16, -16}, {0, 127, 10, 255} }},
	{{ {0, -12, -11}, 0, {-16, 496}, {0, 236, 131, 255} }},
	{{ {-3, -23, -3}, 0, {189, 496}, {164, 176, 220, 255} }},
	{{ {0, -23, -5}, 0, {-16, 496}, {0, 181, 153, 255} }},
	{{ {0, -26, -2}, 0, {189, 496}, {0, 129, 246, 255} }},
	{{ {-2, -24, 1}, 0, {394, 496}, {199, 168, 72, 255} }},
	{{ {0, -26, -2}, 0, {394, 496}, {0, 129, 246, 255} }},
	{{ {2, -24, 1}, 0, {598, 496}, {57, 168, 72, 255} }},
	{{ {0, -26, -2}, 0, {598, 496}, {0, 129, 246, 255} }},
	{{ {4, -23, -3}, 0, {803, 496}, {92, 176, 220, 255} }},
	{{ {0, -26, -2}, 0, {803, 496}, {0, 129, 246, 255} }},
	{{ {0, -12, -11}, 0, {1008, 496}, {0, 236, 131, 255} }},
	{{ {0, -23, -5}, 0, {1008, 496}, {0, 181, 153, 255} }},
	{{ {0, -26, -2}, 0, {1008, 496}, {0, 129, 246, 255} }},
};

Gfx luma_pet_LeftLeg_mesh_layer_1_tri_0[] = {
	gsSPVertex(luma_pet_LeftLeg_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
	gsSP2Triangles(3, 4, 6, 0, 4, 7, 6, 0),
	gsSP2Triangles(4, 8, 7, 0, 8, 4, 9, 0),
	gsSP2Triangles(8, 10, 7, 0, 8, 11, 10, 0),
	gsSP2Triangles(11, 8, 12, 0, 10, 11, 13, 0),
	gsSP2Triangles(13, 11, 14, 0, 10, 13, 15, 0),
	gsSP2Triangles(15, 16, 10, 0, 15, 17, 16, 0),
	gsSP2Triangles(16, 17, 18, 0, 7, 10, 16, 0),
	gsSP2Triangles(7, 16, 19, 0, 19, 16, 20, 0),
	gsSP2Triangles(7, 19, 21, 0, 21, 19, 22, 0),
	gsSP2Triangles(7, 21, 6, 0, 6, 21, 23, 0),
	gsSP2Triangles(23, 21, 24, 0, 6, 23, 3, 0),
	gsSP2Triangles(25, 3, 23, 0, 25, 23, 26, 0),
	gsSP2Triangles(26, 23, 27, 0, 1, 3, 25, 0),
	gsSPEndDisplayList(),
};

Vtx luma_pet_RightArm_mesh_layer_1_vtx_0[28] = {
	{{ {-7, 9, -12}, 0, {803, -16}, {133, 253, 31, 255} }},
	{{ {1, 3, -6}, 0, {803, -16}, {228, 181, 99, 255} }},
	{{ {1, 14, -5}, 0, {1008, -16}, {225, 62, 107, 255} }},
	{{ {-5, 13, -18}, 0, {803, 496}, {144, 48, 222, 255} }},
	{{ {3, 19, -11}, 0, {1008, 496}, {243, 117, 47, 255} }},
	{{ {3, 18, -26}, 0, {803, 496}, {181, 73, 184, 255} }},
	{{ {6, 20, -23}, 0, {1008, 496}, {3, 127, 247, 255} }},
	{{ {8, 19, -27}, 0, {1008, 496}, {28, 75, 157, 255} }},
	{{ {0, 4, -23}, 0, {598, 496}, {209, 193, 156, 255} }},
	{{ {5, 15, -28}, 0, {598, 496}, {232, 241, 132, 255} }},
	{{ {8, 19, -27}, 0, {803, 496}, {28, 75, 157, 255} }},
	{{ {11, 4, -20}, 0, {394, 496}, {93, 193, 196, 255} }},
	{{ {10, 15, -26}, 0, {394, 496}, {86, 241, 163, 255} }},
	{{ {8, 19, -27}, 0, {598, 496}, {28, 75, 157, 255} }},
	{{ {10, 18, -24}, 0, {189, 496}, {102, 73, 234, 255} }},
	{{ {8, 19, -27}, 0, {394, 496}, {28, 75, 157, 255} }},
	{{ {13, 13, -13}, 0, {189, 496}, {113, 48, 31, 255} }},
	{{ {3, 19, -11}, 0, {-16, 496}, {243, 117, 47, 255} }},
	{{ {6, 20, -23}, 0, {-16, 496}, {3, 127, 247, 255} }},
	{{ {8, 19, -27}, 0, {189, 496}, {28, 75, 157, 255} }},
	{{ {1, 14, -5}, 0, {-16, -16}, {225, 62, 107, 255} }},
	{{ {11, 9, -6}, 0, {189, -16}, {88, 253, 92, 255} }},
	{{ {1, 3, -6}, 0, {-16, -16}, {228, 181, 99, 255} }},
	{{ {10, 0, -14}, 0, {394, -16}, {68, 149, 7, 255} }},
	{{ {1, 3, -6}, 0, {189, -16}, {228, 181, 99, 255} }},
	{{ {-1, 0, -17}, 0, {598, -16}, {194, 149, 226, 255} }},
	{{ {1, 3, -6}, 0, {394, -16}, {228, 181, 99, 255} }},
	{{ {1, 3, -6}, 0, {598, -16}, {228, 181, 99, 255} }},
};

Gfx luma_pet_RightArm_mesh_layer_1_tri_0[] = {
	gsSPVertex(luma_pet_RightArm_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 4, 5, 3, 0),
	gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
	gsSP2Triangles(5, 8, 3, 0, 5, 9, 8, 0),
	gsSP2Triangles(5, 10, 9, 0, 9, 11, 8, 0),
	gsSP2Triangles(9, 12, 11, 0, 9, 13, 12, 0),
	gsSP2Triangles(11, 12, 14, 0, 12, 15, 14, 0),
	gsSP2Triangles(11, 14, 16, 0, 14, 17, 16, 0),
	gsSP2Triangles(14, 18, 17, 0, 14, 19, 18, 0),
	gsSP2Triangles(16, 17, 20, 0, 16, 20, 21, 0),
	gsSP2Triangles(20, 22, 21, 0, 16, 21, 23, 0),
	gsSP2Triangles(21, 24, 23, 0, 16, 23, 11, 0),
	gsSP2Triangles(11, 23, 25, 0, 23, 26, 25, 0),
	gsSP2Triangles(11, 25, 8, 0, 3, 8, 25, 0),
	gsSP2Triangles(3, 25, 0, 0, 25, 27, 0, 0),
	gsSPEndDisplayList(),
};

Vtx luma_pet_RightLeg_mesh_layer_1_vtx_0[28] = {
	{{ {-9, -4, -3}, 0, {803, -16}, {146, 56, 225, 255} }},
	{{ {0, 1, 0}, 0, {803, -16}, {0, 127, 10, 255} }},
	{{ {0, -4, -10}, 0, {1008, -16}, {0, 62, 145, 255} }},
	{{ {-9, -12, -4}, 0, {803, 496}, {139, 229, 216, 255} }},
	{{ {0, -12, -11}, 0, {1008, 496}, {0, 236, 131, 255} }},
	{{ {0, -23, -5}, 0, {1008, 496}, {0, 181, 153, 255} }},
	{{ {-4, -23, -3}, 0, {803, 496}, {164, 176, 220, 255} }},
	{{ {0, -26, -2}, 0, {1008, 496}, {0, 129, 246, 255} }},
	{{ {-6, -13, 7}, 0, {598, 496}, {183, 218, 97, 255} }},
	{{ {-2, -24, 1}, 0, {598, 496}, {199, 168, 72, 255} }},
	{{ {0, -26, -2}, 0, {803, 496}, {0, 129, 246, 255} }},
	{{ {6, -13, 7}, 0, {394, 496}, {73, 218, 97, 255} }},
	{{ {2, -24, 1}, 0, {394, 496}, {57, 168, 72, 255} }},
	{{ {0, -26, -2}, 0, {598, 496}, {0, 129, 246, 255} }},
	{{ {3, -23, -3}, 0, {189, 496}, {92, 176, 220, 255} }},
	{{ {0, -26, -2}, 0, {394, 496}, {0, 129, 246, 255} }},
	{{ {9, -12, -4}, 0, {189, 496}, {117, 229, 216, 255} }},
	{{ {0, -12, -11}, 0, {-16, 496}, {0, 236, 131, 255} }},
	{{ {0, -23, -5}, 0, {-16, 496}, {0, 181, 153, 255} }},
	{{ {0, -26, -2}, 0, {189, 496}, {0, 129, 246, 255} }},
	{{ {0, -4, -10}, 0, {-16, -16}, {0, 62, 145, 255} }},
	{{ {9, -4, -3}, 0, {189, -16}, {110, 56, 225, 255} }},
	{{ {0, 1, 0}, 0, {-16, -16}, {0, 127, 10, 255} }},
	{{ {6, -5, 8}, 0, {394, -16}, {68, 46, 97, 255} }},
	{{ {0, 1, 0}, 0, {189, -16}, {0, 127, 10, 255} }},
	{{ {-6, -5, 8}, 0, {598, -16}, {188, 46, 97, 255} }},
	{{ {0, 1, 0}, 0, {394, -16}, {0, 127, 10, 255} }},
	{{ {0, 1, 0}, 0, {598, -16}, {0, 127, 10, 255} }},
};

Gfx luma_pet_RightLeg_mesh_layer_1_tri_0[] = {
	gsSPVertex(luma_pet_RightLeg_mesh_layer_1_vtx_0 + 0, 28, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(3, 2, 4, 0, 5, 3, 4, 0),
	gsSP2Triangles(5, 6, 3, 0, 5, 7, 6, 0),
	gsSP2Triangles(6, 8, 3, 0, 6, 9, 8, 0),
	gsSP2Triangles(6, 10, 9, 0, 9, 11, 8, 0),
	gsSP2Triangles(9, 12, 11, 0, 9, 13, 12, 0),
	gsSP2Triangles(11, 12, 14, 0, 12, 15, 14, 0),
	gsSP2Triangles(11, 14, 16, 0, 14, 17, 16, 0),
	gsSP2Triangles(14, 18, 17, 0, 14, 19, 18, 0),
	gsSP2Triangles(16, 17, 20, 0, 16, 20, 21, 0),
	gsSP2Triangles(20, 22, 21, 0, 16, 21, 23, 0),
	gsSP2Triangles(21, 24, 23, 0, 16, 23, 11, 0),
	gsSP2Triangles(8, 11, 23, 0, 8, 23, 25, 0),
	gsSP2Triangles(23, 26, 25, 0, 3, 8, 25, 0),
	gsSP2Triangles(3, 25, 0, 0, 25, 27, 0, 0),
	gsSPEndDisplayList(),
};


Gfx mat_luma_pet_Body[] = {
	gsSPCopyLightsPlayerPart(EMBLEM),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPEndDisplayList(),
};

Gfx mat_luma_pet_pet_basic[] = {
	gsSPSetLights1(luma_pet_pet_basic_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT, TEXEL0, SHADE, TEXEL0_ALPHA, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 1, luma_pet_pet_basic_ia8),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_MIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_luma_pet_Eyes[] = {
	gsSPSetLights1(luma_pet_Eyes_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, luma_pet_eye_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 60),
	gsSPEndDisplayList(),
};

Gfx luma_pet_Body_mesh_layer_1[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_Body_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_Body_mesh_layer_1_mat_override_pet_basic_0[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_Body_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_Head_skinned_mesh_layer_1[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_Head_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_Head_skinned_mesh_layer_1_mat_override_pet_basic_0[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_Head_skinned_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_Head_mesh_layer_1[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(luma_pet_Head_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx luma_pet_Head_mesh_layer_1_mat_override_pet_basic_0[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_Head_mesh_layer_1_tri_0),
	gsSPDisplayList(luma_pet_Head_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx luma_pet_Head_mesh_layer_4[] = {
	gsSPDisplayList(mat_luma_pet_Eyes),
	gsSPDisplayList(luma_pet_Head_mesh_layer_4_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx luma_pet_Head_mesh_layer_4_mat_override_pet_basic_0[] = {
	gsSPDisplayList(mat_luma_pet_Eyes),
	gsSPDisplayList(luma_pet_Head_mesh_layer_4_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx luma_pet_LeftArm_mesh_layer_1[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_LeftArm_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_LeftArm_mesh_layer_1_mat_override_pet_basic_0[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_LeftArm_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_LeftLeg_mesh_layer_1[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_LeftLeg_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_LeftLeg_mesh_layer_1_mat_override_pet_basic_0[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_LeftLeg_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_RightArm_mesh_layer_1[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_RightArm_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_RightArm_mesh_layer_1_mat_override_pet_basic_0[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_RightArm_mesh_layer_1_tri_0),
	gsSPEndDisplayList(),
};

Gfx luma_pet_RightLeg_mesh_layer_1[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_RightLeg_mesh_layer_1_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

Gfx luma_pet_RightLeg_mesh_layer_1_mat_override_pet_basic_0[] = {
	gsSPDisplayList(mat_luma_pet_Body),
	gsSPDisplayList(luma_pet_RightLeg_mesh_layer_1_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

