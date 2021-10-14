#include "erelia_commun.h"

const jgl::Vector2Uint Constant::Texture_size::node = jgl::Vector2Uint();
const jgl::Vector2Uint Constant::Texture_size::scenery = jgl::Vector2Uint();

jgl::Array<World_object::Node> World_object::g_node_array = {
	World_object::Node("Plain", 1, jgl::Vector2Int(0, 0), true, true),
	World_object::Node("Forest", 1, jgl::Vector2Int(4, 0), true, true),
	World_object::Node("Sand", 1, jgl::Vector2Int(8, 0), true, true),
	World_object::Node("Dirt", 1, jgl::Vector2Int(12, 0), true, true),
	World_object::Node("Cave floor", 1, jgl::Vector2Int(16, 0), true, true),
	World_object::Node("Stone", 1, jgl::Vector2Int(20, 0), true, true),
	World_object::Node("Dark stone", 1, jgl::Vector2Int(24, 0), true, true),
	World_object::Node("Enchanted forest", 1, jgl::Vector2Int(28, 0), true, true),
	World_object::Node("Dark cave floor", 1, jgl::Vector2Int(0, 6), true, true),
	World_object::Node("Wooden floor", 1, jgl::Vector2Int(4, 6), true, true),
	World_object::Node("Tiled floor", 1, jgl::Vector2Int(8, 6), true, true),
	World_object::Node("Blue floor", 1, jgl::Vector2Int(12, 6), true, true),
	World_object::Node("Wall interior", 1, jgl::Vector2Int(16, 6), true, false),
	World_object::Node("Lava", 3, jgl::Vector2Int(20, 6), true, false),
	World_object::Node("Water", 4, jgl::Vector2Int(0, 12), true, false),
	World_object::Node("Deep water", 4, jgl::Vector2Int(16, 12), true, false),
	World_object::Node("Dungeon floor - Purple", 1, jgl::Vector2Int(0, 18), true, true),
	World_object::Node("Dungeon floor - Red", 1, jgl::Vector2Int(4, 18), true, true),
	World_object::Node("Dungeon floor - Blue", 1, jgl::Vector2Int(8, 18), true, true),
	World_object::Node("Dungeon floor - Green", 1, jgl::Vector2Int(12, 18), true, true),
	World_object::Node("Dungeon floor - White", 1, jgl::Vector2Int(16, 18), true, true),
	World_object::Node("Dungeon floor - Dark", 1, jgl::Vector2Int(20, 18), true, true),
	World_object::Node("Dungeon floor - Brown", 1, jgl::Vector2Int(24, 18), true, true),
	World_object::Node("Dungeon floor - Pink", 1, jgl::Vector2Int(28, 18), true, true),
};

jgl::Array<World_object::Scenery> World_object::g_scenery_array = {
	World_object::Scenery("Green tree 1x1",				0, 576, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown tree 1x1",				1, 577, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Pink tree 1x1",				2, 578, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Dark green tree 1x1",		3, 579, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Light green tree 1x1",		4, 580, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue tree 1x1",				5, 581, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Purple tree 1x1",			6, 582, jgl::Vector2Int(1, 1)),
	World_object::Scenery("White tree 1x1",				7, 583, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Green tree 1x2",				8, 640, jgl::Vector2Int(1, 2)), 
	World_object::Scenery("Brown tree 1x2",				9, 641, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Pink tree 1x2",				10, 642, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Dark green tree 1x2",		11, 643, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Light green tree 1x2",		12, 644, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Blue tree 1x2",				13, 645, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Purple tree 1x2",			14, 646, jgl::Vector2Int(1, 2)),
	World_object::Scenery("White tree 1x2",				15, 647, jgl::Vector2Int(1, 2)),

	World_object::Scenery("Green tree 2x2",				16, 704, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Brown tree 2x2",				17, 706, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Pink tree 2x2",				18, 708, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Dark green tree 2x2",		19, 710, jgl::Vector2Int(2, 2)),

	World_object::Scenery("Light green tree 2x2",		20, 768, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Blue tree 2x2",				21, 769, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Purple tree 2x2",			22, 770, jgl::Vector2Int(2, 2)),
	World_object::Scenery("White tree 2x2",				23, 771, jgl::Vector2Int(2, 2)),

	World_object::Scenery("Green herb 1x1 - 3",			24, 800, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown herb 1x1 - 3",			25, 800 + 1, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Pink herb 1x1 - 3",			26, 800 + 2, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Dark green herb 1x1 - 3",	27, 800 + 3, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Light green herb 1x1 - 3",	28, 800 + 4, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue herb 1x1 - 3",			29, 800 + 5, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Purple herb 1x1 - 3",		30, 800 + 6, jgl::Vector2Int(1, 1)),
	World_object::Scenery("White herb 1x1 - 3",			31, 800 + 7, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Green herb 1x1 - 2",			32, 832, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown herb 1x1 - 2",			33, 832 + 1, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Pink herb 1x1 - 2",			34, 832 + 2, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Dark green herb 1x1 - 2",	35, 832 + 3, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Light green herb 1x1 - 2",	36, 832 + 4, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue herb 1x1 - 2",			37, 832 + 5, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Purple herb 1x1 - 2",		38, 832 + 6, jgl::Vector2Int(1, 1)),
	World_object::Scenery("White herb 1x1 - 2",			39, 832 + 7, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Green herb 1x1 - 1",			40, 864, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown herb 1x1 - 1",			41, 864 + 1, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Pink herb 1x1 - 1",			42, 864 + 2, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Dark green herb 1x1 - 1",	43, 864 + 3, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Light green herb 1x1 - 1",	44, 864 + 4, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue herb 1x1 - 1",			45, 864 + 5, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Purple herb 1x1 - 1",		46, 864 + 6, jgl::Vector2Int(1, 1)),
	World_object::Scenery("White herb 1x1 - 1",			47, 864 + 7, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Grey rock 1x1",				48, 896, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown rock 1x1",				49, 896 + 1, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue rock 1x1",				50, 896 + 2, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Black rock 1x1",				51, 896 + 3, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Grey mossy rock 1x1",		52, 896 + 4, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown mossy rock 1x1",		53, 896 + 5, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue mossy rock 1x1",		54, 896 + 6, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Black mossy rock 1x1",		55, 896 + 7, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Grey rock 1x2",				56, 928, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown rock 1x2",				57, 928 + 1, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue rock 1x2",				58, 928 + 2, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Black rock 1x2",				59, 928 + 3, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Grey rock 2x2",				60, 928 + 4, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown rock 2x2",				61, 928 + 6, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Grey rock 1x2",				56, 992, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown rock 1x2",				57, 992 + 1, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue rock 1x2",				58, 992 + 2, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Black rock 1x2",				59, 992 + 3, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Grey rock 2x2",				60, 992 + 4, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown rock 2x2",				61, 992 + 5, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Fence - 1",					62, 1088, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Fence - 2",					63, 1088 + 1, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Fence - 3",					64, 1088 + 2, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Trunk 1x1 - 1",				65, 1088 + 3, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Trunk 1x1 - 2",				66, 1088 + 4, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Trunk 1x1 - 3",				67, 1088 + 5, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Trunk 2x1 - 1",				68, 1088 + 6, jgl::Vector2Int(2, 1)),

	World_object::Scenery("Trunk 2x2 - 1",				69, 1030, jgl::Vector2Int(2, 2)),

	World_object::Scenery("Green crystal 1x1 - 2",		70, 584, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Brown crystal 1x1 - 2",		71, 584 + 1, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Pink crystal 1x1 - 2",		72, 584 + 2, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Dark green crystal 1x1 - 2",	73, 584 + 3, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Light green crystal 1x1 - 2",74, 584 + 4, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Blue crystal 1x1 - 2",		75, 584 + 5, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Purple crystal 1x1 - 2",		76, 584 + 6, jgl::Vector2Int(1, 1)),
	World_object::Scenery("White crystal 1x1 - 2",		77, 584 + 7, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Green crystal 1x2 - 2",		78, 648, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Brown crystal 1x2 - 2",		79, 648 + 1, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Pink crystal 1x2 - 2",		80, 648 + 2, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Dark green crystal 1x2 - 2",	81, 648 + 3, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Light green crystal 1x2 - 2",82, 648 + 4, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Blue crystal 1x2 - 2",		83, 648 + 5, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Purple crystal 1x2 - 2",		84, 648 + 6, jgl::Vector2Int(1, 2)),
	World_object::Scenery("White crystal 1x2 - 2",		85, 648 + 7, jgl::Vector2Int(1, 2)),

	World_object::Scenery("Green crystal 2x2",			86, 712, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Brown crystal 2x2",			87, 714, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Pink crystal 2x2",			88, 716, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Dark green crystal 2x2",		89, 718, jgl::Vector2Int(2, 2)),

	World_object::Scenery("Light green crystal 2x2",	90, 776, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Blue crystal 2x2",			91, 778, jgl::Vector2Int(2, 2)),
	World_object::Scenery("Purple crystal 2x2",			92, 780, jgl::Vector2Int(2, 2)),
	World_object::Scenery("White crystal 2x2",			93, 782, jgl::Vector2Int(2, 2)),

	World_object::Scenery("Bones 1x1 - 1",				94, 808, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Bones 1x1 - 2",				95, 809, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Bones 1x1 - 3",				96, 810, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Bones 1x1 - 4",				97, 811, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Statue 1x2 - 1",				98, 872, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Statue 1x2 - 2",				99, 873, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Statue 1x2 - 3",				100, 874, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Statue 1x2 - 4",				101, 875, jgl::Vector2Int(1, 2)),

	World_object::Scenery("Cactus 1x1 - 1",				102, 812, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Cactus 1x1 - 2",				103, 813, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Cactus 1x1 - 3",				104, 814, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Cactus 1x1 - 4",				105, 815, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Cactus 1x2 - 1",				106, 876, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Cactus 1x2 - 2",				107, 877, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Cactus 1x2 - 3",				108, 878, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Cactus 1x2 - 4",				109, 879, jgl::Vector2Int(1, 2)),

	World_object::Scenery("Torch on stick 1x2 - Red",	110, 1168, jgl::Vector2Int(1, 2)),
	World_object::Scenery("Torch on stick 1x2 - Green", 111, 1172, jgl::Vector2Int(1, 2)),

	World_object::Scenery("Torch 1x1 - Red",			112, 1200, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Torch 1x1 - Green",			113, 1232, jgl::Vector2Int(1, 1)),

	World_object::Scenery("Campfire 1x1 - Red",			114, 1204, jgl::Vector2Int(1, 1)),
	World_object::Scenery("Campfire 1x1 - Green",		115, 1236, jgl::Vector2Int(1, 1)),

};

jgl::Array<World_object::Scenery_part> World_object::g_scenery_part_array = {
	World_object::Scenery_part(jgl::Vector2Int( 0,  0),  true), // 	---- 0
	World_object::Scenery_part(jgl::Vector2Int( 1,  0),  true), // 1
	World_object::Scenery_part(jgl::Vector2Int( 2,  0),  true), // 2
	World_object::Scenery_part(jgl::Vector2Int( 3,  0),  true), // 3
	World_object::Scenery_part(jgl::Vector2Int( 4,  0),  true), // 4
	World_object::Scenery_part(jgl::Vector2Int( 5,  0),  true), // 5
	World_object::Scenery_part(jgl::Vector2Int( 6,  0),  true), // 6
	World_object::Scenery_part(jgl::Vector2Int( 7,  0),  true), // 7
	World_object::Scenery_part(jgl::Vector2Int( 8,  0),  true), // 8
	World_object::Scenery_part(jgl::Vector2Int( 9,  0),  true), // 9
	World_object::Scenery_part(jgl::Vector2Int(10,  0),  true), // -- 10
	World_object::Scenery_part(jgl::Vector2Int(11,  0),  true), // 11
	World_object::Scenery_part(jgl::Vector2Int(12,  0),  true), // 12
	World_object::Scenery_part(jgl::Vector2Int(13,  0),  true), // 13
	World_object::Scenery_part(jgl::Vector2Int(14,  0),  true), // 14
	World_object::Scenery_part(jgl::Vector2Int(15,  0),  true), // 15
	World_object::Scenery_part(jgl::Vector2Int(16,  0),  true), // 16
	World_object::Scenery_part(jgl::Vector2Int(17,  0),  true), // 17
	World_object::Scenery_part(jgl::Vector2Int(18,  0),  true), // 18
	World_object::Scenery_part(jgl::Vector2Int(19,  0),  true), // 19
	World_object::Scenery_part(jgl::Vector2Int(20,  0),  true), // -- 20
	World_object::Scenery_part(jgl::Vector2Int(21,  0),  true), // 21
	World_object::Scenery_part(jgl::Vector2Int(22,  0),  true), // 22
	World_object::Scenery_part(jgl::Vector2Int(23,  0),  true), // 23
	World_object::Scenery_part(jgl::Vector2Int(24,  0),  true), // 24
	World_object::Scenery_part(jgl::Vector2Int(25,  0),  true), // 25
	World_object::Scenery_part(jgl::Vector2Int(26,  0),  true), // 26
	World_object::Scenery_part(jgl::Vector2Int(27,  0),  true), // 27
	World_object::Scenery_part(jgl::Vector2Int(28,  0),  true), // 28
	World_object::Scenery_part(jgl::Vector2Int(29,  0),  true), // 29
	World_object::Scenery_part(jgl::Vector2Int(30,  0),  true), // -- 30
	World_object::Scenery_part(jgl::Vector2Int(31,  0),  true), // 31
	World_object::Scenery_part(jgl::Vector2Int( 0,  1),  true), // 32
	World_object::Scenery_part(jgl::Vector2Int( 1,  1),  true), // 33
	World_object::Scenery_part(jgl::Vector2Int( 2,  1),  true), // 34
	World_object::Scenery_part(jgl::Vector2Int( 3,  1),  true), // 35
	World_object::Scenery_part(jgl::Vector2Int( 4,  1),  true), // 36
	World_object::Scenery_part(jgl::Vector2Int( 5,  1),  true), // 37
	World_object::Scenery_part(jgl::Vector2Int( 6,  1),  true), // 38
	World_object::Scenery_part(jgl::Vector2Int( 7,  1),  true), // 39
	World_object::Scenery_part(jgl::Vector2Int( 8,  1),  true), // -- 40
	World_object::Scenery_part(jgl::Vector2Int( 9,  1),  true), // 41
	World_object::Scenery_part(jgl::Vector2Int(10,  1),  true), // 42
	World_object::Scenery_part(jgl::Vector2Int(11,  1),  true), // 43
	World_object::Scenery_part(jgl::Vector2Int(12,  1),  true), // 44
	World_object::Scenery_part(jgl::Vector2Int(13,  1),  true), // 45
	World_object::Scenery_part(jgl::Vector2Int(14,  1),  true), // 46
	World_object::Scenery_part(jgl::Vector2Int(15,  1),  true), // 47
	World_object::Scenery_part(jgl::Vector2Int(16,  1),  true), // 48
	World_object::Scenery_part(jgl::Vector2Int(17,  1),  true), // 49
	World_object::Scenery_part(jgl::Vector2Int(18,  1),  true), // -- 50
	World_object::Scenery_part(jgl::Vector2Int(19,  1),  true), // 51
	World_object::Scenery_part(jgl::Vector2Int(20,  1),  true), // 52
	World_object::Scenery_part(jgl::Vector2Int(21,  1),  true), // 53
	World_object::Scenery_part(jgl::Vector2Int(22,  1),  true), // 54
	World_object::Scenery_part(jgl::Vector2Int(23,  1),  true), // 55
	World_object::Scenery_part(jgl::Vector2Int(24,  1),  true), // 56
	World_object::Scenery_part(jgl::Vector2Int(25,  1),  true), // 57
	World_object::Scenery_part(jgl::Vector2Int(26,  1),  true), // 58
	World_object::Scenery_part(jgl::Vector2Int(27,  1),  true), // 59
	World_object::Scenery_part(jgl::Vector2Int(28,  1),  true), // -- 60
	World_object::Scenery_part(jgl::Vector2Int(29,  1),  true), // 61
	World_object::Scenery_part(jgl::Vector2Int(30,  1),  true), // 62
	World_object::Scenery_part(jgl::Vector2Int(31,  1),  true), // 63
	World_object::Scenery_part(jgl::Vector2Int( 0,  2),  true), // 64
	World_object::Scenery_part(jgl::Vector2Int( 1,  2),  true), // 65
	World_object::Scenery_part(jgl::Vector2Int( 2,  2),  true), // 66
	World_object::Scenery_part(jgl::Vector2Int( 3,  2),  true), // 67
	World_object::Scenery_part(jgl::Vector2Int( 4,  2),  true), // 68
	World_object::Scenery_part(jgl::Vector2Int( 5,  2),  true), // 69
	World_object::Scenery_part(jgl::Vector2Int( 6,  2),  true), // -- 70
	World_object::Scenery_part(jgl::Vector2Int( 7,  2),  true), // 71
	World_object::Scenery_part(jgl::Vector2Int( 8,  2),  true), // 72
	World_object::Scenery_part(jgl::Vector2Int( 9,  2),  true), // 73
	World_object::Scenery_part(jgl::Vector2Int(10,  2),  true), // 74
	World_object::Scenery_part(jgl::Vector2Int(11,  2),  true), // 75
	World_object::Scenery_part(jgl::Vector2Int(12,  2),  true), // 76
	World_object::Scenery_part(jgl::Vector2Int(13,  2),  true), // 77
	World_object::Scenery_part(jgl::Vector2Int(14,  2),  true), // 78
	World_object::Scenery_part(jgl::Vector2Int(15,  2),  true), // 79
	World_object::Scenery_part(jgl::Vector2Int(16,  2),  true), // -- 80
	World_object::Scenery_part(jgl::Vector2Int(17,  2),  true), // 81
	World_object::Scenery_part(jgl::Vector2Int(18,  2),  true), // 82
	World_object::Scenery_part(jgl::Vector2Int(19,  2),  true), // 83
	World_object::Scenery_part(jgl::Vector2Int(20,  2),  true), // 84
	World_object::Scenery_part(jgl::Vector2Int(21,  2),  true), // 85
	World_object::Scenery_part(jgl::Vector2Int(22,  2),  true), // 86
	World_object::Scenery_part(jgl::Vector2Int(23,  2),  true), // 87
	World_object::Scenery_part(jgl::Vector2Int(24,  2),  true), // 88
	World_object::Scenery_part(jgl::Vector2Int(25,  2),  true), // 89
	World_object::Scenery_part(jgl::Vector2Int(26,  2),  true), // -- 90
	World_object::Scenery_part(jgl::Vector2Int(27,  2),  true), // 91
	World_object::Scenery_part(jgl::Vector2Int(28,  2),  true), // 92
	World_object::Scenery_part(jgl::Vector2Int(29,  2),  true), // 93
	World_object::Scenery_part(jgl::Vector2Int(30,  2),  true), // 94
	World_object::Scenery_part(jgl::Vector2Int(31,  2),  true), // 95
	World_object::Scenery_part(jgl::Vector2Int( 0,  3),  true), // 96
	World_object::Scenery_part(jgl::Vector2Int( 1,  3),  true), // 97
	World_object::Scenery_part(jgl::Vector2Int( 2,  3),  true), // 98
	World_object::Scenery_part(jgl::Vector2Int( 3,  3),  true), // 99
	World_object::Scenery_part(jgl::Vector2Int( 4,  3),  true), // 	---- 100
	World_object::Scenery_part(jgl::Vector2Int( 5,  3),  true), // 101
	World_object::Scenery_part(jgl::Vector2Int( 6,  3),  true), // 102
	World_object::Scenery_part(jgl::Vector2Int( 7,  3),  true), // 103
	World_object::Scenery_part(jgl::Vector2Int( 8,  3),  true), // 104
	World_object::Scenery_part(jgl::Vector2Int( 9,  3),  true), // 105
	World_object::Scenery_part(jgl::Vector2Int(10,  3),  true), // 106
	World_object::Scenery_part(jgl::Vector2Int(11,  3),  true), // 107
	World_object::Scenery_part(jgl::Vector2Int(12,  3),  true), // 108
	World_object::Scenery_part(jgl::Vector2Int(13,  3),  true), // 109
	World_object::Scenery_part(jgl::Vector2Int(14,  3),  true), // -- 110
	World_object::Scenery_part(jgl::Vector2Int(15,  3),  true), // 111
	World_object::Scenery_part(jgl::Vector2Int(16,  3),  true), // 112
	World_object::Scenery_part(jgl::Vector2Int(17,  3),  true), // 113
	World_object::Scenery_part(jgl::Vector2Int(18,  3),  true), // 114
	World_object::Scenery_part(jgl::Vector2Int(19,  3),  true), // 115
	World_object::Scenery_part(jgl::Vector2Int(20,  3),  true), // 116
	World_object::Scenery_part(jgl::Vector2Int(21,  3),  true), // 117
	World_object::Scenery_part(jgl::Vector2Int(22,  3),  true), // 118
	World_object::Scenery_part(jgl::Vector2Int(23,  3),  true), // 119
	World_object::Scenery_part(jgl::Vector2Int(24,  3),  true), // -- 120
	World_object::Scenery_part(jgl::Vector2Int(25,  3),  true), // 121
	World_object::Scenery_part(jgl::Vector2Int(26,  3),  true), // 122
	World_object::Scenery_part(jgl::Vector2Int(27,  3),  true), // 123
	World_object::Scenery_part(jgl::Vector2Int(28,  3),  true), // 124
	World_object::Scenery_part(jgl::Vector2Int(29,  3),  true), // 125
	World_object::Scenery_part(jgl::Vector2Int(30,  3),  true), // 126
	World_object::Scenery_part(jgl::Vector2Int(31,  3),  true), // 127
	World_object::Scenery_part(jgl::Vector2Int( 0,  4),  true), // 128
	World_object::Scenery_part(jgl::Vector2Int( 1,  4),  true), // 129
	World_object::Scenery_part(jgl::Vector2Int( 2,  4),  true), // -- 130
	World_object::Scenery_part(jgl::Vector2Int( 3,  4),  true), // 131
	World_object::Scenery_part(jgl::Vector2Int( 4,  4),  true), // 132
	World_object::Scenery_part(jgl::Vector2Int( 5,  4),  true), // 133
	World_object::Scenery_part(jgl::Vector2Int( 6,  4),  true), // 134
	World_object::Scenery_part(jgl::Vector2Int( 7,  4),  true), // 135
	World_object::Scenery_part(jgl::Vector2Int( 8,  4),  true), // 136
	World_object::Scenery_part(jgl::Vector2Int( 9,  4),  true), // 137
	World_object::Scenery_part(jgl::Vector2Int(10,  4),  true), // 138
	World_object::Scenery_part(jgl::Vector2Int(11,  4),  true), // 139
	World_object::Scenery_part(jgl::Vector2Int(12,  4),  true), // -- 140
	World_object::Scenery_part(jgl::Vector2Int(13,  4),  true), // 141
	World_object::Scenery_part(jgl::Vector2Int(14,  4),  true), // 142
	World_object::Scenery_part(jgl::Vector2Int(15,  4),  true), // 143
	World_object::Scenery_part(jgl::Vector2Int(16,  4),  true), // 144
	World_object::Scenery_part(jgl::Vector2Int(17,  4),  true), // 145
	World_object::Scenery_part(jgl::Vector2Int(18,  4),  true), // 146
	World_object::Scenery_part(jgl::Vector2Int(19,  4),  true), // 147
	World_object::Scenery_part(jgl::Vector2Int(20,  4),  true), // 148
	World_object::Scenery_part(jgl::Vector2Int(21,  4),  true), // 149
	World_object::Scenery_part(jgl::Vector2Int(22,  4),  true), // -- 150
	World_object::Scenery_part(jgl::Vector2Int(23,  4),  true), // 151
	World_object::Scenery_part(jgl::Vector2Int(24,  4),  true), // 152
	World_object::Scenery_part(jgl::Vector2Int(25,  4),  true), // 153
	World_object::Scenery_part(jgl::Vector2Int(26,  4),  true), // 154
	World_object::Scenery_part(jgl::Vector2Int(27,  4),  true), // 155
	World_object::Scenery_part(jgl::Vector2Int(28,  4),  true), // 156
	World_object::Scenery_part(jgl::Vector2Int(29,  4),  true), // 157
	World_object::Scenery_part(jgl::Vector2Int(30,  4),  true), // 158
	World_object::Scenery_part(jgl::Vector2Int(31,  4),  true), // 159
	World_object::Scenery_part(jgl::Vector2Int( 0,  5),  true), // -- 160
	World_object::Scenery_part(jgl::Vector2Int( 1,  5),  true), // 161
	World_object::Scenery_part(jgl::Vector2Int( 2,  5),  true), // 162
	World_object::Scenery_part(jgl::Vector2Int( 3,  5),  true), // 163
	World_object::Scenery_part(jgl::Vector2Int( 4,  5),  true), // 164
	World_object::Scenery_part(jgl::Vector2Int( 5,  5),  true), // 165
	World_object::Scenery_part(jgl::Vector2Int( 6,  5),  true), // 166
	World_object::Scenery_part(jgl::Vector2Int( 7,  5),  true), // 167
	World_object::Scenery_part(jgl::Vector2Int( 8,  5),  true), // 168
	World_object::Scenery_part(jgl::Vector2Int( 9,  5),  true), // 169
	World_object::Scenery_part(jgl::Vector2Int(10,  5),  true), // -- 170
	World_object::Scenery_part(jgl::Vector2Int(11,  5),  true), // 171
	World_object::Scenery_part(jgl::Vector2Int(12,  5),  true), // 172
	World_object::Scenery_part(jgl::Vector2Int(13,  5),  true), // 173
	World_object::Scenery_part(jgl::Vector2Int(14,  5),  true), // 174
	World_object::Scenery_part(jgl::Vector2Int(15,  5),  true), // 175
	World_object::Scenery_part(jgl::Vector2Int(16,  5),  true), // 176
	World_object::Scenery_part(jgl::Vector2Int(17,  5),  true), // 177
	World_object::Scenery_part(jgl::Vector2Int(18,  5),  true), // 178
	World_object::Scenery_part(jgl::Vector2Int(19,  5),  true), // 179
	World_object::Scenery_part(jgl::Vector2Int(20,  5),  true), // -- 180
	World_object::Scenery_part(jgl::Vector2Int(21,  5),  true), // 181
	World_object::Scenery_part(jgl::Vector2Int(22,  5),  true), // 182
	World_object::Scenery_part(jgl::Vector2Int(23,  5),  true), // 183
	World_object::Scenery_part(jgl::Vector2Int(24,  5),  true), // 184
	World_object::Scenery_part(jgl::Vector2Int(25,  5),  true), // 185
	World_object::Scenery_part(jgl::Vector2Int(26,  5),  true), // 186
	World_object::Scenery_part(jgl::Vector2Int(27,  5),  true), // 187
	World_object::Scenery_part(jgl::Vector2Int(28,  5),  true), // 188
	World_object::Scenery_part(jgl::Vector2Int(29,  5),  true), // 189
	World_object::Scenery_part(jgl::Vector2Int(30,  5),  true), // -- 190
	World_object::Scenery_part(jgl::Vector2Int(31,  5),  true), // 191
	World_object::Scenery_part(jgl::Vector2Int( 0,  6),  true), // 192
	World_object::Scenery_part(jgl::Vector2Int( 1,  6),  true), // 193
	World_object::Scenery_part(jgl::Vector2Int( 2,  6),  true), // 194
	World_object::Scenery_part(jgl::Vector2Int( 3,  6),  true), // 195
	World_object::Scenery_part(jgl::Vector2Int( 4,  6),  true), // 196
	World_object::Scenery_part(jgl::Vector2Int( 5,  6),  true), // 197
	World_object::Scenery_part(jgl::Vector2Int( 6,  6),  true), // 198
	World_object::Scenery_part(jgl::Vector2Int( 7,  6),  true), // 199
	World_object::Scenery_part(jgl::Vector2Int( 8,  6),  true), // 	---- 200
	World_object::Scenery_part(jgl::Vector2Int( 9,  6),  true), // 201
	World_object::Scenery_part(jgl::Vector2Int(10,  6),  true), // 202
	World_object::Scenery_part(jgl::Vector2Int(11,  6),  true), // 203
	World_object::Scenery_part(jgl::Vector2Int(12,  6),  true), // 204
	World_object::Scenery_part(jgl::Vector2Int(13,  6),  true), // 205
	World_object::Scenery_part(jgl::Vector2Int(14,  6),  true), // 206
	World_object::Scenery_part(jgl::Vector2Int(15,  6),  true), // 207
	World_object::Scenery_part(jgl::Vector2Int(16,  6),  true), // 208
	World_object::Scenery_part(jgl::Vector2Int(17,  6),  true), // 209
	World_object::Scenery_part(jgl::Vector2Int(18,  6),  true), // -- 210
	World_object::Scenery_part(jgl::Vector2Int(19,  6),  true), // 211
	World_object::Scenery_part(jgl::Vector2Int(20,  6),  true), // 212
	World_object::Scenery_part(jgl::Vector2Int(21,  6),  true), // 213
	World_object::Scenery_part(jgl::Vector2Int(22,  6),  true), // 214
	World_object::Scenery_part(jgl::Vector2Int(23,  6),  true), // 215
	World_object::Scenery_part(jgl::Vector2Int(24,  6),  true), // 216
	World_object::Scenery_part(jgl::Vector2Int(25,  6),  true), // 217
	World_object::Scenery_part(jgl::Vector2Int(26,  6),  true), // 218
	World_object::Scenery_part(jgl::Vector2Int(27,  6),  true), // 219
	World_object::Scenery_part(jgl::Vector2Int(28,  6),  true), // -- 220
	World_object::Scenery_part(jgl::Vector2Int(29,  6),  true), // 221
	World_object::Scenery_part(jgl::Vector2Int(30,  6),  true), // 222
	World_object::Scenery_part(jgl::Vector2Int(31,  6),  true), // 223
	World_object::Scenery_part(jgl::Vector2Int( 0,  7),  true), // 224
	World_object::Scenery_part(jgl::Vector2Int( 1,  7),  true), // 225
	World_object::Scenery_part(jgl::Vector2Int( 2,  7),  true), // 226
	World_object::Scenery_part(jgl::Vector2Int( 3,  7),  true), // 227
	World_object::Scenery_part(jgl::Vector2Int( 4,  7),  true), // 228
	World_object::Scenery_part(jgl::Vector2Int( 5,  7),  true), // 229
	World_object::Scenery_part(jgl::Vector2Int( 6,  7),  true), // -- 230
	World_object::Scenery_part(jgl::Vector2Int( 7,  7),  true), // 231
	World_object::Scenery_part(jgl::Vector2Int( 8,  7),  true), // 232
	World_object::Scenery_part(jgl::Vector2Int( 9,  7),  true), // 233
	World_object::Scenery_part(jgl::Vector2Int(10,  7),  true), // 234
	World_object::Scenery_part(jgl::Vector2Int(11,  7),  true), // 235
	World_object::Scenery_part(jgl::Vector2Int(12,  7),  true), // 236
	World_object::Scenery_part(jgl::Vector2Int(13,  7),  true), // 237
	World_object::Scenery_part(jgl::Vector2Int(14,  7),  true), // 238
	World_object::Scenery_part(jgl::Vector2Int(15,  7),  true), // 239
	World_object::Scenery_part(jgl::Vector2Int(16,  7),  true), // -- 240
	World_object::Scenery_part(jgl::Vector2Int(17,  7),  true), // 241
	World_object::Scenery_part(jgl::Vector2Int(18,  7),  true), // 242
	World_object::Scenery_part(jgl::Vector2Int(19,  7),  true), // 243
	World_object::Scenery_part(jgl::Vector2Int(20,  7),  true), // 244
	World_object::Scenery_part(jgl::Vector2Int(21,  7),  true), // 245
	World_object::Scenery_part(jgl::Vector2Int(22,  7),  true), // 246
	World_object::Scenery_part(jgl::Vector2Int(23,  7),  true), // 247
	World_object::Scenery_part(jgl::Vector2Int(24,  7),  true), // 248
	World_object::Scenery_part(jgl::Vector2Int(25,  7),  true), // 249
	World_object::Scenery_part(jgl::Vector2Int(26,  7),  true), // -- 250
	World_object::Scenery_part(jgl::Vector2Int(27,  7),  true), // 251
	World_object::Scenery_part(jgl::Vector2Int(28,  7),  true), // 252
	World_object::Scenery_part(jgl::Vector2Int(29,  7),  true), // 253
	World_object::Scenery_part(jgl::Vector2Int(30,  7),  true), // 254
	World_object::Scenery_part(jgl::Vector2Int(31,  7),  true), // 255
	World_object::Scenery_part(jgl::Vector2Int( 0,  8),  true), // 256
	World_object::Scenery_part(jgl::Vector2Int( 1,  8),  true), // 257
	World_object::Scenery_part(jgl::Vector2Int( 2,  8),  true), // 258
	World_object::Scenery_part(jgl::Vector2Int( 3,  8),  true), // 259
	World_object::Scenery_part(jgl::Vector2Int( 4,  8),  true), // -- 260
	World_object::Scenery_part(jgl::Vector2Int( 5,  8),  true), // 261
	World_object::Scenery_part(jgl::Vector2Int( 6,  8),  true), // 262
	World_object::Scenery_part(jgl::Vector2Int( 7,  8),  true), // 263
	World_object::Scenery_part(jgl::Vector2Int( 8,  8),  true), // 264
	World_object::Scenery_part(jgl::Vector2Int( 9,  8),  true), // 265
	World_object::Scenery_part(jgl::Vector2Int(10,  8),  true), // 266
	World_object::Scenery_part(jgl::Vector2Int(11,  8),  true), // 267
	World_object::Scenery_part(jgl::Vector2Int(12,  8),  true), // 268
	World_object::Scenery_part(jgl::Vector2Int(13,  8),  true), // 269
	World_object::Scenery_part(jgl::Vector2Int(14,  8),  true), // -- 270
	World_object::Scenery_part(jgl::Vector2Int(15,  8),  true), // 271
	World_object::Scenery_part(jgl::Vector2Int(16,  8),  true), // 272
	World_object::Scenery_part(jgl::Vector2Int(17,  8),  true), // 273
	World_object::Scenery_part(jgl::Vector2Int(18,  8),  true), // 274
	World_object::Scenery_part(jgl::Vector2Int(19,  8),  true), // 275
	World_object::Scenery_part(jgl::Vector2Int(20,  8),  true), // 276
	World_object::Scenery_part(jgl::Vector2Int(21,  8),  true), // 277
	World_object::Scenery_part(jgl::Vector2Int(22,  8),  true), // 278
	World_object::Scenery_part(jgl::Vector2Int(23,  8),  true), // 279
	World_object::Scenery_part(jgl::Vector2Int(24,  8),  true), // -- 280
	World_object::Scenery_part(jgl::Vector2Int(25,  8),  true), // 281
	World_object::Scenery_part(jgl::Vector2Int(26,  8),  true), // 282
	World_object::Scenery_part(jgl::Vector2Int(27,  8),  true), // 283
	World_object::Scenery_part(jgl::Vector2Int(28,  8),  true), // 284
	World_object::Scenery_part(jgl::Vector2Int(29,  8),  true), // 285
	World_object::Scenery_part(jgl::Vector2Int(30,  8),  true), // 286
	World_object::Scenery_part(jgl::Vector2Int(31,  8),  true), // 287
	World_object::Scenery_part(jgl::Vector2Int( 0,  9),  true), // 288
	World_object::Scenery_part(jgl::Vector2Int( 1,  9),  true), // 289
	World_object::Scenery_part(jgl::Vector2Int( 2,  9),  true), // -- 290
	World_object::Scenery_part(jgl::Vector2Int( 3,  9),  true), // 291
	World_object::Scenery_part(jgl::Vector2Int( 4,  9),  true), // 292
	World_object::Scenery_part(jgl::Vector2Int( 5,  9),  true), // 293
	World_object::Scenery_part(jgl::Vector2Int( 6,  9),  true), // 294
	World_object::Scenery_part(jgl::Vector2Int( 7,  9),  true), // 295
	World_object::Scenery_part(jgl::Vector2Int( 8,  9),  true), // 296
	World_object::Scenery_part(jgl::Vector2Int( 9,  9),  true), // 297
	World_object::Scenery_part(jgl::Vector2Int(10,  9),  true), // 298
	World_object::Scenery_part(jgl::Vector2Int(11,  9),  true), // 299
	World_object::Scenery_part(jgl::Vector2Int(12,  9),  true), // 	---- 300
	World_object::Scenery_part(jgl::Vector2Int(13,  9),  true), // 301
	World_object::Scenery_part(jgl::Vector2Int(14,  9),  true), // 302
	World_object::Scenery_part(jgl::Vector2Int(15,  9),  true), // 303
	World_object::Scenery_part(jgl::Vector2Int(16,  9),  true), // 304
	World_object::Scenery_part(jgl::Vector2Int(17,  9),  true), // 305
	World_object::Scenery_part(jgl::Vector2Int(18,  9),  true), // 306
	World_object::Scenery_part(jgl::Vector2Int(19,  9),  true), // 307
	World_object::Scenery_part(jgl::Vector2Int(20,  9),  true), // 308
	World_object::Scenery_part(jgl::Vector2Int(21,  9),  true), // 309
	World_object::Scenery_part(jgl::Vector2Int(22,  9),  true), // -- 310
	World_object::Scenery_part(jgl::Vector2Int(23,  9),  true), // 311
	World_object::Scenery_part(jgl::Vector2Int(24,  9),  true), // 312
	World_object::Scenery_part(jgl::Vector2Int(25,  9),  true), // 313
	World_object::Scenery_part(jgl::Vector2Int(26,  9),  true), // 314
	World_object::Scenery_part(jgl::Vector2Int(27,  9),  true), // 315
	World_object::Scenery_part(jgl::Vector2Int(28,  9),  true), // 316
	World_object::Scenery_part(jgl::Vector2Int(29,  9),  true), // 317
	World_object::Scenery_part(jgl::Vector2Int(30,  9),  true), // 318
	World_object::Scenery_part(jgl::Vector2Int(31,  9),  true), // 319
	World_object::Scenery_part(jgl::Vector2Int( 0, 10),  true), // -- 320
	World_object::Scenery_part(jgl::Vector2Int( 1, 10),  true), // 321
	World_object::Scenery_part(jgl::Vector2Int( 2, 10),  true), // 322
	World_object::Scenery_part(jgl::Vector2Int( 3, 10),  true), // 323
	World_object::Scenery_part(jgl::Vector2Int( 4, 10),  true), // 324
	World_object::Scenery_part(jgl::Vector2Int( 5, 10),  true), // 325
	World_object::Scenery_part(jgl::Vector2Int( 6, 10),  true), // 326
	World_object::Scenery_part(jgl::Vector2Int( 7, 10),  true), // 327
	World_object::Scenery_part(jgl::Vector2Int( 8, 10),  true), // 328
	World_object::Scenery_part(jgl::Vector2Int( 9, 10),  true), // 329
	World_object::Scenery_part(jgl::Vector2Int(10, 10),  true), // -- 330
	World_object::Scenery_part(jgl::Vector2Int(11, 10),  true), // 331
	World_object::Scenery_part(jgl::Vector2Int(12, 10),  true), // 332
	World_object::Scenery_part(jgl::Vector2Int(13, 10),  true), // 333
	World_object::Scenery_part(jgl::Vector2Int(14, 10),  true), // 334
	World_object::Scenery_part(jgl::Vector2Int(15, 10),  true), // 335
	World_object::Scenery_part(jgl::Vector2Int(16, 10),  true), // 336
	World_object::Scenery_part(jgl::Vector2Int(17, 10),  true), // 337
	World_object::Scenery_part(jgl::Vector2Int(18, 10),  true), // 338
	World_object::Scenery_part(jgl::Vector2Int(19, 10),  true), // 339
	World_object::Scenery_part(jgl::Vector2Int(20, 10),  true), // -- 340
	World_object::Scenery_part(jgl::Vector2Int(21, 10),  true), // 341
	World_object::Scenery_part(jgl::Vector2Int(22, 10),  true), // 342
	World_object::Scenery_part(jgl::Vector2Int(23, 10),  true), // 343
	World_object::Scenery_part(jgl::Vector2Int(24, 10),  true), // 344
	World_object::Scenery_part(jgl::Vector2Int(25, 10),  true), // 345
	World_object::Scenery_part(jgl::Vector2Int(26, 10),  true), // 346
	World_object::Scenery_part(jgl::Vector2Int(27, 10),  true), // 347
	World_object::Scenery_part(jgl::Vector2Int(28, 10),  true), // 348
	World_object::Scenery_part(jgl::Vector2Int(29, 10),  true), // 349
	World_object::Scenery_part(jgl::Vector2Int(30, 10),  true), // -- 350
	World_object::Scenery_part(jgl::Vector2Int(31, 10),  true), // 351
	World_object::Scenery_part(jgl::Vector2Int( 0, 11),  true), // 352
	World_object::Scenery_part(jgl::Vector2Int( 1, 11),  true), // 353
	World_object::Scenery_part(jgl::Vector2Int( 2, 11),  true), // 354
	World_object::Scenery_part(jgl::Vector2Int( 3, 11),  true), // 355
	World_object::Scenery_part(jgl::Vector2Int( 4, 11),  true), // 356
	World_object::Scenery_part(jgl::Vector2Int( 5, 11),  true), // 357
	World_object::Scenery_part(jgl::Vector2Int( 6, 11),  true), // 358
	World_object::Scenery_part(jgl::Vector2Int( 7, 11),  true), // 359
	World_object::Scenery_part(jgl::Vector2Int( 8, 11),  true), // -- 360
	World_object::Scenery_part(jgl::Vector2Int( 9, 11),  true), // 361
	World_object::Scenery_part(jgl::Vector2Int(10, 11),  true), // 362
	World_object::Scenery_part(jgl::Vector2Int(11, 11),  true), // 363
	World_object::Scenery_part(jgl::Vector2Int(12, 11),  true), // 364
	World_object::Scenery_part(jgl::Vector2Int(13, 11),  true), // 365
	World_object::Scenery_part(jgl::Vector2Int(14, 11),  true), // 366
	World_object::Scenery_part(jgl::Vector2Int(15, 11),  true), // 367
	World_object::Scenery_part(jgl::Vector2Int(16, 11),  true), // 368
	World_object::Scenery_part(jgl::Vector2Int(17, 11),  true), // 369
	World_object::Scenery_part(jgl::Vector2Int(18, 11),  true), // -- 370
	World_object::Scenery_part(jgl::Vector2Int(19, 11),  true), // 371
	World_object::Scenery_part(jgl::Vector2Int(20, 11),  true), // 372
	World_object::Scenery_part(jgl::Vector2Int(21, 11),  true), // 373
	World_object::Scenery_part(jgl::Vector2Int(22, 11),  true), // 374
	World_object::Scenery_part(jgl::Vector2Int(23, 11),  true), // 375
	World_object::Scenery_part(jgl::Vector2Int(24, 11),  true), // 376
	World_object::Scenery_part(jgl::Vector2Int(25, 11),  true), // 377
	World_object::Scenery_part(jgl::Vector2Int(26, 11),  true), // 378
	World_object::Scenery_part(jgl::Vector2Int(27, 11),  true), // 379
	World_object::Scenery_part(jgl::Vector2Int(28, 11),  true), // -- 380
	World_object::Scenery_part(jgl::Vector2Int(29, 11),  true), // 381
	World_object::Scenery_part(jgl::Vector2Int(30, 11),  true), // 382
	World_object::Scenery_part(jgl::Vector2Int(31, 11),  true), // 383
	World_object::Scenery_part(jgl::Vector2Int( 0, 12), false), // 384
	World_object::Scenery_part(jgl::Vector2Int( 1, 12), false), // 385
	World_object::Scenery_part(jgl::Vector2Int( 2, 12), false), // 386
	World_object::Scenery_part(jgl::Vector2Int( 3, 12), false), // 387
	World_object::Scenery_part(jgl::Vector2Int( 4, 12), false), // 388
	World_object::Scenery_part(jgl::Vector2Int( 5, 12), false), // 389
	World_object::Scenery_part(jgl::Vector2Int( 6, 12), false), // -- 390
	World_object::Scenery_part(jgl::Vector2Int( 7, 12), false), // 391
	World_object::Scenery_part(jgl::Vector2Int( 8, 12), false), // 392
	World_object::Scenery_part(jgl::Vector2Int( 9, 12), false), // 393
	World_object::Scenery_part(jgl::Vector2Int(10, 12), false), // 394
	World_object::Scenery_part(jgl::Vector2Int(11, 12), false), // 395
	World_object::Scenery_part(jgl::Vector2Int(12, 12), false), // 396
	World_object::Scenery_part(jgl::Vector2Int(13, 12), false), // 397
	World_object::Scenery_part(jgl::Vector2Int(14, 12), false), // 398
	World_object::Scenery_part(jgl::Vector2Int(15, 12), false), // 399
	World_object::Scenery_part(jgl::Vector2Int(16, 12), false), // 	---- 400
	World_object::Scenery_part(jgl::Vector2Int(17, 12), false), // 401
	World_object::Scenery_part(jgl::Vector2Int(18, 12), false), // 402
	World_object::Scenery_part(jgl::Vector2Int(19, 12), false), // 403
	World_object::Scenery_part(jgl::Vector2Int(20, 12), false), // 404
	World_object::Scenery_part(jgl::Vector2Int(21, 12), false), // 405
	World_object::Scenery_part(jgl::Vector2Int(22, 12), false), // 406
	World_object::Scenery_part(jgl::Vector2Int(23, 12), false), // 407
	World_object::Scenery_part(jgl::Vector2Int(24, 12), false), // 408
	World_object::Scenery_part(jgl::Vector2Int(25, 12), false), // 409
	World_object::Scenery_part(jgl::Vector2Int(26, 12), false), // -- 410
	World_object::Scenery_part(jgl::Vector2Int(27, 12), false), // 411
	World_object::Scenery_part(jgl::Vector2Int(28, 12), false), // 412
	World_object::Scenery_part(jgl::Vector2Int(29, 12), false), // 413
	World_object::Scenery_part(jgl::Vector2Int(30, 12), false), // 414
	World_object::Scenery_part(jgl::Vector2Int(31, 12), false), // 415
	World_object::Scenery_part(jgl::Vector2Int( 0, 13), false), // 416
	World_object::Scenery_part(jgl::Vector2Int( 1, 13), false), // 417
	World_object::Scenery_part(jgl::Vector2Int( 2, 13), false), // 418
	World_object::Scenery_part(jgl::Vector2Int( 3, 13), false), // 419
	World_object::Scenery_part(jgl::Vector2Int( 4, 13), false), // -- 420
	World_object::Scenery_part(jgl::Vector2Int( 5, 13), false), // 421
	World_object::Scenery_part(jgl::Vector2Int( 6, 13), false), // 422
	World_object::Scenery_part(jgl::Vector2Int( 7, 13), false), // 423
	World_object::Scenery_part(jgl::Vector2Int( 8, 13), false), // 424
	World_object::Scenery_part(jgl::Vector2Int( 9, 13), false), // 425
	World_object::Scenery_part(jgl::Vector2Int(10, 13), false), // 426
	World_object::Scenery_part(jgl::Vector2Int(11, 13), false), // 427
	World_object::Scenery_part(jgl::Vector2Int(12, 13), false), // 428
	World_object::Scenery_part(jgl::Vector2Int(13, 13), false), // 429
	World_object::Scenery_part(jgl::Vector2Int(14, 13), false), // -- 430
	World_object::Scenery_part(jgl::Vector2Int(15, 13), false), // 431
	World_object::Scenery_part(jgl::Vector2Int(16, 13), false), // 432
	World_object::Scenery_part(jgl::Vector2Int(17, 13), false), // 433
	World_object::Scenery_part(jgl::Vector2Int(18, 13), false), // 434
	World_object::Scenery_part(jgl::Vector2Int(19, 13), false), // 435
	World_object::Scenery_part(jgl::Vector2Int(20, 13), false), // 436
	World_object::Scenery_part(jgl::Vector2Int(21, 13), false), // 437
	World_object::Scenery_part(jgl::Vector2Int(22, 13), false), // 438
	World_object::Scenery_part(jgl::Vector2Int(23, 13), false), // 439
	World_object::Scenery_part(jgl::Vector2Int(24, 13), false), // -- 440
	World_object::Scenery_part(jgl::Vector2Int(25, 13), false), // 441
	World_object::Scenery_part(jgl::Vector2Int(26, 13), false), // 442
	World_object::Scenery_part(jgl::Vector2Int(27, 13), false), // 443
	World_object::Scenery_part(jgl::Vector2Int(28, 13), false), // 444
	World_object::Scenery_part(jgl::Vector2Int(29, 13), false), // 445
	World_object::Scenery_part(jgl::Vector2Int(30, 13), false), // 446
	World_object::Scenery_part(jgl::Vector2Int(31, 13), false), // 447
	World_object::Scenery_part(jgl::Vector2Int( 0, 14), false), // 448
	World_object::Scenery_part(jgl::Vector2Int( 1, 14), false), // 449
	World_object::Scenery_part(jgl::Vector2Int( 2, 14), false), // -- 450
	World_object::Scenery_part(jgl::Vector2Int( 3, 14), false), // 451
	World_object::Scenery_part(jgl::Vector2Int( 4, 14), false), // 452
	World_object::Scenery_part(jgl::Vector2Int( 5, 14), false), // 453
	World_object::Scenery_part(jgl::Vector2Int( 6, 14), false), // 454
	World_object::Scenery_part(jgl::Vector2Int( 7, 14), false), // 455
	World_object::Scenery_part(jgl::Vector2Int( 8, 14), false), // 456
	World_object::Scenery_part(jgl::Vector2Int( 9, 14), false), // 457
	World_object::Scenery_part(jgl::Vector2Int(10, 14), false), // 458
	World_object::Scenery_part(jgl::Vector2Int(11, 14), false), // 459
	World_object::Scenery_part(jgl::Vector2Int(12, 14), false), // -- 460
	World_object::Scenery_part(jgl::Vector2Int(13, 14), false), // 461
	World_object::Scenery_part(jgl::Vector2Int(14, 14), false), // 462
	World_object::Scenery_part(jgl::Vector2Int(15, 14), false), // 463
	World_object::Scenery_part(jgl::Vector2Int(16, 14), false), // 464
	World_object::Scenery_part(jgl::Vector2Int(17, 14), false), // 465
	World_object::Scenery_part(jgl::Vector2Int(18, 14), false), // 466
	World_object::Scenery_part(jgl::Vector2Int(19, 14), false), // 467
	World_object::Scenery_part(jgl::Vector2Int(20, 14), false), // 468
	World_object::Scenery_part(jgl::Vector2Int(21, 14), false), // 469
	World_object::Scenery_part(jgl::Vector2Int(22, 14), false), // -- 470
	World_object::Scenery_part(jgl::Vector2Int(23, 14), false), // 471
	World_object::Scenery_part(jgl::Vector2Int(24, 14), false), // 472
	World_object::Scenery_part(jgl::Vector2Int(25, 14), false), // 473
	World_object::Scenery_part(jgl::Vector2Int(26, 14), false), // 474
	World_object::Scenery_part(jgl::Vector2Int(27, 14), false), // 475
	World_object::Scenery_part(jgl::Vector2Int(28, 14), false), // 476
	World_object::Scenery_part(jgl::Vector2Int(29, 14), false), // 477
	World_object::Scenery_part(jgl::Vector2Int(30, 14), false), // 478
	World_object::Scenery_part(jgl::Vector2Int(31, 14), false), // 479
	World_object::Scenery_part(jgl::Vector2Int( 0, 15), false), // -- 480
	World_object::Scenery_part(jgl::Vector2Int( 1, 15), false), // 481
	World_object::Scenery_part(jgl::Vector2Int( 2, 15), false), // 482
	World_object::Scenery_part(jgl::Vector2Int( 3, 15), false), // 483
	World_object::Scenery_part(jgl::Vector2Int( 4, 15), false), // 484
	World_object::Scenery_part(jgl::Vector2Int( 5, 15), false), // 485
	World_object::Scenery_part(jgl::Vector2Int( 6, 15), false), // 486
	World_object::Scenery_part(jgl::Vector2Int( 7, 15), false), // 487
	World_object::Scenery_part(jgl::Vector2Int( 8, 15), false), // 488
	World_object::Scenery_part(jgl::Vector2Int( 9, 15), false), // 489
	World_object::Scenery_part(jgl::Vector2Int(10, 15), false), // -- 490
	World_object::Scenery_part(jgl::Vector2Int(11, 15), false), // 491
	World_object::Scenery_part(jgl::Vector2Int(12, 15), false), // 492
	World_object::Scenery_part(jgl::Vector2Int(13, 15), false), // 493
	World_object::Scenery_part(jgl::Vector2Int(14, 15), false), // 494
	World_object::Scenery_part(jgl::Vector2Int(15, 15), false), // 495
	World_object::Scenery_part(jgl::Vector2Int(16, 15), false), // 496
	World_object::Scenery_part(jgl::Vector2Int(17, 15), false), // 497
	World_object::Scenery_part(jgl::Vector2Int(18, 15), false), // 498
	World_object::Scenery_part(jgl::Vector2Int(19, 15), false), // 499
	World_object::Scenery_part(jgl::Vector2Int(20, 15), false), // 	---- 500
	World_object::Scenery_part(jgl::Vector2Int(21, 15), false), // 501
	World_object::Scenery_part(jgl::Vector2Int(22, 15), false), // 502
	World_object::Scenery_part(jgl::Vector2Int(23, 15), false), // 503
	World_object::Scenery_part(jgl::Vector2Int(24, 15), false), // 504
	World_object::Scenery_part(jgl::Vector2Int(25, 15), false), // 505
	World_object::Scenery_part(jgl::Vector2Int(26, 15), false), // 506
	World_object::Scenery_part(jgl::Vector2Int(27, 15), false), // 507
	World_object::Scenery_part(jgl::Vector2Int(28, 15), false), // 508
	World_object::Scenery_part(jgl::Vector2Int(29, 15), false), // 509
	World_object::Scenery_part(jgl::Vector2Int(30, 15), false), // -- 510
	World_object::Scenery_part(jgl::Vector2Int(31, 15), false), // 511
	World_object::Scenery_part(jgl::Vector2Int( 0, 16), false), // 512
	World_object::Scenery_part(jgl::Vector2Int( 1, 16), false), // 513
	World_object::Scenery_part(jgl::Vector2Int( 2, 16), false), // 514
	World_object::Scenery_part(jgl::Vector2Int( 3, 16), false), // 515
	World_object::Scenery_part(jgl::Vector2Int( 4, 16), false), // 516
	World_object::Scenery_part(jgl::Vector2Int( 5, 16), false), // 517
	World_object::Scenery_part(jgl::Vector2Int( 6, 16), false), // 518
	World_object::Scenery_part(jgl::Vector2Int( 7, 16), false), // 519
	World_object::Scenery_part(jgl::Vector2Int( 8, 16), false), // -- 520
	World_object::Scenery_part(jgl::Vector2Int( 9, 16), false), // 521
	World_object::Scenery_part(jgl::Vector2Int(10, 16), false), // 522
	World_object::Scenery_part(jgl::Vector2Int(11, 16), false), // 523
	World_object::Scenery_part(jgl::Vector2Int(12, 16), false), // 524
	World_object::Scenery_part(jgl::Vector2Int(13, 16), false), // 525
	World_object::Scenery_part(jgl::Vector2Int(14, 16), false), // 526
	World_object::Scenery_part(jgl::Vector2Int(15, 16), false), // 527
	World_object::Scenery_part(jgl::Vector2Int(16, 16), false), // 528
	World_object::Scenery_part(jgl::Vector2Int(17, 16), false), // 529
	World_object::Scenery_part(jgl::Vector2Int(18, 16), false), // -- 530
	World_object::Scenery_part(jgl::Vector2Int(19, 16), false), // 531
	World_object::Scenery_part(jgl::Vector2Int(20, 16), false), // 532
	World_object::Scenery_part(jgl::Vector2Int(21, 16), false), // 533
	World_object::Scenery_part(jgl::Vector2Int(22, 16), false), // 534
	World_object::Scenery_part(jgl::Vector2Int(23, 16), false), // 535
	World_object::Scenery_part(jgl::Vector2Int(24, 16), false), // 536
	World_object::Scenery_part(jgl::Vector2Int(25, 16), false), // 537
	World_object::Scenery_part(jgl::Vector2Int(26, 16), false), // 538
	World_object::Scenery_part(jgl::Vector2Int(27, 16), false), // 539
	World_object::Scenery_part(jgl::Vector2Int(28, 16), false), // -- 540
	World_object::Scenery_part(jgl::Vector2Int(29, 16), false), // 541
	World_object::Scenery_part(jgl::Vector2Int(30, 16), false), // 542
	World_object::Scenery_part(jgl::Vector2Int(31, 16), false), // 543
	World_object::Scenery_part(jgl::Vector2Int( 0, 17), false), // 544
	World_object::Scenery_part(jgl::Vector2Int( 1, 17), false), // 545
	World_object::Scenery_part(jgl::Vector2Int( 2, 17), false), // 546
	World_object::Scenery_part(jgl::Vector2Int( 3, 17), false), // 547
	World_object::Scenery_part(jgl::Vector2Int( 4, 17), false), // 548
	World_object::Scenery_part(jgl::Vector2Int( 5, 17), false), // 549
	World_object::Scenery_part(jgl::Vector2Int( 6, 17), false), // -- 550
	World_object::Scenery_part(jgl::Vector2Int( 7, 17), false), // 551
	World_object::Scenery_part(jgl::Vector2Int( 8, 17), false), // 552
	World_object::Scenery_part(jgl::Vector2Int( 9, 17), false), // 553
	World_object::Scenery_part(jgl::Vector2Int(10, 17), false), // 554
	World_object::Scenery_part(jgl::Vector2Int(11, 17), false), // 555
	World_object::Scenery_part(jgl::Vector2Int(12, 17), false), // 556
	World_object::Scenery_part(jgl::Vector2Int(13, 17), false), // 557
	World_object::Scenery_part(jgl::Vector2Int(14, 17), false), // 558
	World_object::Scenery_part(jgl::Vector2Int(15, 17), false), // 559
	World_object::Scenery_part(jgl::Vector2Int(16, 17), false), // -- 560
	World_object::Scenery_part(jgl::Vector2Int(17, 17), false), // 561
	World_object::Scenery_part(jgl::Vector2Int(18, 17), false), // 562
	World_object::Scenery_part(jgl::Vector2Int(19, 17), false), // 563
	World_object::Scenery_part(jgl::Vector2Int(20, 17), false), // 564
	World_object::Scenery_part(jgl::Vector2Int(21, 17), false), // 565
	World_object::Scenery_part(jgl::Vector2Int(22, 17), false), // 566
	World_object::Scenery_part(jgl::Vector2Int(23, 17), false), // 567
	World_object::Scenery_part(jgl::Vector2Int(24, 17), false), // 568
	World_object::Scenery_part(jgl::Vector2Int(25, 17), false), // 569
	World_object::Scenery_part(jgl::Vector2Int(26, 17), false), // -- 570
	World_object::Scenery_part(jgl::Vector2Int(27, 17), false), // 571
	World_object::Scenery_part(jgl::Vector2Int(28, 17), false), // 572
	World_object::Scenery_part(jgl::Vector2Int(29, 17), false), // 573
	World_object::Scenery_part(jgl::Vector2Int(30, 17), false), // 574
	World_object::Scenery_part(jgl::Vector2Int(31, 17), false), // 575
	World_object::Scenery_part(jgl::Vector2Int( 0, 18),  true), // 576
	World_object::Scenery_part(jgl::Vector2Int( 1, 18),  true), // 577
	World_object::Scenery_part(jgl::Vector2Int( 2, 18),  true), // 578
	World_object::Scenery_part(jgl::Vector2Int( 3, 18),  true), // 579
	World_object::Scenery_part(jgl::Vector2Int( 4, 18),  true), // -- 580
	World_object::Scenery_part(jgl::Vector2Int( 5, 18),  true), // 581
	World_object::Scenery_part(jgl::Vector2Int( 6, 18),  true), // 582
	World_object::Scenery_part(jgl::Vector2Int( 7, 18),  true), // 583
	World_object::Scenery_part(jgl::Vector2Int( 8, 18),  true), // 584
	World_object::Scenery_part(jgl::Vector2Int( 9, 18),  true), // 585
	World_object::Scenery_part(jgl::Vector2Int(10, 18),  true), // 586
	World_object::Scenery_part(jgl::Vector2Int(11, 18),  true), // 587
	World_object::Scenery_part(jgl::Vector2Int(12, 18),  true), // 588
	World_object::Scenery_part(jgl::Vector2Int(13, 18),  true), // 589
	World_object::Scenery_part(jgl::Vector2Int(14, 18),  true), // -- 590
	World_object::Scenery_part(jgl::Vector2Int(15, 18),  true), // 591
	World_object::Scenery_part(jgl::Vector2Int(16, 18), false), // 592
	World_object::Scenery_part(jgl::Vector2Int(17, 18), false), // 593
	World_object::Scenery_part(jgl::Vector2Int(18, 18), false), // 594
	World_object::Scenery_part(jgl::Vector2Int(19, 18), false), // 595
	World_object::Scenery_part(jgl::Vector2Int(20, 18), false), // 596
	World_object::Scenery_part(jgl::Vector2Int(21, 18), false), // 597
	World_object::Scenery_part(jgl::Vector2Int(22, 18), false), // 598
	World_object::Scenery_part(jgl::Vector2Int(23, 18), false), // 599
	World_object::Scenery_part(jgl::Vector2Int(24, 18),  true), // 	---- 600
	World_object::Scenery_part(jgl::Vector2Int(25, 18),  true), // 601
	World_object::Scenery_part(jgl::Vector2Int(26, 18),  true), // 602
	World_object::Scenery_part(jgl::Vector2Int(27, 18),  true), // 603
	World_object::Scenery_part(jgl::Vector2Int(28, 18),  true), // 604
	World_object::Scenery_part(jgl::Vector2Int(29, 18),  true), // 605
	World_object::Scenery_part(jgl::Vector2Int(30, 18),  true), // 606
	World_object::Scenery_part(jgl::Vector2Int(31, 18),  true), // 607
	World_object::Scenery_part(jgl::Vector2Int( 0, 19), false), // 608
	World_object::Scenery_part(jgl::Vector2Int( 1, 19), false), // 609
	World_object::Scenery_part(jgl::Vector2Int( 2, 19), false), // -- 610
	World_object::Scenery_part(jgl::Vector2Int( 3, 19), false), // 611
	World_object::Scenery_part(jgl::Vector2Int( 4, 19), false), // 612
	World_object::Scenery_part(jgl::Vector2Int( 5, 19), false), // 613
	World_object::Scenery_part(jgl::Vector2Int( 6, 19), false), // 614
	World_object::Scenery_part(jgl::Vector2Int( 7, 19), false), // 615
	World_object::Scenery_part(jgl::Vector2Int( 8, 19), false), // 616
	World_object::Scenery_part(jgl::Vector2Int( 9, 19), false), // 617
	World_object::Scenery_part(jgl::Vector2Int(10, 19), false), // 618
	World_object::Scenery_part(jgl::Vector2Int(11, 19), false), // 619
	World_object::Scenery_part(jgl::Vector2Int(12, 19), false), // -- 620
	World_object::Scenery_part(jgl::Vector2Int(13, 19), false), // 621
	World_object::Scenery_part(jgl::Vector2Int(14, 19), false), // 622
	World_object::Scenery_part(jgl::Vector2Int(15, 19), false), // 623
	World_object::Scenery_part(jgl::Vector2Int(16, 19),  true), // 624
	World_object::Scenery_part(jgl::Vector2Int(17, 19),  true), // 625
	World_object::Scenery_part(jgl::Vector2Int(18, 19),  true), // 626
	World_object::Scenery_part(jgl::Vector2Int(19, 19),  true), // 627
	World_object::Scenery_part(jgl::Vector2Int(20, 19),  true), // 628
	World_object::Scenery_part(jgl::Vector2Int(21, 19),  true), // 629
	World_object::Scenery_part(jgl::Vector2Int(22, 19),  true), // -- 630
	World_object::Scenery_part(jgl::Vector2Int(23, 19),  true), // 631
	World_object::Scenery_part(jgl::Vector2Int(24, 19),  true), // 632
	World_object::Scenery_part(jgl::Vector2Int(25, 19),  true), // 633
	World_object::Scenery_part(jgl::Vector2Int(26, 19),  true), // 634
	World_object::Scenery_part(jgl::Vector2Int(27, 19),  true), // 635
	World_object::Scenery_part(jgl::Vector2Int(28, 19),  true), // 636
	World_object::Scenery_part(jgl::Vector2Int(29, 19),  true), // 637
	World_object::Scenery_part(jgl::Vector2Int(30, 19),  true), // 638
	World_object::Scenery_part(jgl::Vector2Int(31, 19),  true), // 639
	World_object::Scenery_part(jgl::Vector2Int( 0, 20),  true), // -- 640
	World_object::Scenery_part(jgl::Vector2Int( 1, 20),  true), // 641
	World_object::Scenery_part(jgl::Vector2Int( 2, 20),  true), // 642
	World_object::Scenery_part(jgl::Vector2Int( 3, 20),  true), // 643
	World_object::Scenery_part(jgl::Vector2Int( 4, 20),  true), // 644
	World_object::Scenery_part(jgl::Vector2Int( 5, 20),  true), // 645
	World_object::Scenery_part(jgl::Vector2Int( 6, 20),  true), // 646
	World_object::Scenery_part(jgl::Vector2Int( 7, 20),  true), // 647
	World_object::Scenery_part(jgl::Vector2Int( 8, 20),  true), // 648
	World_object::Scenery_part(jgl::Vector2Int( 9, 20),  true), // 649
	World_object::Scenery_part(jgl::Vector2Int(10, 20),  true), // -- 650
	World_object::Scenery_part(jgl::Vector2Int(11, 20),  true), // 651
	World_object::Scenery_part(jgl::Vector2Int(12, 20),  true), // 652
	World_object::Scenery_part(jgl::Vector2Int(13, 20),  true), // 653
	World_object::Scenery_part(jgl::Vector2Int(14, 20),  true), // 654
	World_object::Scenery_part(jgl::Vector2Int(15, 20),  true), // 655
	World_object::Scenery_part(jgl::Vector2Int(16, 20),  true), // 656
	World_object::Scenery_part(jgl::Vector2Int(17, 20),  true), // 657
	World_object::Scenery_part(jgl::Vector2Int(18, 20),  true), // 658
	World_object::Scenery_part(jgl::Vector2Int(19, 20),  true), // 659
	World_object::Scenery_part(jgl::Vector2Int(20, 20),  true), // -- 660
	World_object::Scenery_part(jgl::Vector2Int(21, 20),  true), // 661
	World_object::Scenery_part(jgl::Vector2Int(22, 20),  true), // 662
	World_object::Scenery_part(jgl::Vector2Int(23, 20),  true), // 663
	World_object::Scenery_part(jgl::Vector2Int(24, 20),  true), // 664
	World_object::Scenery_part(jgl::Vector2Int(25, 20),  true), // 665
	World_object::Scenery_part(jgl::Vector2Int(26, 20),  true), // 666
	World_object::Scenery_part(jgl::Vector2Int(27, 20),  true), // 667
	World_object::Scenery_part(jgl::Vector2Int(28, 20),  true), // 668
	World_object::Scenery_part(jgl::Vector2Int(29, 20),  true), // 669
	World_object::Scenery_part(jgl::Vector2Int(30, 20),  true), // -- 670
	World_object::Scenery_part(jgl::Vector2Int(31, 20),  true), // 671
	World_object::Scenery_part(jgl::Vector2Int( 0, 21), false), // 672
	World_object::Scenery_part(jgl::Vector2Int( 1, 21), false), // 673
	World_object::Scenery_part(jgl::Vector2Int( 2, 21), false), // 674
	World_object::Scenery_part(jgl::Vector2Int( 3, 21), false), // 675
	World_object::Scenery_part(jgl::Vector2Int( 4, 21), false), // 676
	World_object::Scenery_part(jgl::Vector2Int( 5, 21), false), // 677
	World_object::Scenery_part(jgl::Vector2Int( 6, 21), false), // 678
	World_object::Scenery_part(jgl::Vector2Int( 7, 21), false), // 679
	World_object::Scenery_part(jgl::Vector2Int( 8, 21), false), // -- 680
	World_object::Scenery_part(jgl::Vector2Int( 9, 21), false), // 681
	World_object::Scenery_part(jgl::Vector2Int(10, 21), false), // 682
	World_object::Scenery_part(jgl::Vector2Int(11, 21), false), // 683
	World_object::Scenery_part(jgl::Vector2Int(12, 21), false), // 684
	World_object::Scenery_part(jgl::Vector2Int(13, 21), false), // 685
	World_object::Scenery_part(jgl::Vector2Int(14, 21), false), // 686
	World_object::Scenery_part(jgl::Vector2Int(15, 21), false), // 687
	World_object::Scenery_part(jgl::Vector2Int(16, 21),  true), // 688
	World_object::Scenery_part(jgl::Vector2Int(17, 21),  true), // 689
	World_object::Scenery_part(jgl::Vector2Int(18, 21),  true), // -- 690
	World_object::Scenery_part(jgl::Vector2Int(19, 21),  true), // 691
	World_object::Scenery_part(jgl::Vector2Int(20, 21),  true), // 692
	World_object::Scenery_part(jgl::Vector2Int(21, 21),  true), // 693
	World_object::Scenery_part(jgl::Vector2Int(22, 21),  true), // 694
	World_object::Scenery_part(jgl::Vector2Int(23, 21),  true), // 695
	World_object::Scenery_part(jgl::Vector2Int(24, 21),  true), // 696
	World_object::Scenery_part(jgl::Vector2Int(25, 21),  true), // 697
	World_object::Scenery_part(jgl::Vector2Int(26, 21),  true), // 698
	World_object::Scenery_part(jgl::Vector2Int(27, 21),  true), // 699
	World_object::Scenery_part(jgl::Vector2Int(28, 21),  true), // 	---- 700
	World_object::Scenery_part(jgl::Vector2Int(29, 21),  true), // 701
	World_object::Scenery_part(jgl::Vector2Int(30, 21),  true), // 702
	World_object::Scenery_part(jgl::Vector2Int(31, 21),  true), // 703
	World_object::Scenery_part(jgl::Vector2Int( 0, 22),  true), // 704
	World_object::Scenery_part(jgl::Vector2Int( 1, 22),  true), // 705
	World_object::Scenery_part(jgl::Vector2Int( 2, 22),  true), // 706
	World_object::Scenery_part(jgl::Vector2Int( 3, 22),  true), // 707
	World_object::Scenery_part(jgl::Vector2Int( 4, 22),  true), // 708
	World_object::Scenery_part(jgl::Vector2Int( 5, 22),  true), // 709
	World_object::Scenery_part(jgl::Vector2Int( 6, 22),  true), // -- 710
	World_object::Scenery_part(jgl::Vector2Int( 7, 22),  true), // 711
	World_object::Scenery_part(jgl::Vector2Int( 8, 22),  true), // 712
	World_object::Scenery_part(jgl::Vector2Int( 9, 22),  true), // 713
	World_object::Scenery_part(jgl::Vector2Int(10, 22),  true), // 714
	World_object::Scenery_part(jgl::Vector2Int(11, 22),  true), // 715
	World_object::Scenery_part(jgl::Vector2Int(12, 22),  true), // 716
	World_object::Scenery_part(jgl::Vector2Int(13, 22),  true), // 717
	World_object::Scenery_part(jgl::Vector2Int(14, 22),  true), // 718
	World_object::Scenery_part(jgl::Vector2Int(15, 22),  true), // 719
	World_object::Scenery_part(jgl::Vector2Int(16, 22),  true), // -- 720
	World_object::Scenery_part(jgl::Vector2Int(17, 22),  true), // 721
	World_object::Scenery_part(jgl::Vector2Int(18, 22),  true), // 722
	World_object::Scenery_part(jgl::Vector2Int(19, 22),  true), // 723
	World_object::Scenery_part(jgl::Vector2Int(20, 22),  true), // 724
	World_object::Scenery_part(jgl::Vector2Int(21, 22),  true), // 725
	World_object::Scenery_part(jgl::Vector2Int(22, 22),  true), // 726
	World_object::Scenery_part(jgl::Vector2Int(23, 22),  true), // 727
	World_object::Scenery_part(jgl::Vector2Int(24, 22),  true), // 728
	World_object::Scenery_part(jgl::Vector2Int(25, 22),  true), // 729
	World_object::Scenery_part(jgl::Vector2Int(26, 22),  true), // -- 730
	World_object::Scenery_part(jgl::Vector2Int(27, 22),  true), // 731
	World_object::Scenery_part(jgl::Vector2Int(28, 22),  true), // 732
	World_object::Scenery_part(jgl::Vector2Int(29, 22),  true), // 733
	World_object::Scenery_part(jgl::Vector2Int(30, 22),  true), // 734
	World_object::Scenery_part(jgl::Vector2Int(31, 22),  true), // 735
	World_object::Scenery_part(jgl::Vector2Int( 0, 23), false), // 736
	World_object::Scenery_part(jgl::Vector2Int( 1, 23), false), // 737
	World_object::Scenery_part(jgl::Vector2Int( 2, 23), false), // 738
	World_object::Scenery_part(jgl::Vector2Int( 3, 23), false), // 739
	World_object::Scenery_part(jgl::Vector2Int( 4, 23), false), // -- 740
	World_object::Scenery_part(jgl::Vector2Int( 5, 23), false), // 741
	World_object::Scenery_part(jgl::Vector2Int( 6, 23), false), // 742
	World_object::Scenery_part(jgl::Vector2Int( 7, 23), false), // 743
	World_object::Scenery_part(jgl::Vector2Int( 8, 23), false), // 744
	World_object::Scenery_part(jgl::Vector2Int( 9, 23), false), // 745
	World_object::Scenery_part(jgl::Vector2Int(10, 23), false), // 746
	World_object::Scenery_part(jgl::Vector2Int(11, 23), false), // 747
	World_object::Scenery_part(jgl::Vector2Int(12, 23), false), // 748
	World_object::Scenery_part(jgl::Vector2Int(13, 23), false), // 749
	World_object::Scenery_part(jgl::Vector2Int(14, 23), false), // -- 750
	World_object::Scenery_part(jgl::Vector2Int(15, 23), false), // 751
	World_object::Scenery_part(jgl::Vector2Int(16, 23),  true), // 752
	World_object::Scenery_part(jgl::Vector2Int(17, 23),  true), // 753
	World_object::Scenery_part(jgl::Vector2Int(18, 23),  true), // 754
	World_object::Scenery_part(jgl::Vector2Int(19, 23),  true), // 755
	World_object::Scenery_part(jgl::Vector2Int(20, 23),  true), // 756
	World_object::Scenery_part(jgl::Vector2Int(21, 23),  true), // 757
	World_object::Scenery_part(jgl::Vector2Int(22, 23),  true), // 758
	World_object::Scenery_part(jgl::Vector2Int(23, 23),  true), // 759
	World_object::Scenery_part(jgl::Vector2Int(24, 23),  true), // -- 760
	World_object::Scenery_part(jgl::Vector2Int(25, 23),  true), // 761
	World_object::Scenery_part(jgl::Vector2Int(26, 23),  true), // 762
	World_object::Scenery_part(jgl::Vector2Int(27, 23),  true), // 763
	World_object::Scenery_part(jgl::Vector2Int(28, 23),  true), // 764
	World_object::Scenery_part(jgl::Vector2Int(29, 23),  true), // 765
	World_object::Scenery_part(jgl::Vector2Int(30, 23),  true), // 766
	World_object::Scenery_part(jgl::Vector2Int(31, 23),  true), // 767
	World_object::Scenery_part(jgl::Vector2Int( 0, 24),  true), // 768
	World_object::Scenery_part(jgl::Vector2Int( 1, 24),  true), // 769
	World_object::Scenery_part(jgl::Vector2Int( 2, 24),  true), // -- 770
	World_object::Scenery_part(jgl::Vector2Int( 3, 24),  true), // 771
	World_object::Scenery_part(jgl::Vector2Int( 4, 24),  true), // 772
	World_object::Scenery_part(jgl::Vector2Int( 5, 24),  true), // 773
	World_object::Scenery_part(jgl::Vector2Int( 6, 24),  true), // 774
	World_object::Scenery_part(jgl::Vector2Int( 7, 24),  true), // 775
	World_object::Scenery_part(jgl::Vector2Int( 8, 24),  true), // 776
	World_object::Scenery_part(jgl::Vector2Int( 9, 24),  true), // 777
	World_object::Scenery_part(jgl::Vector2Int(10, 24),  true), // 778
	World_object::Scenery_part(jgl::Vector2Int(11, 24),  true), // 779
	World_object::Scenery_part(jgl::Vector2Int(12, 24),  true), // -- 780
	World_object::Scenery_part(jgl::Vector2Int(13, 24),  true), // 781
	World_object::Scenery_part(jgl::Vector2Int(14, 24),  true), // 782
	World_object::Scenery_part(jgl::Vector2Int(15, 24),  true), // 783
	World_object::Scenery_part(jgl::Vector2Int(16, 24),  true), // 784
	World_object::Scenery_part(jgl::Vector2Int(17, 24),  true), // 785
	World_object::Scenery_part(jgl::Vector2Int(18, 24),  true), // 786
	World_object::Scenery_part(jgl::Vector2Int(19, 24),  true), // 787
	World_object::Scenery_part(jgl::Vector2Int(20, 24),  true), // 788
	World_object::Scenery_part(jgl::Vector2Int(21, 24),  true), // 789
	World_object::Scenery_part(jgl::Vector2Int(22, 24),  true), // -- 790
	World_object::Scenery_part(jgl::Vector2Int(23, 24),  true), // 791
	World_object::Scenery_part(jgl::Vector2Int(24, 24),  true), // 792
	World_object::Scenery_part(jgl::Vector2Int(25, 24),  true), // 793
	World_object::Scenery_part(jgl::Vector2Int(26, 24),  true), // 794
	World_object::Scenery_part(jgl::Vector2Int(27, 24),  true), // 795
	World_object::Scenery_part(jgl::Vector2Int(28, 24),  true), // 796
	World_object::Scenery_part(jgl::Vector2Int(29, 24),  true), // 797
	World_object::Scenery_part(jgl::Vector2Int(30, 24),  true), // 798
	World_object::Scenery_part(jgl::Vector2Int(31, 24),  true), // 799
	World_object::Scenery_part(jgl::Vector2Int( 0, 25), false), // 	---- 800
	World_object::Scenery_part(jgl::Vector2Int( 1, 25), false), // 801
	World_object::Scenery_part(jgl::Vector2Int( 2, 25), false), // 802
	World_object::Scenery_part(jgl::Vector2Int( 3, 25), false), // 803
	World_object::Scenery_part(jgl::Vector2Int( 4, 25), false), // 804
	World_object::Scenery_part(jgl::Vector2Int( 5, 25), false), // 805
	World_object::Scenery_part(jgl::Vector2Int( 6, 25), false), // 806
	World_object::Scenery_part(jgl::Vector2Int( 7, 25), false), // 807
	World_object::Scenery_part(jgl::Vector2Int( 8, 25),  true), // 808
	World_object::Scenery_part(jgl::Vector2Int( 9, 25),  true), // 809
	World_object::Scenery_part(jgl::Vector2Int(10, 25),  true), // -- 810
	World_object::Scenery_part(jgl::Vector2Int(11, 25),  true), // 811
	World_object::Scenery_part(jgl::Vector2Int(12, 25),  true), // 812
	World_object::Scenery_part(jgl::Vector2Int(13, 25),  true), // 813
	World_object::Scenery_part(jgl::Vector2Int(14, 25),  true), // 814
	World_object::Scenery_part(jgl::Vector2Int(15, 25),  true), // 815
	World_object::Scenery_part(jgl::Vector2Int(16, 25),  true), // 816
	World_object::Scenery_part(jgl::Vector2Int(17, 25),  true), // 817
	World_object::Scenery_part(jgl::Vector2Int(18, 25),  true), // 818
	World_object::Scenery_part(jgl::Vector2Int(19, 25),  true), // 819
	World_object::Scenery_part(jgl::Vector2Int(20, 25),  true), // -- 820
	World_object::Scenery_part(jgl::Vector2Int(21, 25),  true), // 821
	World_object::Scenery_part(jgl::Vector2Int(22, 25),  true), // 822
	World_object::Scenery_part(jgl::Vector2Int(23, 25),  true), // 823
	World_object::Scenery_part(jgl::Vector2Int(24, 25),  true), // 824
	World_object::Scenery_part(jgl::Vector2Int(25, 25),  true), // 825
	World_object::Scenery_part(jgl::Vector2Int(26, 25),  true), // 826
	World_object::Scenery_part(jgl::Vector2Int(27, 25),  true), // 827
	World_object::Scenery_part(jgl::Vector2Int(28, 25),  true), // 828
	World_object::Scenery_part(jgl::Vector2Int(29, 25),  true), // 829
	World_object::Scenery_part(jgl::Vector2Int(30, 25),  true), // -- 830
	World_object::Scenery_part(jgl::Vector2Int(31, 25),  true), // 831
	World_object::Scenery_part(jgl::Vector2Int( 0, 26), false), // 832
	World_object::Scenery_part(jgl::Vector2Int( 1, 26), false), // 833
	World_object::Scenery_part(jgl::Vector2Int( 2, 26), false), // 834
	World_object::Scenery_part(jgl::Vector2Int( 3, 26), false), // 835
	World_object::Scenery_part(jgl::Vector2Int( 4, 26), false), // 836
	World_object::Scenery_part(jgl::Vector2Int( 5, 26), false), // 837
	World_object::Scenery_part(jgl::Vector2Int( 6, 26), false), // 838
	World_object::Scenery_part(jgl::Vector2Int( 7, 26), false), // 839
	World_object::Scenery_part(jgl::Vector2Int( 8, 26), false), // -- 840
	World_object::Scenery_part(jgl::Vector2Int( 9, 26), false), // 841
	World_object::Scenery_part(jgl::Vector2Int(10, 26), false), // 842
	World_object::Scenery_part(jgl::Vector2Int(11, 26), false), // 843
	World_object::Scenery_part(jgl::Vector2Int(12, 26), false), // 844
	World_object::Scenery_part(jgl::Vector2Int(13, 26), false), // 845
	World_object::Scenery_part(jgl::Vector2Int(14, 26), false), // 846
	World_object::Scenery_part(jgl::Vector2Int(15, 26), false), // 847
	World_object::Scenery_part(jgl::Vector2Int(16, 26),  true), // 848
	World_object::Scenery_part(jgl::Vector2Int(17, 26),  true), // 849
	World_object::Scenery_part(jgl::Vector2Int(18, 26),  true), // -- 850
	World_object::Scenery_part(jgl::Vector2Int(19, 26),  true), // 851
	World_object::Scenery_part(jgl::Vector2Int(20, 26),  true), // 852
	World_object::Scenery_part(jgl::Vector2Int(21, 26),  true), // 853
	World_object::Scenery_part(jgl::Vector2Int(22, 26),  true), // 854
	World_object::Scenery_part(jgl::Vector2Int(23, 26),  true), // 855
	World_object::Scenery_part(jgl::Vector2Int(24, 26),  true), // 856
	World_object::Scenery_part(jgl::Vector2Int(25, 26),  true), // 857
	World_object::Scenery_part(jgl::Vector2Int(26, 26),  true), // 858
	World_object::Scenery_part(jgl::Vector2Int(27, 26),  true), // 859
	World_object::Scenery_part(jgl::Vector2Int(28, 26),  true), // -- 860
	World_object::Scenery_part(jgl::Vector2Int(29, 26),  true), // 861
	World_object::Scenery_part(jgl::Vector2Int(30, 26),  true), // 862
	World_object::Scenery_part(jgl::Vector2Int(31, 26),  true), // 863
	World_object::Scenery_part(jgl::Vector2Int( 0, 27), false), // 864
	World_object::Scenery_part(jgl::Vector2Int( 1, 27), false), // 865
	World_object::Scenery_part(jgl::Vector2Int( 2, 27), false), // 866
	World_object::Scenery_part(jgl::Vector2Int( 3, 27), false), // 867
	World_object::Scenery_part(jgl::Vector2Int( 4, 27), false), // 868
	World_object::Scenery_part(jgl::Vector2Int( 5, 27), false), // 869
	World_object::Scenery_part(jgl::Vector2Int( 6, 27), false), // -- 870
	World_object::Scenery_part(jgl::Vector2Int( 7, 27), false), // 871
	World_object::Scenery_part(jgl::Vector2Int( 8, 27),  true), // 872
	World_object::Scenery_part(jgl::Vector2Int( 9, 27),  true), // 873
	World_object::Scenery_part(jgl::Vector2Int(10, 27),  true), // 874
	World_object::Scenery_part(jgl::Vector2Int(11, 27),  true), // 875
	World_object::Scenery_part(jgl::Vector2Int(12, 27),  true), // 876
	World_object::Scenery_part(jgl::Vector2Int(13, 27),  true), // 877
	World_object::Scenery_part(jgl::Vector2Int(14, 27),  true), // 878
	World_object::Scenery_part(jgl::Vector2Int(15, 27),  true), // 879
	World_object::Scenery_part(jgl::Vector2Int(16, 27),  true), // -- 880
	World_object::Scenery_part(jgl::Vector2Int(17, 27),  true), // 881
	World_object::Scenery_part(jgl::Vector2Int(18, 27),  true), // 882
	World_object::Scenery_part(jgl::Vector2Int(19, 27),  true), // 883
	World_object::Scenery_part(jgl::Vector2Int(20, 27),  true), // 884
	World_object::Scenery_part(jgl::Vector2Int(21, 27),  true), // 885
	World_object::Scenery_part(jgl::Vector2Int(22, 27),  true), // 886
	World_object::Scenery_part(jgl::Vector2Int(23, 27),  true), // 887
	World_object::Scenery_part(jgl::Vector2Int(24, 27),  true), // 888
	World_object::Scenery_part(jgl::Vector2Int(25, 27),  true), // 889
	World_object::Scenery_part(jgl::Vector2Int(26, 27),  true), // -- 890
	World_object::Scenery_part(jgl::Vector2Int(27, 27),  true), // 891
	World_object::Scenery_part(jgl::Vector2Int(28, 27),  true), // 892
	World_object::Scenery_part(jgl::Vector2Int(29, 27),  true), // 893
	World_object::Scenery_part(jgl::Vector2Int(30, 27),  true), // 894
	World_object::Scenery_part(jgl::Vector2Int(31, 27),  true), // 895
	World_object::Scenery_part(jgl::Vector2Int( 0, 28),  true), // 896
	World_object::Scenery_part(jgl::Vector2Int( 1, 28),  true), // 897
	World_object::Scenery_part(jgl::Vector2Int( 2, 28),  true), // 898
	World_object::Scenery_part(jgl::Vector2Int( 3, 28),  true), // 899
	World_object::Scenery_part(jgl::Vector2Int( 4, 28),  true), // 	---- 900
	World_object::Scenery_part(jgl::Vector2Int( 5, 28),  true), // 901
	World_object::Scenery_part(jgl::Vector2Int( 6, 28),  true), // 902
	World_object::Scenery_part(jgl::Vector2Int( 7, 28),  true), // 903
	World_object::Scenery_part(jgl::Vector2Int( 8, 28),  true), // 904
	World_object::Scenery_part(jgl::Vector2Int( 9, 28),  true), // 905
	World_object::Scenery_part(jgl::Vector2Int(10, 28),  true), // 906
	World_object::Scenery_part(jgl::Vector2Int(11, 28),  true), // 907
	World_object::Scenery_part(jgl::Vector2Int(12, 28),  true), // 908
	World_object::Scenery_part(jgl::Vector2Int(13, 28),  true), // 909
	World_object::Scenery_part(jgl::Vector2Int(14, 28),  true), // -- 910
	World_object::Scenery_part(jgl::Vector2Int(15, 28),  true), // 911
	World_object::Scenery_part(jgl::Vector2Int(16, 28),  true), // 912
	World_object::Scenery_part(jgl::Vector2Int(17, 28),  true), // 913
	World_object::Scenery_part(jgl::Vector2Int(18, 28),  true), // 914
	World_object::Scenery_part(jgl::Vector2Int(19, 28),  true), // 915
	World_object::Scenery_part(jgl::Vector2Int(20, 28),  true), // 916
	World_object::Scenery_part(jgl::Vector2Int(21, 28),  true), // 917
	World_object::Scenery_part(jgl::Vector2Int(22, 28),  true), // 918
	World_object::Scenery_part(jgl::Vector2Int(23, 28),  true), // 919
	World_object::Scenery_part(jgl::Vector2Int(24, 28),  true), // -- 920
	World_object::Scenery_part(jgl::Vector2Int(25, 28),  true), // 921
	World_object::Scenery_part(jgl::Vector2Int(26, 28),  true), // 922
	World_object::Scenery_part(jgl::Vector2Int(27, 28),  true), // 923
	World_object::Scenery_part(jgl::Vector2Int(28, 28),  true), // 924
	World_object::Scenery_part(jgl::Vector2Int(29, 28),  true), // 925
	World_object::Scenery_part(jgl::Vector2Int(30, 28),  true), // 926
	World_object::Scenery_part(jgl::Vector2Int(31, 28),  true), // 927
	World_object::Scenery_part(jgl::Vector2Int( 0, 29), false), // 928
	World_object::Scenery_part(jgl::Vector2Int( 1, 29), false), // 929
	World_object::Scenery_part(jgl::Vector2Int( 2, 29), false), // -- 930
	World_object::Scenery_part(jgl::Vector2Int( 3, 29), false), // 931
	World_object::Scenery_part(jgl::Vector2Int( 4, 29), false), // 932
	World_object::Scenery_part(jgl::Vector2Int( 5, 29), false), // 933
	World_object::Scenery_part(jgl::Vector2Int( 6, 29), false), // 934
	World_object::Scenery_part(jgl::Vector2Int( 7, 29), false), // 935
	World_object::Scenery_part(jgl::Vector2Int( 8, 29),  true), // 936
	World_object::Scenery_part(jgl::Vector2Int( 9, 29),  true), // 937
	World_object::Scenery_part(jgl::Vector2Int(10, 29),  true), // 938
	World_object::Scenery_part(jgl::Vector2Int(11, 29),  true), // 939
	World_object::Scenery_part(jgl::Vector2Int(12, 29),  true), // -- 940
	World_object::Scenery_part(jgl::Vector2Int(13, 29),  true), // 941
	World_object::Scenery_part(jgl::Vector2Int(14, 29),  true), // 942
	World_object::Scenery_part(jgl::Vector2Int(15, 29),  true), // 943
	World_object::Scenery_part(jgl::Vector2Int(16, 29),  true), // 944
	World_object::Scenery_part(jgl::Vector2Int(17, 29),  true), // 945
	World_object::Scenery_part(jgl::Vector2Int(18, 29),  true), // 946
	World_object::Scenery_part(jgl::Vector2Int(19, 29),  true), // 947
	World_object::Scenery_part(jgl::Vector2Int(20, 29),  true), // 948
	World_object::Scenery_part(jgl::Vector2Int(21, 29),  true), // 949
	World_object::Scenery_part(jgl::Vector2Int(22, 29),  true), // -- 950
	World_object::Scenery_part(jgl::Vector2Int(23, 29),  true), // 951
	World_object::Scenery_part(jgl::Vector2Int(24, 29),  true), // 952
	World_object::Scenery_part(jgl::Vector2Int(25, 29),  true), // 953
	World_object::Scenery_part(jgl::Vector2Int(26, 29),  true), // 954
	World_object::Scenery_part(jgl::Vector2Int(27, 29),  true), // 955
	World_object::Scenery_part(jgl::Vector2Int(28, 29),  true), // 956
	World_object::Scenery_part(jgl::Vector2Int(29, 29),  true), // 957
	World_object::Scenery_part(jgl::Vector2Int(30, 29),  true), // 958
	World_object::Scenery_part(jgl::Vector2Int(31, 29),  true), // 959
	World_object::Scenery_part(jgl::Vector2Int( 0, 30),  true), // -- 960
	World_object::Scenery_part(jgl::Vector2Int( 1, 30),  true), // 961
	World_object::Scenery_part(jgl::Vector2Int( 2, 30),  true), // 962
	World_object::Scenery_part(jgl::Vector2Int( 3, 30),  true), // 963
	World_object::Scenery_part(jgl::Vector2Int( 4, 30),  true), // 964
	World_object::Scenery_part(jgl::Vector2Int( 5, 30),  true), // 965
	World_object::Scenery_part(jgl::Vector2Int( 6, 30),  true), // 966
	World_object::Scenery_part(jgl::Vector2Int( 7, 30),  true), // 967
	World_object::Scenery_part(jgl::Vector2Int( 8, 30),  true), // 968
	World_object::Scenery_part(jgl::Vector2Int( 9, 30),  true), // 969
	World_object::Scenery_part(jgl::Vector2Int(10, 30),  true), // -- 970
	World_object::Scenery_part(jgl::Vector2Int(11, 30),  true), // 971
	World_object::Scenery_part(jgl::Vector2Int(12, 30),  true), // 972
	World_object::Scenery_part(jgl::Vector2Int(13, 30),  true), // 973
	World_object::Scenery_part(jgl::Vector2Int(14, 30),  true), // 974
	World_object::Scenery_part(jgl::Vector2Int(15, 30),  true), // 975
	World_object::Scenery_part(jgl::Vector2Int(16, 30),  true), // 976
	World_object::Scenery_part(jgl::Vector2Int(17, 30),  true), // 977
	World_object::Scenery_part(jgl::Vector2Int(18, 30),  true), // 978
	World_object::Scenery_part(jgl::Vector2Int(19, 30),  true), // 979
	World_object::Scenery_part(jgl::Vector2Int(20, 30),  true), // -- 980
	World_object::Scenery_part(jgl::Vector2Int(21, 30),  true), // 981
	World_object::Scenery_part(jgl::Vector2Int(22, 30),  true), // 982
	World_object::Scenery_part(jgl::Vector2Int(23, 30),  true), // 983
	World_object::Scenery_part(jgl::Vector2Int(24, 30),  true), // 984
	World_object::Scenery_part(jgl::Vector2Int(25, 30),  true), // 985
	World_object::Scenery_part(jgl::Vector2Int(26, 30),  true), // 986
	World_object::Scenery_part(jgl::Vector2Int(27, 30),  true), // 987
	World_object::Scenery_part(jgl::Vector2Int(28, 30),  true), // 988
	World_object::Scenery_part(jgl::Vector2Int(29, 30),  true), // 989
	World_object::Scenery_part(jgl::Vector2Int(30, 30),  true), // -- 990
	World_object::Scenery_part(jgl::Vector2Int(31, 30),  true), // 991
	World_object::Scenery_part(jgl::Vector2Int( 0, 31), false), // 992
	World_object::Scenery_part(jgl::Vector2Int( 1, 31), false), // 993
	World_object::Scenery_part(jgl::Vector2Int( 2, 31), false), // 994
	World_object::Scenery_part(jgl::Vector2Int( 3, 31), false), // 995
	World_object::Scenery_part(jgl::Vector2Int( 4, 31), false), // 996
	World_object::Scenery_part(jgl::Vector2Int( 5, 31), false), // 997
	World_object::Scenery_part(jgl::Vector2Int( 6, 31),  true), // 998
	World_object::Scenery_part(jgl::Vector2Int( 7, 31),  true), // 999
	World_object::Scenery_part(jgl::Vector2Int( 8, 31),  true), // 	---- 1000
	World_object::Scenery_part(jgl::Vector2Int( 9, 31),  true), // 1001
	World_object::Scenery_part(jgl::Vector2Int(10, 31),  true), // 1002
	World_object::Scenery_part(jgl::Vector2Int(11, 31),  true), // 1003
	World_object::Scenery_part(jgl::Vector2Int(12, 31),  true), // 1004
	World_object::Scenery_part(jgl::Vector2Int(13, 31),  true), // 1005
	World_object::Scenery_part(jgl::Vector2Int(14, 31),  true), // 1006
	World_object::Scenery_part(jgl::Vector2Int(15, 31),  true), // 1007
	World_object::Scenery_part(jgl::Vector2Int(16, 31),  true), // 1008
	World_object::Scenery_part(jgl::Vector2Int(17, 31),  true), // 1009
	World_object::Scenery_part(jgl::Vector2Int(18, 31),  true), // -- 1010
	World_object::Scenery_part(jgl::Vector2Int(19, 31),  true), // 1011
	World_object::Scenery_part(jgl::Vector2Int(20, 31),  true), // 1012
	World_object::Scenery_part(jgl::Vector2Int(21, 31),  true), // 1013
	World_object::Scenery_part(jgl::Vector2Int(22, 31),  true), // 1014
	World_object::Scenery_part(jgl::Vector2Int(23, 31),  true), // 1015
	World_object::Scenery_part(jgl::Vector2Int(24, 31),  true), // 1016
	World_object::Scenery_part(jgl::Vector2Int(25, 31),  true), // 1017
	World_object::Scenery_part(jgl::Vector2Int(26, 31),  true), // 1018
	World_object::Scenery_part(jgl::Vector2Int(27, 31),  true), // 1019
	World_object::Scenery_part(jgl::Vector2Int(28, 31),  true), // -- 1020
	World_object::Scenery_part(jgl::Vector2Int(29, 31),  true), // 1021
	World_object::Scenery_part(jgl::Vector2Int(30, 31),  true), // 1022
	World_object::Scenery_part(jgl::Vector2Int(31, 31),  true), // 1023
	World_object::Scenery_part(jgl::Vector2Int( 0, 32), false), // 1024
	World_object::Scenery_part(jgl::Vector2Int( 1, 32), false), // 1025
	World_object::Scenery_part(jgl::Vector2Int( 2, 32), false), // 1026
	World_object::Scenery_part(jgl::Vector2Int( 3, 32), false), // 1027
	World_object::Scenery_part(jgl::Vector2Int( 4, 32), false), // 1028
	World_object::Scenery_part(jgl::Vector2Int( 5, 32), false), // 1029
	World_object::Scenery_part(jgl::Vector2Int( 6, 32),  true), // -- 1030
	World_object::Scenery_part(jgl::Vector2Int( 7, 32),  true), // 1031
	World_object::Scenery_part(jgl::Vector2Int( 8, 32),  true), // 1032
	World_object::Scenery_part(jgl::Vector2Int( 9, 32),  true), // 1033
	World_object::Scenery_part(jgl::Vector2Int(10, 32),  true), // 1034
	World_object::Scenery_part(jgl::Vector2Int(11, 32),  true), // 1035
	World_object::Scenery_part(jgl::Vector2Int(12, 32),  true), // 1036
	World_object::Scenery_part(jgl::Vector2Int(13, 32),  true), // 1037
	World_object::Scenery_part(jgl::Vector2Int(14, 32),  true), // 1038
	World_object::Scenery_part(jgl::Vector2Int(15, 32),  true), // 1039
	World_object::Scenery_part(jgl::Vector2Int(16, 32),  true), // -- 1040
	World_object::Scenery_part(jgl::Vector2Int(17, 32),  true), // 1041
	World_object::Scenery_part(jgl::Vector2Int(18, 32),  true), // 1042
	World_object::Scenery_part(jgl::Vector2Int(19, 32),  true), // 1043
	World_object::Scenery_part(jgl::Vector2Int(20, 32),  true), // 1044
	World_object::Scenery_part(jgl::Vector2Int(21, 32),  true), // 1045
	World_object::Scenery_part(jgl::Vector2Int(22, 32),  true), // 1046
	World_object::Scenery_part(jgl::Vector2Int(23, 32),  true), // 1047
	World_object::Scenery_part(jgl::Vector2Int(24, 32),  true), // 1048
	World_object::Scenery_part(jgl::Vector2Int(25, 32),  true), // 1049
	World_object::Scenery_part(jgl::Vector2Int(26, 32),  true), // -- 1050
	World_object::Scenery_part(jgl::Vector2Int(27, 32),  true), // 1051
	World_object::Scenery_part(jgl::Vector2Int(28, 32),  true), // 1052
	World_object::Scenery_part(jgl::Vector2Int(29, 32),  true), // 1053
	World_object::Scenery_part(jgl::Vector2Int(30, 32),  true), // 1054
	World_object::Scenery_part(jgl::Vector2Int(31, 32),  true), // 1055
	World_object::Scenery_part(jgl::Vector2Int( 0, 33),  true), // 1056
	World_object::Scenery_part(jgl::Vector2Int( 1, 33),  true), // 1057
	World_object::Scenery_part(jgl::Vector2Int( 2, 33),  true), // 1058
	World_object::Scenery_part(jgl::Vector2Int( 3, 33),  true), // 1059
	World_object::Scenery_part(jgl::Vector2Int( 4, 33),  true), // -- 1060
	World_object::Scenery_part(jgl::Vector2Int( 5, 33),  true), // 1061
	World_object::Scenery_part(jgl::Vector2Int( 6, 33),  true), // 1062
	World_object::Scenery_part(jgl::Vector2Int( 7, 33),  true), // 1063
	World_object::Scenery_part(jgl::Vector2Int( 8, 33), false), // 1064
	World_object::Scenery_part(jgl::Vector2Int( 9, 33), false), // 1065
	World_object::Scenery_part(jgl::Vector2Int(10, 33),  true), // 1066
	World_object::Scenery_part(jgl::Vector2Int(11, 33),  true), // 1067
	World_object::Scenery_part(jgl::Vector2Int(12, 33),  true), // 1068
	World_object::Scenery_part(jgl::Vector2Int(13, 33),  true), // 1069
	World_object::Scenery_part(jgl::Vector2Int(14, 33),  true), // -- 1070
	World_object::Scenery_part(jgl::Vector2Int(15, 33),  true), // 1071
	World_object::Scenery_part(jgl::Vector2Int(16, 33),  true), // 1072
	World_object::Scenery_part(jgl::Vector2Int(17, 33),  true), // 1073
	World_object::Scenery_part(jgl::Vector2Int(18, 33),  true), // 1074
	World_object::Scenery_part(jgl::Vector2Int(19, 33),  true), // 1075
	World_object::Scenery_part(jgl::Vector2Int(20, 33),  true), // 1076
	World_object::Scenery_part(jgl::Vector2Int(21, 33),  true), // 1077
	World_object::Scenery_part(jgl::Vector2Int(22, 33),  true), // 1078
	World_object::Scenery_part(jgl::Vector2Int(23, 33),  true), // 1079
	World_object::Scenery_part(jgl::Vector2Int(24, 33),  true), // -- 1080
	World_object::Scenery_part(jgl::Vector2Int(25, 33),  true), // 1081
	World_object::Scenery_part(jgl::Vector2Int(26, 33),  true), // 1082
	World_object::Scenery_part(jgl::Vector2Int(27, 33),  true), // 1083
	World_object::Scenery_part(jgl::Vector2Int(28, 33),  true), // 1084
	World_object::Scenery_part(jgl::Vector2Int(29, 33),  true), // 1085
	World_object::Scenery_part(jgl::Vector2Int(30, 33),  true), // 1086
	World_object::Scenery_part(jgl::Vector2Int(31, 33),  true), // 1087
	World_object::Scenery_part(jgl::Vector2Int( 0, 34),  true), // 1088
	World_object::Scenery_part(jgl::Vector2Int( 1, 34),  true), // 1089
	World_object::Scenery_part(jgl::Vector2Int( 2, 34),  true), // -- 1090
	World_object::Scenery_part(jgl::Vector2Int( 3, 34),  true), // 1091
	World_object::Scenery_part(jgl::Vector2Int( 4, 34),  true), // 1092
	World_object::Scenery_part(jgl::Vector2Int( 5, 34),  true), // 1093
	World_object::Scenery_part(jgl::Vector2Int( 6, 34),  true), // 1094
	World_object::Scenery_part(jgl::Vector2Int( 7, 34),  true), // 1095
	World_object::Scenery_part(jgl::Vector2Int( 8, 34),  true), // 1096
	World_object::Scenery_part(jgl::Vector2Int( 9, 34),  true), // 1097
	World_object::Scenery_part(jgl::Vector2Int(10, 34),  true), // 1098
	World_object::Scenery_part(jgl::Vector2Int(11, 34),  true), // 1099
	World_object::Scenery_part(jgl::Vector2Int(12, 34),  true), // 	---- 1100
	World_object::Scenery_part(jgl::Vector2Int(13, 34),  true), // 1101
	World_object::Scenery_part(jgl::Vector2Int(14, 34),  true), // 1102
	World_object::Scenery_part(jgl::Vector2Int(15, 34),  true), // 1103
	World_object::Scenery_part(jgl::Vector2Int(16, 34),  true, 4), // 1104
	World_object::Scenery_part(jgl::Vector2Int(17, 34),  true, 0), // 1105
	World_object::Scenery_part(jgl::Vector2Int(18, 34),  true, 0), // 1106
	World_object::Scenery_part(jgl::Vector2Int(19, 34),  true, 0), // 1107
	World_object::Scenery_part(jgl::Vector2Int(20, 34),  true), // 1108
	World_object::Scenery_part(jgl::Vector2Int(21, 34),  true), // 1109
	World_object::Scenery_part(jgl::Vector2Int(22, 34),  true), // -- 1110
	World_object::Scenery_part(jgl::Vector2Int(23, 34),  true), // 1111
	World_object::Scenery_part(jgl::Vector2Int(24, 34),  true), // 1112
	World_object::Scenery_part(jgl::Vector2Int(25, 34),  true), // 1113
	World_object::Scenery_part(jgl::Vector2Int(26, 34),  true), // 1114
	World_object::Scenery_part(jgl::Vector2Int(27, 34),  true), // 1115
	World_object::Scenery_part(jgl::Vector2Int(28, 34),  true), // 1116
	World_object::Scenery_part(jgl::Vector2Int(29, 34),  true), // 1117
	World_object::Scenery_part(jgl::Vector2Int(30, 34),  true), // 1118
	World_object::Scenery_part(jgl::Vector2Int(31, 34),  true), // 1119
	World_object::Scenery_part(jgl::Vector2Int( 0, 35),  true), // -- 1120
	World_object::Scenery_part(jgl::Vector2Int( 1, 35),  true), // 1121
	World_object::Scenery_part(jgl::Vector2Int( 2, 35),  true), // 1122
	World_object::Scenery_part(jgl::Vector2Int( 3, 35),  true), // 1123
	World_object::Scenery_part(jgl::Vector2Int( 4, 35),  true), // 1124
	World_object::Scenery_part(jgl::Vector2Int( 5, 35),  true), // 1125
	World_object::Scenery_part(jgl::Vector2Int( 6, 35),  true), // 1126
	World_object::Scenery_part(jgl::Vector2Int( 7, 35),  true), // 1127
	World_object::Scenery_part(jgl::Vector2Int( 8, 35), false), // 1128
	World_object::Scenery_part(jgl::Vector2Int( 9, 35), false), // 1129
	World_object::Scenery_part(jgl::Vector2Int(10, 35), false), // -- 1130
	World_object::Scenery_part(jgl::Vector2Int(11, 35), false), // 1131
	World_object::Scenery_part(jgl::Vector2Int(12, 35), false), // 1132
	World_object::Scenery_part(jgl::Vector2Int(13, 35), false), // 1133
	World_object::Scenery_part(jgl::Vector2Int(14, 35), false), // 1134
	World_object::Scenery_part(jgl::Vector2Int(15, 35), false), // 1135
	World_object::Scenery_part(jgl::Vector2Int(16, 35), false, 4), // 1136
	World_object::Scenery_part(jgl::Vector2Int(17, 35), false, 0), // 1137
	World_object::Scenery_part(jgl::Vector2Int(18, 35), false, 0), // 1138
	World_object::Scenery_part(jgl::Vector2Int(19, 35), false, 0), // 1139
	World_object::Scenery_part(jgl::Vector2Int(20, 35), false, 4), // -- 1140
	World_object::Scenery_part(jgl::Vector2Int(21, 35), false, 0), // 1141
	World_object::Scenery_part(jgl::Vector2Int(22, 35), false, 0), // 1142
	World_object::Scenery_part(jgl::Vector2Int(23, 35), false, 0), // 1143
	World_object::Scenery_part(jgl::Vector2Int(24, 35),  true), // 1144
	World_object::Scenery_part(jgl::Vector2Int(25, 35),  true), // 1145
	World_object::Scenery_part(jgl::Vector2Int(26, 35),  true), // 1146
	World_object::Scenery_part(jgl::Vector2Int(27, 35),  true), // 1147
	World_object::Scenery_part(jgl::Vector2Int(28, 35),  true), // 1148
	World_object::Scenery_part(jgl::Vector2Int(29, 35),  true), // 1149
	World_object::Scenery_part(jgl::Vector2Int(30, 35),  true), // -- 1150
	World_object::Scenery_part(jgl::Vector2Int(31, 35),  true), // 1151
	World_object::Scenery_part(jgl::Vector2Int( 0, 36),  true), // 1152
	World_object::Scenery_part(jgl::Vector2Int( 1, 36),  true), // 1153
	World_object::Scenery_part(jgl::Vector2Int( 2, 36),  true), // 1154
	World_object::Scenery_part(jgl::Vector2Int( 3, 36),  true), // 1155
	World_object::Scenery_part(jgl::Vector2Int( 4, 36),  true), // 1156
	World_object::Scenery_part(jgl::Vector2Int( 5, 36),  true), // 1157
	World_object::Scenery_part(jgl::Vector2Int( 6, 36),  true), // 1158
	World_object::Scenery_part(jgl::Vector2Int( 7, 36),  true), // 1159
	World_object::Scenery_part(jgl::Vector2Int( 8, 36),  true), // -- 1160
	World_object::Scenery_part(jgl::Vector2Int( 9, 36),  true), // 1161
	World_object::Scenery_part(jgl::Vector2Int(10, 36),  true), // 1162
	World_object::Scenery_part(jgl::Vector2Int(11, 36),  true), // 1163
	World_object::Scenery_part(jgl::Vector2Int(12, 36),  true), // 1164
	World_object::Scenery_part(jgl::Vector2Int(13, 36),  true), // 1165
	World_object::Scenery_part(jgl::Vector2Int(14, 36),  true), // 1166
	World_object::Scenery_part(jgl::Vector2Int(15, 36),  true), // 1167
	World_object::Scenery_part(jgl::Vector2Int(16, 36),  true), // 1168
	World_object::Scenery_part(jgl::Vector2Int(17, 36),  true), // 1169
	World_object::Scenery_part(jgl::Vector2Int(18, 36),  true), // -- 1170
	World_object::Scenery_part(jgl::Vector2Int(19, 36),  true), // 1171
	World_object::Scenery_part(jgl::Vector2Int(20, 36),  true), // 1172
	World_object::Scenery_part(jgl::Vector2Int(21, 36),  true), // 1173
	World_object::Scenery_part(jgl::Vector2Int(22, 36),  true), // 1174
	World_object::Scenery_part(jgl::Vector2Int(23, 36),  true), // 1175
	World_object::Scenery_part(jgl::Vector2Int(24, 36),  true), // 1176
	World_object::Scenery_part(jgl::Vector2Int(25, 36),  true), // 1177
	World_object::Scenery_part(jgl::Vector2Int(26, 36),  true), // 1178
	World_object::Scenery_part(jgl::Vector2Int(27, 36),  true), // 1179
	World_object::Scenery_part(jgl::Vector2Int(28, 36),  true), // -- 1180
	World_object::Scenery_part(jgl::Vector2Int(29, 36),  true), // 1181
	World_object::Scenery_part(jgl::Vector2Int(30, 36),  true), // 1182
	World_object::Scenery_part(jgl::Vector2Int(31, 36),  true), // 1183
	World_object::Scenery_part(jgl::Vector2Int( 0, 37),  true), // 1184
	World_object::Scenery_part(jgl::Vector2Int( 1, 37),  true), // 1185
	World_object::Scenery_part(jgl::Vector2Int( 2, 37),  true), // 1186
	World_object::Scenery_part(jgl::Vector2Int( 3, 37),  true), // 1187
	World_object::Scenery_part(jgl::Vector2Int( 4, 37),  true), // 1188
	World_object::Scenery_part(jgl::Vector2Int( 5, 37),  true), // 1189
	World_object::Scenery_part(jgl::Vector2Int( 6, 37),  true), // -- 1190
	World_object::Scenery_part(jgl::Vector2Int( 7, 37),  true), // 1191
	World_object::Scenery_part(jgl::Vector2Int( 8, 37),  true), // 1192
	World_object::Scenery_part(jgl::Vector2Int( 9, 37),  true), // 1193
	World_object::Scenery_part(jgl::Vector2Int(10, 37),  true), // 1194
	World_object::Scenery_part(jgl::Vector2Int(11, 37),  true), // 1195
	World_object::Scenery_part(jgl::Vector2Int(12, 37),  true), // 1196
	World_object::Scenery_part(jgl::Vector2Int(13, 37),  true), // 1197
	World_object::Scenery_part(jgl::Vector2Int(14, 37),  true), // 1198
	World_object::Scenery_part(jgl::Vector2Int(15, 37),  true), // 1199
	World_object::Scenery_part(jgl::Vector2Int(16, 37),  true, 4), // 	---- 1200
	World_object::Scenery_part(jgl::Vector2Int(17, 37),  true, 0), // 1201
	World_object::Scenery_part(jgl::Vector2Int(18, 37),  true, 0), // 1202
	World_object::Scenery_part(jgl::Vector2Int(19, 37),  true, 0), // 1203
	World_object::Scenery_part(jgl::Vector2Int(20, 37),  true, 4), // 1204
	World_object::Scenery_part(jgl::Vector2Int(21, 37),  true, 0), // 1205
	World_object::Scenery_part(jgl::Vector2Int(22, 37),  true, 0), // 1206
	World_object::Scenery_part(jgl::Vector2Int(23, 37),  true, 0), // 1207
	World_object::Scenery_part(jgl::Vector2Int(24, 37),  true), // 1208
	World_object::Scenery_part(jgl::Vector2Int(25, 37),  true), // 1209
	World_object::Scenery_part(jgl::Vector2Int(26, 37),  true), // -- 1210
	World_object::Scenery_part(jgl::Vector2Int(27, 37),  true), // 1211
	World_object::Scenery_part(jgl::Vector2Int(28, 37),  true), // 1212
	World_object::Scenery_part(jgl::Vector2Int(29, 37),  true), // 1213
	World_object::Scenery_part(jgl::Vector2Int(30, 37),  true), // 1214
	World_object::Scenery_part(jgl::Vector2Int(31, 37),  true), // 1215
	World_object::Scenery_part(jgl::Vector2Int( 0, 38),  true), // 1216
	World_object::Scenery_part(jgl::Vector2Int( 1, 38),  true), // 1217
	World_object::Scenery_part(jgl::Vector2Int( 2, 38),  true), // 1218
	World_object::Scenery_part(jgl::Vector2Int( 3, 38),  true), // 1219
	World_object::Scenery_part(jgl::Vector2Int( 4, 38),  true), // -- 1220
	World_object::Scenery_part(jgl::Vector2Int( 5, 38),  true), // 1221
	World_object::Scenery_part(jgl::Vector2Int( 6, 38),  true), // 1222
	World_object::Scenery_part(jgl::Vector2Int( 7, 38),  true), // 1223
	World_object::Scenery_part(jgl::Vector2Int( 8, 38),  true), // 1224
	World_object::Scenery_part(jgl::Vector2Int( 9, 38),  true), // 1225
	World_object::Scenery_part(jgl::Vector2Int(10, 38),  true), // 1226
	World_object::Scenery_part(jgl::Vector2Int(11, 38),  true), // 1227
	World_object::Scenery_part(jgl::Vector2Int(12, 38),  true), // 1228
	World_object::Scenery_part(jgl::Vector2Int(13, 38),  true), // 1229
	World_object::Scenery_part(jgl::Vector2Int(14, 38), false), // -- 1230
	World_object::Scenery_part(jgl::Vector2Int(15, 38), false), // 1231
	World_object::Scenery_part(jgl::Vector2Int(16, 38), false, 4), // 1232
	World_object::Scenery_part(jgl::Vector2Int(17, 38), false, 0), // 1233
	World_object::Scenery_part(jgl::Vector2Int(18, 38), false, 0), // 1234
	World_object::Scenery_part(jgl::Vector2Int(19, 38), false, 0), // 1235
	World_object::Scenery_part(jgl::Vector2Int(20, 38), false, 4), // 1236
	World_object::Scenery_part(jgl::Vector2Int(21, 38), false, 0), // 1237
	World_object::Scenery_part(jgl::Vector2Int(22, 38), false, 0), // 1238
	World_object::Scenery_part(jgl::Vector2Int(23, 38), false, 0), // 1239
	World_object::Scenery_part(jgl::Vector2Int(24, 38), false), // -- 1240
	World_object::Scenery_part(jgl::Vector2Int(25, 38), false), // 1241
	World_object::Scenery_part(jgl::Vector2Int(26, 38),  true), // 1242
	World_object::Scenery_part(jgl::Vector2Int(27, 38),  true), // 1243
	World_object::Scenery_part(jgl::Vector2Int(28, 38),  true), // 1244
	World_object::Scenery_part(jgl::Vector2Int(29, 38),  true), // 1245
	World_object::Scenery_part(jgl::Vector2Int(30, 38),  true), // 1246
	World_object::Scenery_part(jgl::Vector2Int(31, 38),  true), // 1247
	World_object::Scenery_part(jgl::Vector2Int( 0, 39), false), // 1248
	World_object::Scenery_part(jgl::Vector2Int( 1, 39), false), // 1249
	World_object::Scenery_part(jgl::Vector2Int( 2, 39), false), // -- 1250
	World_object::Scenery_part(jgl::Vector2Int( 3, 39), false), // 1251
	World_object::Scenery_part(jgl::Vector2Int( 4, 39), false), // 1252
	World_object::Scenery_part(jgl::Vector2Int( 5, 39), false), // 1253
	World_object::Scenery_part(jgl::Vector2Int( 6, 39), false), // 1254
	World_object::Scenery_part(jgl::Vector2Int( 7, 39), false), // 1255
	World_object::Scenery_part(jgl::Vector2Int( 8, 39),  true), // 1256
	World_object::Scenery_part(jgl::Vector2Int( 9, 39),  true), // 1257
	World_object::Scenery_part(jgl::Vector2Int(10, 39),  true), // 1258
	World_object::Scenery_part(jgl::Vector2Int(11, 39),  true), // 1259
	World_object::Scenery_part(jgl::Vector2Int(12, 39),  true), // -- 1260
	World_object::Scenery_part(jgl::Vector2Int(13, 39),  true), // 1261
	World_object::Scenery_part(jgl::Vector2Int(14, 39),  true), // 1262
	World_object::Scenery_part(jgl::Vector2Int(15, 39),  true), // 1263
	World_object::Scenery_part(jgl::Vector2Int(16, 39),  true), // 1264
	World_object::Scenery_part(jgl::Vector2Int(17, 39),  true), // 1265
	World_object::Scenery_part(jgl::Vector2Int(18, 39),  true), // 1266
	World_object::Scenery_part(jgl::Vector2Int(19, 39),  true), // 1267
	World_object::Scenery_part(jgl::Vector2Int(20, 39),  true), // 1268
	World_object::Scenery_part(jgl::Vector2Int(21, 39),  true), // 1269
	World_object::Scenery_part(jgl::Vector2Int(22, 39),  true), // -- 1270
	World_object::Scenery_part(jgl::Vector2Int(23, 39),  true), // 1271
	World_object::Scenery_part(jgl::Vector2Int(24, 39),  true), // 1272
	World_object::Scenery_part(jgl::Vector2Int(25, 39),  true), // 1273
	World_object::Scenery_part(jgl::Vector2Int(26, 39),  true), // 1274
	World_object::Scenery_part(jgl::Vector2Int(27, 39),  true), // 1275
	World_object::Scenery_part(jgl::Vector2Int(28, 39),  true), // 1276
	World_object::Scenery_part(jgl::Vector2Int(29, 39),  true), // 1277
	World_object::Scenery_part(jgl::Vector2Int(30, 39),  true), // 1278
	World_object::Scenery_part(jgl::Vector2Int(31, 39),  true), // 1279
	World_object::Scenery_part(jgl::Vector2Int( 0, 40),  true), // -- 1280
	World_object::Scenery_part(jgl::Vector2Int( 1, 40),  true), // 1281
	World_object::Scenery_part(jgl::Vector2Int( 2, 40),  true), // 1282
	World_object::Scenery_part(jgl::Vector2Int( 3, 40),  true), // 1283
	World_object::Scenery_part(jgl::Vector2Int( 4, 40),  true), // 1284
	World_object::Scenery_part(jgl::Vector2Int( 5, 40),  true), // 1285
	World_object::Scenery_part(jgl::Vector2Int( 6, 40),  true), // 1286
	World_object::Scenery_part(jgl::Vector2Int( 7, 40),  true), // 1287
	World_object::Scenery_part(jgl::Vector2Int( 8, 40),  true), // 1288
	World_object::Scenery_part(jgl::Vector2Int( 9, 40),  true), // 1289
	World_object::Scenery_part(jgl::Vector2Int(10, 40),  true), // -- 1290
	World_object::Scenery_part(jgl::Vector2Int(11, 40),  true), // 1291
	World_object::Scenery_part(jgl::Vector2Int(12, 40),  true), // 1292
	World_object::Scenery_part(jgl::Vector2Int(13, 40),  true), // 1293
	World_object::Scenery_part(jgl::Vector2Int(14, 40),  true), // 1294
	World_object::Scenery_part(jgl::Vector2Int(15, 40),  true), // 1295
	World_object::Scenery_part(jgl::Vector2Int(16, 40),  true), // 1296
	World_object::Scenery_part(jgl::Vector2Int(17, 40),  true), // 1297
	World_object::Scenery_part(jgl::Vector2Int(18, 40),  true), // 1298
	World_object::Scenery_part(jgl::Vector2Int(19, 40),  true), // 1299
	World_object::Scenery_part(jgl::Vector2Int(20, 40),  true), // 	---- 1300
	World_object::Scenery_part(jgl::Vector2Int(21, 40),  true), // 1301
	World_object::Scenery_part(jgl::Vector2Int(22, 40),  true), // 1302
	World_object::Scenery_part(jgl::Vector2Int(23, 40),  true), // 1303
	World_object::Scenery_part(jgl::Vector2Int(24, 40),  true), // 1304
	World_object::Scenery_part(jgl::Vector2Int(25, 40),  true), // 1305
	World_object::Scenery_part(jgl::Vector2Int(26, 40),  true), // 1306
	World_object::Scenery_part(jgl::Vector2Int(27, 40),  true), // 1307
	World_object::Scenery_part(jgl::Vector2Int(28, 40),  true), // 1308
	World_object::Scenery_part(jgl::Vector2Int(29, 40),  true), // 1309
	World_object::Scenery_part(jgl::Vector2Int(30, 40),  true), // -- 1310
	World_object::Scenery_part(jgl::Vector2Int(31, 40),  true), // 1311
	World_object::Scenery_part(jgl::Vector2Int( 0, 41),  true), // 1312
	World_object::Scenery_part(jgl::Vector2Int( 1, 41),  true), // 1313
	World_object::Scenery_part(jgl::Vector2Int( 2, 41),  true), // 1314
	World_object::Scenery_part(jgl::Vector2Int( 3, 41),  true), // 1315
	World_object::Scenery_part(jgl::Vector2Int( 4, 41),  true), // 1316
	World_object::Scenery_part(jgl::Vector2Int( 5, 41),  true), // 1317
	World_object::Scenery_part(jgl::Vector2Int( 6, 41),  true), // 1318
	World_object::Scenery_part(jgl::Vector2Int( 7, 41),  true), // 1319
	World_object::Scenery_part(jgl::Vector2Int( 8, 41),  true), // -- 1320
	World_object::Scenery_part(jgl::Vector2Int( 9, 41),  true), // 1321
	World_object::Scenery_part(jgl::Vector2Int(10, 41),  true), // 1322
	World_object::Scenery_part(jgl::Vector2Int(11, 41),  true), // 1323
	World_object::Scenery_part(jgl::Vector2Int(12, 41),  true), // 1324
	World_object::Scenery_part(jgl::Vector2Int(13, 41),  true), // 1325
	World_object::Scenery_part(jgl::Vector2Int(14, 41),  true), // 1326
	World_object::Scenery_part(jgl::Vector2Int(15, 41),  true), // 1327
	World_object::Scenery_part(jgl::Vector2Int(16, 41),  true), // 1328
	World_object::Scenery_part(jgl::Vector2Int(17, 41),  true), // 1329
	World_object::Scenery_part(jgl::Vector2Int(18, 41),  true), // -- 1330
	World_object::Scenery_part(jgl::Vector2Int(19, 41),  true), // 1331
	World_object::Scenery_part(jgl::Vector2Int(20, 41),  true), // 1332
	World_object::Scenery_part(jgl::Vector2Int(21, 41),  true), // 1333
	World_object::Scenery_part(jgl::Vector2Int(22, 41),  true), // 1334
	World_object::Scenery_part(jgl::Vector2Int(23, 41),  true), // 1335
	World_object::Scenery_part(jgl::Vector2Int(24, 41),  true), // 1336
	World_object::Scenery_part(jgl::Vector2Int(25, 41),  true), // 1337
	World_object::Scenery_part(jgl::Vector2Int(26, 41),  true), // 1338
	World_object::Scenery_part(jgl::Vector2Int(27, 41),  true), // 1339
	World_object::Scenery_part(jgl::Vector2Int(28, 41),  true), // -- 1340
	World_object::Scenery_part(jgl::Vector2Int(29, 41),  true), // 1341
	World_object::Scenery_part(jgl::Vector2Int(30, 41),  true), // 1342
	World_object::Scenery_part(jgl::Vector2Int(31, 41),  true), // 1343

};