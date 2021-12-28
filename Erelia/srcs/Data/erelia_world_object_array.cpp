#include "erelia.h"

namespace World_object
{
	jgl::Array<World_object::Node*> g_node_array =
	{	
		new World_object::Node(                  "Grass", jgl::Vector2Int( 0,  0),  true,  true,  1u), //   0
		new World_object::Node(                 "Forest", jgl::Vector2Int( 4,  0),  true,  true,  1u), //   1
		new World_object::Node(                   "Sand", jgl::Vector2Int( 8,  0),  true,  true,  1u), //   2
		new World_object::Node(                   "Dirt", jgl::Vector2Int(12,  0),  true,  true,  1u), //   3
		new World_object::Node(                   "Road", jgl::Vector2Int(16,  0),  true,  true,  1u), //   4
		new World_object::Node(                  "Stone", jgl::Vector2Int(20,  0),  true,  true,  1u), //   5
		new World_object::Node(           "Stone - dark", jgl::Vector2Int(24,  0),  true,  true,  1u), //   6
		new World_object::Node(       "Enchanted forest", jgl::Vector2Int(28,  0),  true,  true,  1u), //   7
		new World_object::Node(            "Brown stone", jgl::Vector2Int( 0,  6),  true,  true,  1u), //   8
		new World_object::Node(             "Wood plank", jgl::Vector2Int( 4,  6),  true,  true,  1u), //   9
		new World_object::Node(            "Tiled stone", jgl::Vector2Int( 8,  6),  true,  true,  1u), //   10
		new World_object::Node(          "Wall interior", jgl::Vector2Int(12,  6),  true,  true,  1u), //   11
		new World_object::Node(                   "Lava", jgl::Vector2Int(16,  6),  true,  true,  4u), //   12
		new World_object::Node(                  "Water", jgl::Vector2Int( 0, 12),  true,  true,  4u), //   13
		new World_object::Node(             "Deep water", jgl::Vector2Int(16, 12),  true,  true,  4u), //   14
		new World_object::Node(       "Dungeon - Purple", jgl::Vector2Int( 0, 18),  true,  true,  1u), //   15
		new World_object::Node(          "Dungeon - Red", jgl::Vector2Int( 4, 18),  true,  true,  1u), //   16
		new World_object::Node(         "Dungeon - Blue", jgl::Vector2Int( 8, 18),  true,  true,  1u), //   17
		new World_object::Node(        "Dungeon - Green", jgl::Vector2Int(12, 18),  true,  true,  1u), //   18
		new World_object::Node(        "Dungeon - White", jgl::Vector2Int(16, 18),  true,  true,  1u), //   19
		new World_object::Node(        "Dungeon - Black", jgl::Vector2Int(20, 18),  true,  true,  1u), //   20
		new World_object::Node(       "Dungeon - Orange", jgl::Vector2Int(24, 18),  true,  true,  1u), //   21
		new World_object::Node(         "Dungeon - Pink", jgl::Vector2Int(28, 18),  true,  true,  1u), //   22
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 24), false, false,  1u), //   23
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 24), false, false,  1u), //   24
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 2, 24), false, false,  1u), //   25
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 24), false, false,  1u), //   26
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 24), false, false,  1u), //   27
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 24), false, false,  1u), //   28
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 6, 24), false, false,  1u), //   29
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 24), false, false,  1u), //   30
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 24), false, false,  1u), //   31
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 24), false, false,  1u), //   32
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(10, 24), false, false,  1u), //   33
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 24), false, false,  1u), //   34
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 24), false, false,  1u), //   35
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 24), false, false,  1u), //   36
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(14, 24), false, false,  1u), //   37
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 24), false, false,  1u), //   38
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 24), false, false,  1u), //   39
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 24), false, false,  1u), //   40
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(18, 24), false, false,  1u), //   41
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 24), false, false,  1u), //   42
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 24), false, false,  1u), //   43
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 24), false, false,  1u), //   44
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(22, 24), false, false,  1u), //   45
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 24), false, false,  1u), //   46
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 24), false, false,  1u), //   47
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 24), false, false,  1u), //   48
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(26, 24), false, false,  1u), //   49
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 24), false, false,  1u), //   50
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 24), false, false,  1u), //   51
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 24), false, false,  1u), //   52
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(30, 24), false, false,  1u), //   53
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 24), false, false,  1u), //   54
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 0, 25), false, false,  1u), //   55
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 25), false, false,  1u), //   56
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 25), false, false,  1u), //   57
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 25), false, false,  1u), //   58
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 4, 25), false, false,  1u), //   59
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 25), false, false,  1u), //   60
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 25), false, false,  1u), //   61
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 25), false, false,  1u), //   62
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 8, 25), false, false,  1u), //   63
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 25), false, false,  1u), //   64
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 25), false, false,  1u), //   65
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 25), false, false,  1u), //   66
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(12, 25), false, false,  1u), //   67
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 25), false, false,  1u), //   68
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 25), false, false,  1u), //   69
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 25), false, false,  1u), //   70
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(16, 25), false, false,  1u), //   71
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 25), false, false,  1u), //   72
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 25), false, false,  1u), //   73
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 25), false, false,  1u), //   74
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(20, 25), false, false,  1u), //   75
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 25), false, false,  1u), //   76
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 25), false, false,  1u), //   77
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 25), false, false,  1u), //   78
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(24, 25), false, false,  1u), //   79
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 25), false, false,  1u), //   80
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 25), false, false,  1u), //   81
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 25), false, false,  1u), //   82
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(28, 25), false, false,  1u), //   83
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 25), false, false,  1u), //   84
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 25), false, false,  1u), //   85
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 25), false, false,  1u), //   86
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 26), false, false,  1u), //   87
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 26), false, false,  1u), //   88
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 26), false, false,  1u), //   89
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 3, 26), false, false,  1u), //   90
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 26), false, false,  1u), //   91
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 26), false, false,  1u), //   92
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 26), false, false,  1u), //   93
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 7, 26), false, false,  1u), //   94
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 26), false, false,  1u), //   95
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 26), false, false,  1u), //   96
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 26), false, false,  1u), //   97
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(11, 26), false, false,  1u), //   98
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 26), false, false,  1u), //   99
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 26), false, false,  1u), //   100
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 26), false, false,  1u), //   101
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(15, 26), false, false,  1u), //   102
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 26), false, false,  1u), //   103
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 26), false, false,  1u), //   104
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 26), false, false,  1u), //   105
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(19, 26), false, false,  1u), //   106
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 26), false, false,  1u), //   107
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 26), false, false,  1u), //   108
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 26), false, false,  1u), //   109
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(23, 26), false, false,  1u), //   110
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 26), false, false,  1u), //   111
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 26), false, false,  1u), //   112
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 26), false, false,  1u), //   113
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(27, 26), false, false,  1u), //   114
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 26), false, false,  1u), //   115
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 26), false, false,  1u), //   116
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 26), false, false,  1u), //   117
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(31, 26), false, false,  1u), //   118
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 27), false, false,  1u), //   119
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 1, 27), false, false,  1u), //   120
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 27), false, false,  1u), //   121
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 27), false, false,  1u), //   122
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 27), false, false,  1u), //   123
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 5, 27), false, false,  1u), //   124
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 27), false, false,  1u), //   125
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 27), false, false,  1u), //   126
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 27), false, false,  1u), //   127
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 9, 27), false, false,  1u), //   128
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 27), false, false,  1u), //   129
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 27), false, false,  1u), //   130
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 27), false, false,  1u), //   131
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(13, 27), false, false,  1u), //   132
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 27), false, false,  1u), //   133
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 27), false, false,  1u), //   134
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 27), false, false,  1u), //   135
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(17, 27), false, false,  1u), //   136
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 27), false, false,  1u), //   137
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 27), false, false,  1u), //   138
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 27), false, false,  1u), //   139
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(21, 27), false, false,  1u), //   140
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 27), false, false,  1u), //   141
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 27), false, false,  1u), //   142
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 27), false, false,  1u), //   143
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(25, 27), false, false,  1u), //   144
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 27), false, false,  1u), //   145
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 27), false, false,  1u), //   146
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 27), false, false,  1u), //   147
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(29, 27), false, false,  1u), //   148
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 27), false, false,  1u), //   149
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 27), false, false,  1u), //   150
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 28), false, false,  1u), //   151
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 28), false, false,  1u), //   152
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 2, 28), false, false,  1u), //   153
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 28), false, false,  1u), //   154
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 28), false, false,  1u), //   155
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 28), false, false,  1u), //   156
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 6, 28), false, false,  1u), //   157
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 28), false, false,  1u), //   158
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 28), false, false,  1u), //   159
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 28), false, false,  1u), //   160
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(10, 28), false, false,  1u), //   161
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 28), false, false,  1u), //   162
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 28), false, false,  1u), //   163
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 28), false, false,  1u), //   164
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(14, 28), false, false,  1u), //   165
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 28), false, false,  1u), //   166
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 28), false, false,  1u), //   167
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 28), false, false,  1u), //   168
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(18, 28), false, false,  1u), //   169
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 28), false, false,  1u), //   170
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 28), false, false,  1u), //   171
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 28), false, false,  1u), //   172
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(22, 28), false, false,  1u), //   173
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 28), false, false,  1u), //   174
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 28), false, false,  1u), //   175
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 28), false, false,  1u), //   176
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(26, 28), false, false,  1u), //   177
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 28), false, false,  1u), //   178
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 28), false, false,  1u), //   179
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 28), false, false,  1u), //   180
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(30, 28), false, false,  1u), //   181
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 28), false, false,  1u), //   182
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 0, 29), false, false,  1u), //   183
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 29), false, false,  1u), //   184
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 29), false, false,  1u), //   185
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 29), false, false,  1u), //   186
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 4, 29), false, false,  1u), //   187
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 29), false, false,  1u), //   188
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 29), false, false,  1u), //   189
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 29), false, false,  1u), //   190
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 8, 29), false, false,  1u), //   191
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 29), false, false,  1u), //   192
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 29), false, false,  1u), //   193
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 29), false, false,  1u), //   194
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(12, 29), false, false,  1u), //   195
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 29), false, false,  1u), //   196
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 29), false, false,  1u), //   197
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 29), false, false,  1u), //   198
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(16, 29), false, false,  1u), //   199
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 29), false, false,  1u), //   200
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 29), false, false,  1u), //   201
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 29), false, false,  1u), //   202
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(20, 29), false, false,  1u), //   203
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 29), false, false,  1u), //   204
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 29), false, false,  1u), //   205
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 29), false, false,  1u), //   206
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(24, 29), false, false,  1u), //   207
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 29), false, false,  1u), //   208
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 29), false, false,  1u), //   209
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 29), false, false,  1u), //   210
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(28, 29), false, false,  1u), //   211
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 29), false, false,  1u), //   212
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 29), false, false,  1u), //   213
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 29), false, false,  1u), //   214
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 30), false, false,  1u), //   215
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 30), false, false,  1u), //   216
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 30), false, false,  1u), //   217
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 3, 30), false, false,  1u), //   218
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 30), false, false,  1u), //   219
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 30), false, false,  1u), //   220
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 30), false, false,  1u), //   221
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 7, 30), false, false,  1u), //   222
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 30), false, false,  1u), //   223
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 30), false, false,  1u), //   224
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 30), false, false,  1u), //   225
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(11, 30), false, false,  1u), //   226
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 30), false, false,  1u), //   227
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 30), false, false,  1u), //   228
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 30), false, false,  1u), //   229
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(15, 30), false, false,  1u), //   230
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 30), false, false,  1u), //   231
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 30), false, false,  1u), //   232
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 30), false, false,  1u), //   233
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(19, 30), false, false,  1u), //   234
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 30), false, false,  1u), //   235
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 30), false, false,  1u), //   236
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 30), false, false,  1u), //   237
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(23, 30), false, false,  1u), //   238
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 30), false, false,  1u), //   239
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 30), false, false,  1u), //   240
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 30), false, false,  1u), //   241
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(27, 30), false, false,  1u), //   242
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 30), false, false,  1u), //   243
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 30), false, false,  1u), //   244
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 30), false, false,  1u), //   245
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(31, 30), false, false,  1u), //   246
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 31), false, false,  1u), //   247
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 1, 31), false, false,  1u), //   248
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 31), false, false,  1u), //   249
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 31), false, false,  1u), //   250
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 31), false, false,  1u), //   251
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 5, 31), false, false,  1u), //   252
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 31), false, false,  1u), //   253
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 31), false, false,  1u), //   254
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 31), false, false,  1u), //   255
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 9, 31), false, false,  1u), //   256
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 31), false, false,  1u), //   257
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 31), false, false,  1u), //   258
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 31), false, false,  1u), //   259
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(13, 31), false, false,  1u), //   260
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 31), false, false,  1u), //   261
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 31), false, false,  1u), //   262
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 31), false, false,  1u), //   263
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(17, 31), false, false,  1u), //   264
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 31), false, false,  1u), //   265
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 31), false, false,  1u), //   266
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 31), false, false,  1u), //   267
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(21, 31), false, false,  1u), //   268
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 31), false, false,  1u), //   269
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 31), false, false,  1u), //   270
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 31), false, false,  1u), //   271
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(25, 31), false, false,  1u), //   272
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 31), false, false,  1u), //   273
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 31), false, false,  1u), //   274
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 31), false, false,  1u), //   275
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(29, 31), false, false,  1u), //   276
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 31), false, false,  1u), //   277
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 31), false, false,  1u), //   278
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 32), false, false,  1u), //   279
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 32), false, false,  1u), //   280
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 2, 32), false, false,  1u), //   281
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 32), false, false,  1u), //   282
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 32), false, false,  1u), //   283
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 32), false, false,  1u), //   284
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 6, 32), false, false,  1u), //   285
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 32), false, false,  1u), //   286
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 32), false, false,  1u), //   287
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 32), false, false,  1u), //   288
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(10, 32), false, false,  1u), //   289
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 32), false, false,  1u), //   290
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 32), false, false,  1u), //   291
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 32), false, false,  1u), //   292
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(14, 32), false, false,  1u), //   293
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 32), false, false,  1u), //   294
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 32), false, false,  1u), //   295
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 32), false, false,  1u), //   296
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(18, 32), false, false,  1u), //   297
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 32), false, false,  1u), //   298
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 32), false, false,  1u), //   299
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 32), false, false,  1u), //   300
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(22, 32), false, false,  1u), //   301
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 32), false, false,  1u), //   302
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 32), false, false,  1u), //   303
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 32), false, false,  1u), //   304
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(26, 32), false, false,  1u), //   305
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 32), false, false,  1u), //   306
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 32), false, false,  1u), //   307
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 32), false, false,  1u), //   308
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(30, 32), false, false,  1u), //   309
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 32), false, false,  1u), //   310
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 0, 33), false, false,  1u), //   311
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 33), false, false,  1u), //   312
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 33), false, false,  1u), //   313
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 33), false, false,  1u), //   314
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 4, 33), false, false,  1u), //   315
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 33), false, false,  1u), //   316
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 33), false, false,  1u), //   317
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 33), false, false,  1u), //   318
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 8, 33), false, false,  1u), //   319
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 33), false, false,  1u), //   320
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 33), false, false,  1u), //   321
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 33), false, false,  1u), //   322
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(12, 33), false, false,  1u), //   323
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 33), false, false,  1u), //   324
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 33), false, false,  1u), //   325
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 33), false, false,  1u), //   326
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(16, 33), false, false,  1u), //   327
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 33), false, false,  1u), //   328
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 33), false, false,  1u), //   329
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 33), false, false,  1u), //   330
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(20, 33), false, false,  1u), //   331
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 33), false, false,  1u), //   332
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 33), false, false,  1u), //   333
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 33), false, false,  1u), //   334
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(24, 33), false, false,  1u), //   335
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 33), false, false,  1u), //   336
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 33), false, false,  1u), //   337
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 33), false, false,  1u), //   338
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(28, 33), false, false,  1u), //   339
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 33), false, false,  1u), //   340
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 33), false, false,  1u), //   341
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 33), false, false,  1u), //   342
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 34), false, false,  1u), //   343
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 1, 34), false, false,  1u), //   344
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 34), false, false,  1u), //   345
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 3, 34), false, false,  1u), //   346
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 34), false, false,  1u), //   347
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 5, 34), false, false,  1u), //   348
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 34), false, false,  1u), //   349
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 7, 34), false, false,  1u), //   350
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 34), false, false,  1u), //   351
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 9, 34), false, false,  1u), //   352
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 34), false, false,  1u), //   353
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(11, 34), false, false,  1u), //   354
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 34), false, false,  1u), //   355
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(13, 34), false, false,  1u), //   356
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 34), false, false,  1u), //   357
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(15, 34), false, false,  1u), //   358
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 34), false, false,  1u), //   359
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(17, 34), false, false,  1u), //   360
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 34), false, false,  1u), //   361
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(19, 34), false, false,  1u), //   362
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 34), false, false,  1u), //   363
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(21, 34), false, false,  1u), //   364
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 34), false, false,  1u), //   365
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(23, 34), false, false,  1u), //   366
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 34), false, false,  1u), //   367
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(25, 34), false, false,  1u), //   368
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 34), false, false,  1u), //   369
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(27, 34), false, false,  1u), //   370
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 34), false, false,  1u), //   371
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(29, 34), false, false,  1u), //   372
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 34), false, false,  1u), //   373
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(31, 34), false, false,  1u), //   374
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 0, 35), false, false,  1u), //   375
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 1, 35), false, false,  1u), //   376
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 2, 35), false, false,  1u), //   377
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 3, 35), false, false,  1u), //   378
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 4, 35), false, false,  1u), //   379
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 5, 35), false, false,  1u), //   380
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 6, 35), false, false,  1u), //   381
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 7, 35), false, false,  1u), //   382
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int( 8, 35), false, false,  1u), //   383
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int( 9, 35), false, false,  1u), //   384
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(10, 35), false, false,  1u), //   385
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(11, 35), false, false,  1u), //   386
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(12, 35), false, false,  1u), //   387
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(13, 35), false, false,  1u), //   388
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(14, 35), false, false,  1u), //   389
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(15, 35), false, false,  1u), //   390
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(16, 35), false, false,  1u), //   391
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(17, 35), false, false,  1u), //   392
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(18, 35), false, false,  1u), //   393
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(19, 35), false, false,  1u), //   394
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(20, 35), false, false,  1u), //   395
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(21, 35), false, false,  1u), //   396
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(22, 35), false, false,  1u), //   397
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(23, 35), false, false,  1u), //   398
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(24, 35), false, false,  1u), //   399
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(25, 35), false, false,  1u), //   400
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(26, 35), false, false,  1u), //   401
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(27, 35), false, false,  1u), //   402
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(28, 35), false, false,  1u), //   403
		new World_object::Node(      "Stair - undefined", jgl::Vector2Int(29, 35), false, false,  1u), //   404
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(30, 35), false, false,  1u), //   405
		new World_object::Node(       "Wall - undefined", jgl::Vector2Int(31, 35), false, false,  1u), //   406
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 36),  true,  true,  1u), //   407
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 36),  true,  true,  1u), //   408
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 36),  true,  true,  1u), //   409
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 36),  true,  true,  1u), //   410
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 36),  true,  true,  1u), //   411
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 36),  true,  true,  1u), //   412
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 36),  true,  true,  1u), //   413
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 36),  true,  true,  1u), //   414
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 42), false, false,  1u), //   415
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 42), false, false,  1u), //   416
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 42), false, false,  1u), //   417
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 42), false, false,  1u), //   418
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 42), false, false,  1u), //   419
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 42), false, false,  1u), //   420
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 42), false, false,  1u), //   421
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 42), false, false,  1u), //   422
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 42), false, false,  1u), //   423
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 42), false, false,  1u), //   424
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 42), false, false,  1u), //   425
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 42), false, false,  1u), //   426
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 42), false, false,  1u), //   427
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 42), false, false,  1u), //   428
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 42), false, false,  1u), //   429
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 42), false, false,  1u), //   430
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 42), false, false,  1u), //   431
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 42), false, false,  1u), //   432
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 42), false, false,  1u), //   433
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 42), false, false,  1u), //   434
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 42), false, false,  1u), //   435
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 42), false, false,  1u), //   436
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 42), false, false,  1u), //   437
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 42), false, false,  1u), //   438
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 42), false, false,  1u), //   439
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 42), false, false,  1u), //   440
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 42), false, false,  1u), //   441
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 42), false, false,  1u), //   442
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 42), false, false,  1u), //   443
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 42), false, false,  1u), //   444
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 42), false, false,  1u), //   445
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 42), false, false,  1u), //   446
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 43), false, false,  1u), //   447
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 43), false, false,  1u), //   448
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 43), false, false,  1u), //   449
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 43), false, false,  1u), //   450
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 43), false, false,  1u), //   451
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 43), false, false,  1u), //   452
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 43), false, false,  1u), //   453
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 43), false, false,  1u), //   454
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 43), false, false,  1u), //   455
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 43), false, false,  1u), //   456
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 43), false, false,  1u), //   457
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 43), false, false,  1u), //   458
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 43), false, false,  1u), //   459
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 43), false, false,  1u), //   460
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 43), false, false,  1u), //   461
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 43), false, false,  1u), //   462
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 43), false, false,  1u), //   463
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 43), false, false,  1u), //   464
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 43), false, false,  1u), //   465
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 43), false, false,  1u), //   466
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 43), false, false,  1u), //   467
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 43), false, false,  1u), //   468
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 43), false, false,  1u), //   469
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 43), false, false,  1u), //   470
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 43), false, false,  1u), //   471
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 43), false, false,  1u), //   472
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 43), false, false,  1u), //   473
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 43), false, false,  1u), //   474
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 43), false, false,  1u), //   475
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 43), false, false,  1u), //   476
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 43), false, false,  1u), //   477
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 43), false, false,  1u), //   478
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 44), false, false,  1u), //   479
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 44), false, false,  1u), //   480
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 44), false, false,  1u), //   481
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 44), false, false,  1u), //   482
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 44), false, false,  1u), //   483
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 44), false, false,  1u), //   484
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 44), false, false,  1u), //   485
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 44), false, false,  1u), //   486
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 44), false, false,  1u), //   487
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 44), false, false,  1u), //   488
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 44), false, false,  1u), //   489
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 44), false, false,  1u), //   490
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 44), false, false,  1u), //   491
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 44), false, false,  1u), //   492
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 44), false, false,  1u), //   493
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 44), false, false,  1u), //   494
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 44), false, false,  1u), //   495
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 44), false, false,  1u), //   496
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 44), false, false,  1u), //   497
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 44), false, false,  1u), //   498
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 44), false, false,  1u), //   499
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 44), false, false,  1u), //   500
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 44), false, false,  1u), //   501
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 44), false, false,  1u), //   502
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 44), false, false,  1u), //   503
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 44), false, false,  1u), //   504
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 44), false, false,  1u), //   505
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 44), false, false,  1u), //   506
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 44), false, false,  1u), //   507
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 44), false, false,  1u), //   508
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 44), false, false,  1u), //   509
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 44), false, false,  1u), //   510
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 45), false, false,  1u), //   511
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 45), false, false,  1u), //   512
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 45), false, false,  1u), //   513
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 45), false, false,  1u), //   514
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 45), false, false,  1u), //   515
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 45), false, false,  1u), //   516
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 45), false, false,  1u), //   517
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 45), false, false,  1u), //   518
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 45), false, false,  1u), //   519
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 45), false, false,  1u), //   520
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 45), false, false,  1u), //   521
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 45), false, false,  1u), //   522
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 45), false, false,  1u), //   523
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 45), false, false,  1u), //   524
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 45), false, false,  1u), //   525
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 45), false, false,  1u), //   526
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 45), false, false,  1u), //   527
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 45), false, false,  1u), //   528
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 45), false, false,  1u), //   529
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 45), false, false,  1u), //   530
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 45), false, false,  1u), //   531
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 45), false, false,  1u), //   532
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 45), false, false,  1u), //   533
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 45), false, false,  1u), //   534
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 45), false, false,  1u), //   535
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 45), false, false,  1u), //   536
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 45), false, false,  1u), //   537
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 45), false, false,  1u), //   538
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 45), false, false,  1u), //   539
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 45), false, false,  1u), //   540
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 45), false, false,  1u), //   541
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 45), false, false,  1u), //   542
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 46), false, false,  1u), //   543
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 46), false, false,  1u), //   544
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 46), false, false,  1u), //   545
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 46), false, false,  1u), //   546
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 46), false, false,  1u), //   547
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 46), false, false,  1u), //   548
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 46), false, false,  1u), //   549
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 46), false, false,  1u), //   550
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 46), false, false,  1u), //   551
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 46), false, false,  1u), //   552
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 46), false, false,  1u), //   553
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 46), false, false,  1u), //   554
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 46), false, false,  1u), //   555
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 46), false, false,  1u), //   556
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 46), false, false,  1u), //   557
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 46), false, false,  1u), //   558
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 46), false, false,  1u), //   559
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 46), false, false,  1u), //   560
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 46), false, false,  1u), //   561
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 46), false, false,  1u), //   562
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 46), false, false,  1u), //   563
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 46), false, false,  1u), //   564
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 46), false, false,  1u), //   565
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 46), false, false,  1u), //   566
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 46), false, false,  1u), //   567
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 46), false, false,  1u), //   568
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 46), false, false,  1u), //   569
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 46), false, false,  1u), //   570
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 46), false, false,  1u), //   571
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 46), false, false,  1u), //   572
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 46), false, false,  1u), //   573
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 46), false, false,  1u), //   574
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 47), false, false,  1u), //   575
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 47), false, false,  1u), //   576
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 47), false, false,  1u), //   577
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 47), false, false,  1u), //   578
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 47), false, false,  1u), //   579
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 47), false, false,  1u), //   580
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 47), false, false,  1u), //   581
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 47), false, false,  1u), //   582
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 47), false, false,  1u), //   583
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 47), false, false,  1u), //   584
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 47), false, false,  1u), //   585
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 47), false, false,  1u), //   586
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 47), false, false,  1u), //   587
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 47), false, false,  1u), //   588
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 47), false, false,  1u), //   589
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 47), false, false,  1u), //   590
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 47), false, false,  1u), //   591
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 47), false, false,  1u), //   592
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 47), false, false,  1u), //   593
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 47), false, false,  1u), //   594
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 47), false, false,  1u), //   595
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 47), false, false,  1u), //   596
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 47), false, false,  1u), //   597
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 47), false, false,  1u), //   598
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 47), false, false,  1u), //   599
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 47), false, false,  1u), //   600
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 47), false, false,  1u), //   601
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 47), false, false,  1u), //   602
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 47), false, false,  1u), //   603
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 47), false, false,  1u), //   604
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 47), false, false,  1u), //   605
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 47), false, false,  1u), //   606
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 48), false, false,  1u), //   607
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 48), false, false,  1u), //   608
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 48), false, false,  1u), //   609
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 48), false, false,  1u), //   610
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 48), false, false,  1u), //   611
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 48), false, false,  1u), //   612
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 48), false, false,  1u), //   613
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 48), false, false,  1u), //   614
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 48), false, false,  1u), //   615
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 48), false, false,  1u), //   616
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 48), false, false,  1u), //   617
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 48), false, false,  1u), //   618
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 48), false, false,  1u), //   619
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 48), false, false,  1u), //   620
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 48), false, false,  1u), //   621
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 48), false, false,  1u), //   622
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 48), false, false,  1u), //   623
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 48), false, false,  1u), //   624
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 48), false, false,  1u), //   625
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 48), false, false,  1u), //   626
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 48), false, false,  1u), //   627
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 48), false, false,  1u), //   628
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 48), false, false,  1u), //   629
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 48), false, false,  1u), //   630
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 48), false, false,  1u), //   631
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 48), false, false,  1u), //   632
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 48), false, false,  1u), //   633
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 48), false, false,  1u), //   634
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 48), false, false,  1u), //   635
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 48), false, false,  1u), //   636
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 48), false, false,  1u), //   637
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 48), false, false,  1u), //   638
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 49), false, false,  1u), //   639
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 49), false, false,  1u), //   640
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 49), false, false,  1u), //   641
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 49), false, false,  1u), //   642
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 49), false, false,  1u), //   643
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 49), false, false,  1u), //   644
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 49), false, false,  1u), //   645
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 49), false, false,  1u), //   646
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 49), false, false,  1u), //   647
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 49), false, false,  1u), //   648
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 49), false, false,  1u), //   649
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 49), false, false,  1u), //   650
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 49), false, false,  1u), //   651
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 49), false, false,  1u), //   652
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 49), false, false,  1u), //   653
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 49), false, false,  1u), //   654
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 49), false, false,  1u), //   655
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 49), false, false,  1u), //   656
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 49), false, false,  1u), //   657
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 49), false, false,  1u), //   658
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 49), false, false,  1u), //   659
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 49), false, false,  1u), //   660
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 49), false, false,  1u), //   661
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 49), false, false,  1u), //   662
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 49), false, false,  1u), //   663
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 49), false, false,  1u), //   664
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 49), false, false,  1u), //   665
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 49), false, false,  1u), //   666
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 49), false, false,  1u), //   667
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 49), false, false,  1u), //   668
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 49), false, false,  1u), //   669
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 49), false, false,  1u), //   670
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 50), false, false,  1u), //   671
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 50), false, false,  1u), //   672
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 50), false, false,  1u), //   673
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 50), false, false,  1u), //   674
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 50), false, false,  1u), //   675
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 50), false, false,  1u), //   676
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 50), false, false,  1u), //   677
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 50), false, false,  1u), //   678
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 50), false, false,  1u), //   679
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 50), false, false,  1u), //   680
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 50), false, false,  1u), //   681
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 50), false, false,  1u), //   682
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 50), false, false,  1u), //   683
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 50), false, false,  1u), //   684
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 50), false, false,  1u), //   685
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 50), false, false,  1u), //   686
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 50), false, false,  1u), //   687
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 50), false, false,  1u), //   688
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 50), false, false,  1u), //   689
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 50), false, false,  1u), //   690
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 50), false, false,  1u), //   691
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 50), false, false,  1u), //   692
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 50), false, false,  1u), //   693
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 50), false, false,  1u), //   694
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 50), false, false,  1u), //   695
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 50), false, false,  1u), //   696
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 50), false, false,  1u), //   697
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 50), false, false,  1u), //   698
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 50), false, false,  1u), //   699
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 50), false, false,  1u), //   700
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 50), false, false,  1u), //   701
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 50), false, false,  1u), //   702
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 51), false, false,  1u), //   703
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 51), false, false,  1u), //   704
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 51), false, false,  1u), //   705
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 51), false, false,  1u), //   706
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 51), false, false,  1u), //   707
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 51), false, false,  1u), //   708
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 51), false, false,  1u), //   709
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 51), false, false,  1u), //   710
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 51), false, false,  1u), //   711
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 51), false, false,  1u), //   712
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 51), false, false,  1u), //   713
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 51), false, false,  1u), //   714
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 51), false, false,  1u), //   715
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 51), false, false,  1u), //   716
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 51), false, false,  1u), //   717
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 51), false, false,  1u), //   718
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 51), false, false,  1u), //   719
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 51), false, false,  1u), //   720
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 51), false, false,  1u), //   721
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 51), false, false,  1u), //   722
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 51), false, false,  1u), //   723
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 51), false, false,  1u), //   724
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 51), false, false,  1u), //   725
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 51), false, false,  1u), //   726
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 51), false, false,  1u), //   727
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 51), false, false,  1u), //   728
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 51), false, false,  1u), //   729
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 51), false, false,  1u), //   730
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 51), false, false,  1u), //   731
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 51), false, false,  1u), //   732
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 51), false, false,  1u), //   733
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 51), false, false,  1u), //   734
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 52), false, false,  1u), //   735
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 52), false, false,  1u), //   736
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 52), false, false,  1u), //   737
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 52), false, false,  1u), //   738
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 52), false, false,  1u), //   739
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 52), false, false,  1u), //   740
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 52), false, false,  1u), //   741
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 52), false, false,  1u), //   742
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 52), false, false,  1u), //   743
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 52), false, false,  1u), //   744
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 52), false, false,  1u), //   745
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 52), false, false,  1u), //   746
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 52), false, false,  1u), //   747
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 52), false, false,  1u), //   748
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 52), false, false,  1u), //   749
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 52), false, false,  1u), //   750
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 52), false, false,  1u), //   751
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 52), false, false,  1u), //   752
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 52), false, false,  1u), //   753
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 52), false, false,  1u), //   754
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 52), false, false,  1u), //   755
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 52), false, false,  1u), //   756
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 52), false, false,  1u), //   757
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 52), false, false,  1u), //   758
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 52), false, false,  1u), //   759
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 52), false, false,  1u), //   760
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 52), false, false,  1u), //   761
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 52), false, false,  1u), //   762
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 52), false, false,  1u), //   763
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 52), false, false,  1u), //   764
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 52), false, false,  1u), //   765
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 52), false, false,  1u), //   766
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 53), false, false,  1u), //   767
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 53), false, false,  1u), //   768
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 53), false, false,  1u), //   769
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 53), false, false,  1u), //   770
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 53), false, false,  1u), //   771
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 53), false, false,  1u), //   772
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 53), false, false,  1u), //   773
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 53), false, false,  1u), //   774
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 53), false, false,  1u), //   775
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 53), false, false,  1u), //   776
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 53), false, false,  1u), //   777
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 53), false, false,  1u), //   778
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 53), false, false,  1u), //   779
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 53), false, false,  1u), //   780
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 53), false, false,  1u), //   781
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 53), false, false,  1u), //   782
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 53), false, false,  1u), //   783
		new World_object::Node(              "Undefined", jgl::Vector2Int(17, 53), false, false,  1u), //   784
		new World_object::Node(              "Undefined", jgl::Vector2Int(18, 53), false, false,  1u), //   785
		new World_object::Node(              "Undefined", jgl::Vector2Int(19, 53), false, false,  1u), //   786
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 53), false, false,  1u), //   787
		new World_object::Node(              "Undefined", jgl::Vector2Int(21, 53), false, false,  1u), //   788
		new World_object::Node(              "Undefined", jgl::Vector2Int(22, 53), false, false,  1u), //   789
		new World_object::Node(              "Undefined", jgl::Vector2Int(23, 53), false, false,  1u), //   790
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 53), false, false,  1u), //   791
		new World_object::Node(              "Undefined", jgl::Vector2Int(25, 53), false, false,  1u), //   792
		new World_object::Node(              "Undefined", jgl::Vector2Int(26, 53), false, false,  1u), //   793
		new World_object::Node(              "Undefined", jgl::Vector2Int(27, 53), false, false,  1u), //   794
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 53), false, false,  1u), //   795
		new World_object::Node(              "Undefined", jgl::Vector2Int(29, 53), false, false,  1u), //   796
		new World_object::Node(              "Undefined", jgl::Vector2Int(30, 53), false, false,  1u), //   797
		new World_object::Node(              "Undefined", jgl::Vector2Int(31, 53), false, false,  1u), //   798
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 54), false, false,  1u), //   799
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 54), false, false,  1u), //   800
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 54), false, false,  1u), //   801
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 54), false, false,  1u), //   802
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 54), false, false,  1u), //   803
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 54), false, false,  1u), //   804
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 54), false, false,  1u), //   805
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 54), false, false,  1u), //   806
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 54), false, false,  1u), //   807
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 54), false, false,  1u), //   808
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 54), false, false,  1u), //   809
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 54), false, false,  1u), //   810
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 54), false, false,  1u), //   811
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 54), false, false,  1u), //   812
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 54), false, false,  1u), //   813
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 54), false, false,  1u), //   814
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 54), false, false,  4u), //   815
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 54), false, false,  4u), //   816
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 54), false, false,  4u), //   817
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 54), false, false,  4u), //   818
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 55), false, false,  1u), //   819
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 55), false, false,  1u), //   820
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 55), false, false,  1u), //   821
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 55), false, false,  1u), //   822
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 55), false, false,  1u), //   823
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 55), false, false,  1u), //   824
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 55), false, false,  1u), //   825
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 55), false, false,  1u), //   826
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 55), false, false,  1u), //   827
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 55), false, false,  1u), //   828
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 55), false, false,  1u), //   829
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 55), false, false,  1u), //   830
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 55), false, false,  1u), //   831
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 55), false, false,  1u), //   832
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 55), false, false,  1u), //   833
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 55), false, false,  1u), //   834
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 55), false, false,  4u), //   835
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 55), false, false,  4u), //   836
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 55), false, false,  4u), //   837
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 55), false, false,  4u), //   838
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 56), false, false,  1u), //   839
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 56), false, false,  1u), //   840
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 56), false, false,  1u), //   841
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 56), false, false,  1u), //   842
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 56), false, false,  1u), //   843
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 56), false, false,  1u), //   844
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 56), false, false,  1u), //   845
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 56), false, false,  1u), //   846
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 56), false, false,  1u), //   847
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 56), false, false,  1u), //   848
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 56), false, false,  1u), //   849
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 56), false, false,  1u), //   850
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 56), false, false,  1u), //   851
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 56), false, false,  1u), //   852
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 56), false, false,  1u), //   853
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 56), false, false,  1u), //   854
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 56), false, false,  4u), //   855
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 56), false, false,  4u), //   856
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 56), false, false,  4u), //   857
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 56), false, false,  4u), //   858
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 57), false, false,  1u), //   859
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 57), false, false,  1u), //   860
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 57), false, false,  1u), //   861
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 57), false, false,  1u), //   862
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 57), false, false,  1u), //   863
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 57), false, false,  1u), //   864
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 57), false, false,  1u), //   865
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 57), false, false,  1u), //   866
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 57), false, false,  1u), //   867
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 57), false, false,  1u), //   868
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 57), false, false,  1u), //   869
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 57), false, false,  1u), //   870
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 57), false, false,  1u), //   871
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 57), false, false,  1u), //   872
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 57), false, false,  1u), //   873
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 57), false, false,  1u), //   874
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 57), false, false,  4u), //   875
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 57), false, false,  4u), //   876
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 57), false, false,  4u), //   877
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 57), false, false,  4u), //   878
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 58), false, false,  1u), //   879
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 58), false, false,  1u), //   880
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 58), false, false,  1u), //   881
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 58), false, false,  1u), //   882
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 58), false, false,  1u), //   883
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 58), false, false,  1u), //   884
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 58), false, false,  1u), //   885
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 58), false, false,  1u), //   886
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 58), false, false,  1u), //   887
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 58), false, false,  1u), //   888
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 58), false, false,  1u), //   889
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 58), false, false,  1u), //   890
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 58), false, false,  1u), //   891
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 58), false, false,  1u), //   892
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 58), false, false,  1u), //   893
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 58), false, false,  1u), //   894
		new World_object::Node(                 "Flower", jgl::Vector2Int(16, 58), false, false,  4u), //   895
		new World_object::Node(                 "Flower", jgl::Vector2Int(20, 58), false, false,  4u), //   896
		new World_object::Node(                 "Flower", jgl::Vector2Int(24, 58), false, false,  4u), //   897
		new World_object::Node(                 "Flower", jgl::Vector2Int(28, 58), false, false,  4u), //   898
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 0, 59), false, false,  1u), //   899
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 1, 59), false, false,  1u), //   900
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 2, 59), false, false,  1u), //   901
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 3, 59), false, false,  1u), //   902
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 4, 59), false, false,  1u), //   903
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 5, 59), false, false,  1u), //   904
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 6, 59), false, false,  1u), //   905
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 7, 59), false, false,  1u), //   906
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 59), false, false,  1u), //   907
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 59), false, false,  1u), //   908
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 59), false, false,  1u), //   909
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 59), false, false,  1u), //   910
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 59), false, false,  1u), //   911
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 59), false, false,  1u), //   912
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 59), false, false,  1u), //   913
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 59), false, false,  1u), //   914
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 59), false, false,  4u), //   915
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 59), false, false,  4u), //   916
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 59), false, false,  4u), //   917
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 59), false, false,  4u), //   918
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 0, 60), false, false,  1u), //   919
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 1, 60), false, false,  1u), //   920
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 2, 60), false, false,  1u), //   921
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 3, 60), false, false,  1u), //   922
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 4, 60), false, false,  1u), //   923
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 5, 60), false, false,  1u), //   924
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 6, 60), false, false,  1u), //   925
		new World_object::Node(                   "Ruin", jgl::Vector2Int( 7, 60), false, false,  1u), //   926
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 60), false, false,  1u), //   927
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 60), false, false,  1u), //   928
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 60), false, false,  1u), //   929
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 60), false, false,  1u), //   930
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 60), false, false,  1u), //   931
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 60), false, false,  1u), //   932
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 60), false, false,  1u), //   933
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 60), false, false,  1u), //   934
		new World_object::Node(              "Undefined", jgl::Vector2Int(16, 60), false, false,  4u), //   935
		new World_object::Node(              "Undefined", jgl::Vector2Int(20, 60), false, false,  4u), //   936
		new World_object::Node(              "Undefined", jgl::Vector2Int(24, 60), false, false,  4u), //   937
		new World_object::Node(              "Undefined", jgl::Vector2Int(28, 60), false, false,  4u), //   938
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 61), false, false,  1u), //   939
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 61), false, false,  1u), //   940
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 61), false, false,  1u), //   941
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 61), false, false,  1u), //   942
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 61), false, false,  1u), //   943
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 61), false, false,  1u), //   944
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 61), false, false,  1u), //   945
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 61), false, false,  1u), //   946
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 61), false, false,  1u), //   947
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 61), false, false,  1u), //   948
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 61), false, false,  1u), //   949
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 61), false, false,  1u), //   950
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 61), false, false,  1u), //   951
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 61), false, false,  1u), //   952
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 61), false, false,  1u), //   953
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 61), false, false,  1u), //   954
		new World_object::Node(                  "Torch", jgl::Vector2Int(16, 61), false, false,  4u), //   955
		new World_object::Node(                  "Torch", jgl::Vector2Int(20, 61), false, false,  4u), //   956
		new World_object::Node(                  "Torch", jgl::Vector2Int(24, 61), false, false,  4u), //   957
		new World_object::Node(                  "Torch", jgl::Vector2Int(28, 61), false, false,  4u), //   958
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 62), false, false,  1u), //   959
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 62), false, false,  1u), //   960
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 62), false, false,  1u), //   961
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 62), false, false,  1u), //   962
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 62), false, false,  1u), //   963
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 62), false, false,  1u), //   964
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 62), false, false,  1u), //   965
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 62), false, false,  1u), //   966
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 62), false, false,  1u), //   967
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 62), false, false,  1u), //   968
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 62), false, false,  1u), //   969
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 62), false, false,  1u), //   970
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 62), false, false,  1u), //   971
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 62), false, false,  1u), //   972
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 62), false, false,  1u), //   973
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 62), false, false,  1u), //   974
		new World_object::Node(                   "Fire", jgl::Vector2Int(16, 62), false, false,  4u), //   975
		new World_object::Node(                   "Fire", jgl::Vector2Int(20, 62), false, false,  4u), //   976
		new World_object::Node(                   "Fire", jgl::Vector2Int(24, 62), false, false,  4u), //   977
		new World_object::Node(                   "Fire", jgl::Vector2Int(28, 62), false, false,  4u), //   978
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 63), false, false,  1u), //   979
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 63), false, false,  1u), //   980
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 63), false, false,  1u), //   981
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 63), false, false,  1u), //   982
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 63), false, false,  1u), //   983
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 63), false, false,  1u), //   984
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 63), false, false,  1u), //   985
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 63), false, false,  1u), //   986
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 63), false, false,  1u), //   987
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 63), false, false,  1u), //   988
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 63), false, false,  1u), //   989
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 63), false, false,  1u), //   990
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 63), false, false,  1u), //   991
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 63), false, false,  1u), //   992
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 63), false, false,  1u), //   993
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 63), false, false,  1u), //   994
		new World_object::Node(                   "Fire", jgl::Vector2Int(16, 63), false, false,  4u), //   995
		new World_object::Node(                   "Fire", jgl::Vector2Int(20, 63), false, false,  4u), //   996
		new World_object::Node(                   "Fire", jgl::Vector2Int(24, 63), false, false,  4u), //   997
		new World_object::Node(                   "Fire", jgl::Vector2Int(28, 63), false, false,  4u), //   998
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 64), false, false,  1u), //   999
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 64), false, false,  1u), //   1000
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 64), false, false,  1u), //   1001
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 64), false, false,  1u), //   1002
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 64), false, false,  1u), //   1003
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 64), false, false,  1u), //   1004
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 64), false, false,  1u), //   1005
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 64), false, false,  1u), //   1006
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 64), false, false,  1u), //   1007
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 64), false, false,  1u), //   1008
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 64), false, false,  1u), //   1009
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 64), false, false,  1u), //   1010
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 64), false, false,  1u), //   1011
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 64), false, false,  1u), //   1012
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 64), false, false,  1u), //   1013
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 64), false, false,  1u), //   1014
		new World_object::Node(                   "Fire", jgl::Vector2Int(16, 64), false, false,  4u), //   1015
		new World_object::Node(                   "Fire", jgl::Vector2Int(20, 64), false, false,  4u), //   1016
		new World_object::Node(                   "Fire", jgl::Vector2Int(24, 64), false, false,  4u), //   1017
		new World_object::Node(                   "Fire", jgl::Vector2Int(28, 64), false, false,  4u), //   1018
		new World_object::Node(              "Undefined", jgl::Vector2Int( 0, 65), false, false,  1u), //   1019
		new World_object::Node(              "Undefined", jgl::Vector2Int( 1, 65), false, false,  1u), //   1020
		new World_object::Node(              "Undefined", jgl::Vector2Int( 2, 65), false, false,  1u), //   1021
		new World_object::Node(              "Undefined", jgl::Vector2Int( 3, 65), false, false,  1u), //   1022
		new World_object::Node(              "Undefined", jgl::Vector2Int( 4, 65), false, false,  1u), //   1023
		new World_object::Node(              "Undefined", jgl::Vector2Int( 5, 65), false, false,  1u), //   1024
		new World_object::Node(              "Undefined", jgl::Vector2Int( 6, 65), false, false,  1u), //   1025
		new World_object::Node(              "Undefined", jgl::Vector2Int( 7, 65), false, false,  1u), //   1026
		new World_object::Node(              "Undefined", jgl::Vector2Int( 8, 65), false, false,  1u), //   1027
		new World_object::Node(              "Undefined", jgl::Vector2Int( 9, 65), false, false,  1u), //   1028
		new World_object::Node(              "Undefined", jgl::Vector2Int(10, 65), false, false,  1u), //   1029
		new World_object::Node(              "Undefined", jgl::Vector2Int(11, 65), false, false,  1u), //   1030
		new World_object::Node(              "Undefined", jgl::Vector2Int(12, 65), false, false,  1u), //   1031
		new World_object::Node(              "Undefined", jgl::Vector2Int(13, 65), false, false,  1u), //   1032
		new World_object::Node(              "Undefined", jgl::Vector2Int(14, 65), false, false,  1u), //   1033
		new World_object::Node(              "Undefined", jgl::Vector2Int(15, 65), false, false,  1u), //   1034
		new World_object::Node(                   "Fire", jgl::Vector2Int(16, 65), false, false,  4u), //   1035
		new World_object::Node(                   "Fire", jgl::Vector2Int(20, 65), false, false,  4u), //   1036
		new World_object::Node(                   "Fire", jgl::Vector2Int(24, 65), false, false,  4u), //   1037
		new World_object::Node(                   "Fire", jgl::Vector2Int(28, 65), false, false,  4u), //   1038
	};

	jgl::Array<World_object::Prefab*> g_prefab_array =
	{
		new World_object::Prefab("Tree - Green", jgl::Vector2Int(0, 0), jgl::Vector2Int(1, 2), {
				447,
				479
			}, {
				3,
				0
			}),//  0
		new World_object::Prefab("Tree - Brown", jgl::Vector2Int(1, 0), jgl::Vector2Int(1, 2), {
				448,
				480
			}, {
				3,
				0
			}),//  1
		new World_object::Prefab("Tree - Pink", jgl::Vector2Int(2, 0), jgl::Vector2Int(1, 2), {
				449,
				481
			}, {
				3,
				0
			}),//  2
		new World_object::Prefab("Tree - Dark green", jgl::Vector2Int(3, 0), jgl::Vector2Int(1, 2), {
				450,
				482
			}, {
				3,
				0
			}),//  3
		new World_object::Prefab("Tree - Light green", jgl::Vector2Int(4, 0), jgl::Vector2Int(1, 2), {
				451,
				483
			}, {
				3,
				0
			}),//  4
		new World_object::Prefab("Tree - Blue", jgl::Vector2Int(5, 0), jgl::Vector2Int(1, 2), {
				452,
				484
			}, {
				3,
				0
			}),//  5
		new World_object::Prefab("Tree - Purple", jgl::Vector2Int(6, 0), jgl::Vector2Int(1, 2), {
				453,
				485
			}, {
				3,
				0
			}),//  6
		new World_object::Prefab("Tree - White", jgl::Vector2Int(7, 0), jgl::Vector2Int(1, 2), {
				454,
				486
			}, {
				3,
				0
			}),//  7
		new World_object::Prefab("Big tree - Green", jgl::Vector2Int(0, 1), jgl::Vector2Int(2, 2), {
				511, 512,
				543, 544
			}, {
				3, 3,
				0, 0
			}),//  8
		new World_object::Prefab("Big tree - Brown", jgl::Vector2Int(1, 1), jgl::Vector2Int(2, 2), {
				513, 514,
				545, 546
			}, {
				3, 3,
				0, 0
			}),//  9
		new World_object::Prefab("Big tree - Pink", jgl::Vector2Int(2, 1), jgl::Vector2Int(2, 2), {
				515, 516,
				547, 548
			}, {
				3, 3,
				0, 0
			}),//  10
		new World_object::Prefab("Big tree - Dark green", jgl::Vector2Int(3, 1), jgl::Vector2Int(2, 2), {
				517, 518, 
				549, 550
			}, {
				3, 3,
				0, 0
			}),//  11
		new World_object::Prefab("Big tree - Light green", jgl::Vector2Int(4, 1), jgl::Vector2Int(2, 2), {
				575, 576, 
				607, 608
			}, {
				3, 3,
				0, 0
			}),//  12
		new World_object::Prefab("Big tree - Blue", jgl::Vector2Int(5, 1), jgl::Vector2Int(2, 2), {
				577, 578,
				609, 610
			}, {
				3, 3,
				0, 0
			}),//  13
		new World_object::Prefab("Big tree - Purple", jgl::Vector2Int(6, 1), jgl::Vector2Int(2, 2), {
				579, 580, 
				611, 612
			}, {
				3, 3,
				0, 0
			}),//  14
		new World_object::Prefab("Big tree - White", jgl::Vector2Int(7, 1), jgl::Vector2Int(2, 2), {
				581, 582, 
				613, 614
			}, {
				3, 3,
				0, 0
			}),//  15
		new World_object::Prefab("Banner ", jgl::Vector2Int(0, 2), jgl::Vector2Int(1, 2), {
				895,
				927
			}, {
				3,
				0
			}),//  16
		new World_object::Prefab("Banner ", jgl::Vector2Int(1, 2), jgl::Vector2Int(1, 2), {
				896,
				928
			}, {
				3,
				0
			}),//  17
		new World_object::Prefab("Banner ", jgl::Vector2Int(2, 2), jgl::Vector2Int(1, 2), {
				897,
				929
			}, {
				3,
				0
			}),//  18
		new World_object::Prefab("Banner ", jgl::Vector2Int(3, 2), jgl::Vector2Int(1, 2), {
				898,
				930
			}, {
				3,
				0
			}),//  19
		new World_object::Prefab("Banner ", jgl::Vector2Int(4, 2), jgl::Vector2Int(1, 2), {
				899,
				931
			}, {
				3,
				0
			}),//  20
		new World_object::Prefab("Banner ", jgl::Vector2Int(5, 2), jgl::Vector2Int(1, 2), {
				900,
				932
			}, {
				3,
				0
			}),//  21
		new World_object::Prefab("Banner ", jgl::Vector2Int(6, 2), jgl::Vector2Int(1, 2), {
				901,
				933
			}, {
				3,
				0
			}),//  22
		new World_object::Prefab("Trunk", jgl::Vector2Int(7, 2), jgl::Vector2Int(2, 2), {
				833, 834,
				865, 866
			}, {
				3, 3,
				0, 0
			}),//  23
		new World_object::Prefab("Ruin", jgl::Vector2Int(0, 3), jgl::Vector2Int(2, 1), {
				919, 920
			}, {
				0, 0
			}),//  24
		new World_object::Prefab("Ruin", jgl::Vector2Int(1, 3), jgl::Vector2Int(2, 1), {
				921, 922
			}, {
				0, 0
			}),//  25
		new World_object::Prefab("Ruin", jgl::Vector2Int(2, 3), jgl::Vector2Int(2, 1), {
				939, 940
			}, {
				0, 0
			}),//  26
		new World_object::Prefab("Ruin", jgl::Vector2Int(3, 3), jgl::Vector2Int(2, 1), {
				941, 942
			}, {
				0, 0
			}),//  27
		new World_object::Prefab("Ruin", jgl::Vector2Int(4, 3), jgl::Vector2Int(1, 2), {
				911,
				943
			}, {
				3,
				0
			}),//  28
		new World_object::Prefab("Ruin", jgl::Vector2Int(5, 3), jgl::Vector2Int(1, 2), {
				912,
				944
			}, {
				3,
				0
			}),//  29
		new World_object::Prefab("Ruin", jgl::Vector2Int(6, 3), jgl::Vector2Int(1, 2), {
				913,
				945
			}, {
				3,
				0
			}),//  30
		new World_object::Prefab("Ruin", jgl::Vector2Int(7, 3), jgl::Vector2Int(1, 2), {
				914,
				946
			}, {
				3,
				0
			}),//  31
		new World_object::Prefab("Column base", jgl::Vector2Int(0, 4), jgl::Vector2Int(2, 2), {
				743, 744,
				775, 776
			}, {
				3, 3,
				0, 0
			}),//  32
		new World_object::Prefab("Column base", jgl::Vector2Int(1, 4), jgl::Vector2Int(2, 2), {
				745, 746,
				777, 778
			}, {
				3, 3,
				0, 0
			}),//  33
		new World_object::Prefab("Column base", jgl::Vector2Int(2, 4), jgl::Vector2Int(2, 2), {
				747,748,
				779,780
			}, {
				3, 3,
				0, 0
			}),//  34
		new World_object::Prefab("Column base - broken", jgl::Vector2Int(3, 4), jgl::Vector2Int(2, 2), {
				749,750,
				781,782
			}, {
				3, 3,
				0, 0
			}),//  35
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 4), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  36
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 4), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  37
		new World_object::Prefab("Chair", jgl::Vector2Int(6, 4), jgl::Vector2Int(1, 2), {
				867,
				887
			}, {
				3,
				0
			}),//  38
		new World_object::Prefab("Chair", jgl::Vector2Int(7, 4), jgl::Vector2Int(1, 2), {
				868, 
				888
			}, {
				3,
				0
			}),//  39
		new World_object::Prefab("Column body", jgl::Vector2Int(0, 5), jgl::Vector2Int(2, 2), {
				807, 808,
				827, 828
			}, {
				3, 3,
				0, 0
			}),//  40
		new World_object::Prefab("Column body", jgl::Vector2Int(1, 5), jgl::Vector2Int(2, 2), {
				809, 810,
				829, 830
			}, {
				3, 3,
				0, 0
			}),//  41
		new World_object::Prefab("Column body", jgl::Vector2Int(2, 5), jgl::Vector2Int(2, 2), {
				811, 812,
				831, 832
			}, {
				3, 3,
				0, 0
			}),//  42
		new World_object::Prefab("Statue", jgl::Vector2Int(3, 5), jgl::Vector2Int(2, 2), {
				813, 814,
				833, 834
			}, {
				3, 3,
				0, 0
			}),//  43
		new World_object::Prefab("Shelf - Empty", jgl::Vector2Int(4, 5), jgl::Vector2Int(2, 3), {
				849, 850,
				869, 870,
				889, 890
			}, {
				3, 3,
				3, 3,
				0, 0
			}),//  44
		new World_object::Prefab("Shelf - Book", jgl::Vector2Int(5, 5), jgl::Vector2Int(2, 3), {
				851, 852,
				871, 872,
				891, 892
			}, {
				3, 3,
				3, 3,
				0, 0
			}),//  45
		new World_object::Prefab("Shelf - Food", jgl::Vector2Int(6, 5), jgl::Vector2Int(2, 3), {
				853, 854,
				873, 874,
				893, 894
			}, {
				3, 3,
				3, 3,
				0, 0
			}),//  46
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 5), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  47
		new World_object::Prefab("Torch - Red", jgl::Vector2Int(0, 6), jgl::Vector2Int(1, 2), {
				915,
				935
			}, {
				3,
				0
			}),//  48
		new World_object::Prefab("Torch - Green", jgl::Vector2Int(1, 6), jgl::Vector2Int(1, 2), {
				916,
				936
			}, {
				3,
				0
			}),//  49
		new World_object::Prefab("Torch - Blue", jgl::Vector2Int(2, 6), jgl::Vector2Int(1, 2), {
				917,
				937
			}, {
				3,
				0
			}),//  50
		new World_object::Prefab("Torch - Black", jgl::Vector2Int(3, 6), jgl::Vector2Int(1, 2), {
				918,
				938
			}, {
				3,
				0
			}),//  51
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 6), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  52
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 6), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  53
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 6), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  54
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 6), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  55
		new World_object::Prefab("Crystal", jgl::Vector2Int(0, 7), jgl::Vector2Int(1, 2), {
				455,
				487
			}, {
				3,
				0
			}),//  56
		new World_object::Prefab("Crystal", jgl::Vector2Int(1, 7), jgl::Vector2Int(1, 2), {
				456, 
				488
			}, {
				3,
				0
			}),//  57
		new World_object::Prefab("Crystal", jgl::Vector2Int(2, 7), jgl::Vector2Int(1, 2), {
				457, 
				489
			}, {
				3,
				0
			}),//  58
		new World_object::Prefab("Crystal", jgl::Vector2Int(3, 7), jgl::Vector2Int(1, 2), {
				458,
				490
			}, {
				3,
				0
			}),//  59
		new World_object::Prefab("Crystal", jgl::Vector2Int(4, 7), jgl::Vector2Int(1, 2), {
				459, 
				491
			}, {
				3,
				0
			}),//  60
		new World_object::Prefab("Crystal", jgl::Vector2Int(5, 7), jgl::Vector2Int(1, 2), {
				460, 
				492
			}, {
				3,
				0
			}),//  61
		new World_object::Prefab("Crystal", jgl::Vector2Int(6, 7), jgl::Vector2Int(1, 2), {
				461,
				493
			}, {
				3,
				0
			}),//  62
		new World_object::Prefab("Crystal", jgl::Vector2Int(7, 7), jgl::Vector2Int(1, 2), {
				462,
				497
			}, {
				3,
				0
			}),//  63
		new World_object::Prefab("Big crystal", jgl::Vector2Int(0, 8), jgl::Vector2Int(2, 2), {
				519, 520,
				551, 552
			}, {
				3, 3,
				0, 0
			}),//  64
		new World_object::Prefab("Big crystal", jgl::Vector2Int(1, 8), jgl::Vector2Int(2, 2), {
				521, 522,
				553, 554
			}, {
				3, 3,
				0, 0
			}),//  65
		new World_object::Prefab("Big crystal", jgl::Vector2Int(2, 8), jgl::Vector2Int(2, 2), {
				523, 524,
				555, 556
			}, {
				3, 3,
				0, 0
			}),//  66
		new World_object::Prefab("Big crystal", jgl::Vector2Int(3, 8), jgl::Vector2Int(2, 2), {
				525, 526, 
				557, 558
			}, {
				3, 3,
				0, 0
			}),//  67
		new World_object::Prefab("Big crystal", jgl::Vector2Int(4, 8), jgl::Vector2Int(2, 2), {
				583, 584,
				615, 616
			}, {
				3, 3,
				0, 0
			}),//  68
		new World_object::Prefab("Big crystal", jgl::Vector2Int(5, 8), jgl::Vector2Int(2, 2), {
				585, 586, 
				617, 618
			}, {
				3, 3,
				0, 0
			}),//  69
		new World_object::Prefab("Big crystal", jgl::Vector2Int(6, 8), jgl::Vector2Int(2, 2), {
				587, 588,
				619, 620
			}, {
				3, 3,
				0, 0
			}),//  70
		new World_object::Prefab("Big crystal", jgl::Vector2Int(7, 8), jgl::Vector2Int(2, 2), {
				589, 590,
				621, 622
			}, {
				3, 3,
				0, 0
			}),//  71
		new World_object::Prefab("Stone", jgl::Vector2Int(0, 9), jgl::Vector2Int(1, 2), {
				767, 
				799
			}, {
				3,
				0
			}),//  72
		new World_object::Prefab("Stone", jgl::Vector2Int(1, 9), jgl::Vector2Int(1, 2), {
				768,
				800
			}, {
				3,
				0
			}),//  73
		new World_object::Prefab("Stone", jgl::Vector2Int(2, 9), jgl::Vector2Int(1, 2), {
				769, 
				801
			}, {
				3,
				0
			}),//  74
		new World_object::Prefab("Stone", jgl::Vector2Int(3, 9), jgl::Vector2Int(1, 2), {
				770, 
				802
			}, {
				3,
				0
			}),//  75
		new World_object::Prefab("Big stone", jgl::Vector2Int(4, 9), jgl::Vector2Int(2, 2), {
				771, 772,
				803, 804
			}, {
				3, 3,
				0, 0
			}),//  76
		new World_object::Prefab("Big stone", jgl::Vector2Int(5, 9), jgl::Vector2Int(2, 2), {
				773, 774,
				805, 806
			}, {
				3, 3,
				0, 0
			}),//  77
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 9), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  78
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 9), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  79
		new World_object::Prefab("Statue", jgl::Vector2Int(0, 10), jgl::Vector2Int(1, 2), {
				679, 
				711
			}, {
				3,
				0
			}),//  80
		new World_object::Prefab("Statue", jgl::Vector2Int(1, 10), jgl::Vector2Int(1, 2), {
				680, 
				712
			}, {
				3,
				0
			}),//  81
		new World_object::Prefab("Statue", jgl::Vector2Int(2, 10), jgl::Vector2Int(1, 2), {
				681,
				713
			}, {
				3,
				0
			}),//  82
		new World_object::Prefab("Statue", jgl::Vector2Int(3, 10), jgl::Vector2Int(1, 2), {
				682,
				714
			}, {
				3,
				0
			}),//  83
		new World_object::Prefab("Cactuses", jgl::Vector2Int(4, 10), jgl::Vector2Int(1, 2), {
				683, 
				715
			}, {
				3,
				0
			}),//  84
		new World_object::Prefab("Cactuses", jgl::Vector2Int(5, 10), jgl::Vector2Int(1, 2), {
				684, 
				716
			}, {
				3,
				0
			}),//  85
		new World_object::Prefab("Cactuses", jgl::Vector2Int(6, 10), jgl::Vector2Int(1, 2), {
				685, 
				717
			}, {
				3,
				0
			}),//  86
		new World_object::Prefab("Cactuses", jgl::Vector2Int(7, 10), jgl::Vector2Int(1, 2), {
				686, 
				718
			}, {
				3, 
				0
			}),//  87
		new World_object::Prefab("Small house", jgl::Vector2Int(0, 11), jgl::Vector2Int(4, 3), {
				503, 505, 505, 506,
				567, 569, 569, 570,
				631, 632, 633, 634
			}, {
				3, 3, 3, 3,
				0, 0, 0, 0, 
				0, 0, 0, 0
			}),//  88
		new World_object::Prefab("Small house", jgl::Vector2Int(1, 11), jgl::Vector2Int(4, 3), {
				507, 509, 509, 510,
				571, 573, 573, 574,
				635, 632, 637, 638
			}, {
				3, 3, 3, 3,
				0, 0, 0, 0, 
				0, 0, 0, 0
			}),//  89
		new World_object::Prefab("Small house", jgl::Vector2Int(2, 11), jgl::Vector2Int(4, 3), {
				663, 665, 665, 666,
				727, 728, 729, 730,
				791, 792, 793, 794
			}, {
				3, 3, 3, 3,
				0, 0, 0, 0, 
				0, 0, 0, 0
			}),//  90
		new World_object::Prefab("Small house", jgl::Vector2Int(3, 11), jgl::Vector2Int(4, 3), {
				667, 669, 669, 670,
				731, 732, 733, 734,
				795, 796, 797, 798
			}, {
				3, 3, 3, 3,
				0, 0, 0, 0, 
				0, 0, 0, 0
			}),//  91
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 11), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  92
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 11), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  93
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 11), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  94
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 11), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  95
		new World_object::Prefab("Medium house", jgl::Vector2Int(0, 12), jgl::Vector2Int(5, 3), {
				503, 504, 505, 505, 506,
				567, 569, 569, 569, 570,
				631, 632, 633, 633, 634
			}, {
				3, 3, 3, 3, 3,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
			}),//  96
		new World_object::Prefab("Medium house", jgl::Vector2Int(1, 12), jgl::Vector2Int(5, 3), {
				507, 508, 509, 509, 510,
				571, 573, 573, 573, 574,
				635, 632, 637, 637, 638
			}, {
				3, 3, 3, 3, 3,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
			}),//  97
		new World_object::Prefab("Medium house", jgl::Vector2Int(2, 12), jgl::Vector2Int(5, 3), {
				663, 664, 665, 665, 666,
				727, 728, 729, 729, 730,
				791, 792, 793, 793, 794
			}, {
				3, 3, 3, 3, 3,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
			}),//  98
		new World_object::Prefab("Medium house", jgl::Vector2Int(3, 12), jgl::Vector2Int(5, 3), {
				667, 668, 669, 669, 670,
				731, 732, 733, 733, 734,
				795, 796, 797, 797, 798
			}, {
				3, 3, 3, 3, 3,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
			}),//  99
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 12), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  100
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 12), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  101
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 12), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  102
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 12), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  103
		new World_object::Prefab("Big house", jgl::Vector2Int(0, 13), jgl::Vector2Int(5, 5), {
				503, 505, 505, 505, 506,
				535, 537, 537, 537, 538,
				567, 569, 569, 569, 570,
				599, 600, 600, 600, 602,
				631, 632, 633, 633, 634
			}, {
				3, 3, 3, 3, 3,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0
			}),//  104
		new World_object::Prefab("Big house", jgl::Vector2Int(1, 13), jgl::Vector2Int(5, 5), {
				507, 509, 509, 509, 510,
				539, 541, 541, 541, 542,
				571, 573, 573, 573, 574,
				603, 605, 605, 605, 606,
				635, 632, 637, 637, 638
			}, {
				3, 3, 3, 3, 3,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0
			}),//  105
		new World_object::Prefab("Big house", jgl::Vector2Int(2, 13), jgl::Vector2Int(5, 5), {
				663, 665, 665, 665, 666,
				695, 697, 697, 697, 698,
				727, 729, 729, 729, 730,
				759, 761, 761, 761, 762,
				791, 792, 793, 793, 794
			}, {
				3, 3, 3, 3, 3,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0
			}),//  106
		new World_object::Prefab("Big house", jgl::Vector2Int(3, 13), jgl::Vector2Int(5, 5), {
				667, 669, 669, 669, 670,
				699, 701, 701, 701, 702,
				731, 733, 733, 733, 734,
				763, 765, 765, 765, 766,
				795, 796, 797, 797, 798
			}, {
				3, 3, 3, 3, 3,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0
			}),//  107
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 13), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  108
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 13), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  109
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 13), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  110
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 13), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  111
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 14), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  112
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 14), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  113
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 14), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  114
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 14), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  115
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 14), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  116
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 14), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  117
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 14), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  118
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 14), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  119
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 15), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  120
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 15), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  121
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 15), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  122
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 15), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  123
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 15), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  124
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 15), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  125
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 15), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  126
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 15), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  127
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 16), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  128
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 16), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  129
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 16), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  130
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 16), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  131
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 16), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  132
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 16), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  133
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 16), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  134
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 16), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  135
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 17), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  136
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 17), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  137
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 17), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  138
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 17), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  139
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 17), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  140
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 17), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  141
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 17), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  142
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 17), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  143
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 18), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  144
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 18), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  145
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 18), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  146
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 18), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  147
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 18), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  148
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 18), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  149
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 18), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  150
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 18), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  151
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 19), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  152
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 19), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  153
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 19), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  154
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 19), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  155
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 19), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  156
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 19), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  157
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 19), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  158
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 19), jgl::Vector2Int(0, 0), {
			
			}, {0}),//  159
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 20), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  160
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 20), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  161
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 20), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  162
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 20), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  163
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 20), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  164
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 20), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  165
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 20), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  166
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 20), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  167
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 21), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  168
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 21), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  169
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 21), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  170
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 21), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  171
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 21), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  172
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 21), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  173
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 21), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  174
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 21), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  175
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 22), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  176
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 22), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  177
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 22), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  178
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 22), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  179
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 22), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  180
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 22), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  181
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 22), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  182
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 22), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  183
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 23), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  184
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 23), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  185
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 23), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  186
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 23), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  187
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 23), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  188
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 23), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  189
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 23), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  190
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 23), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  191
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 24), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  192
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 24), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  193
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 24), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  194
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 24), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  195
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 24), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  196
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 24), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  197
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 24), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  198
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 24), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  199
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 25), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  200
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 25), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  201
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 25), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  202
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 25), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  203
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 25), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  204
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 25), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  205
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 25), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  206
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 25), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  207
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 26), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  208
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 26), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  209
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 26), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  210
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 26), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  211
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 26), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  212
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 26), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  213
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 26), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  214
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 26), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  215
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 27), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  216
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 27), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  217
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 27), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  218
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 27), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  219
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 27), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  220
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 27), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  221
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 27), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  222
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 27), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  223
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 28), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  224
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 28), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  225
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 28), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  226
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 28), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  227
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 28), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  228
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 28), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  229
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 28), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  230
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 28), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  231
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 29), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  232
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 29), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  233
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 29), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  234
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 29), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  235
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 29), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  236
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 29), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  237
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 29), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  238
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 29), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  239
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 30), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  240
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 30), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  241
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 30), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  242
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 30), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  243
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 30), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  244
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 30), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  245
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 30), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  246
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 30), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  247
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 31), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  248
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 31), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  249
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 31), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  250
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 31), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  251
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 31), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  252
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 31), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  253
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 31), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  254
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 31), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  255
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 32), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  256
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 32), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  257
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 32), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  258
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 32), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  259
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 32), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  260
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 32), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  261
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 32), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  262
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 32), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  263
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 33), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  264
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 33), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  265
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 33), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  266
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 33), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  267
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 33), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  268
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 33), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  269
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 33), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  270
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 33), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  271
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 34), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  272
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 34), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  273
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 34), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  274
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 34), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  275
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 34), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  276
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 34), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  277
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 34), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  278
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 34), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  279
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 35), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  280
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 35), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  281
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 35), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  282
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 35), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  283
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 35), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  284
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 35), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  285
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 35), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  286
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 35), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  287
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 36), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  288
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 36), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  289
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 36), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  290
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 36), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  291
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 36), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  292
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 36), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  293
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 36), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  294
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 36), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  295
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 37), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  296
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 37), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  297
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 37), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  298
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 37), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  299
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 37), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  300
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 37), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  301
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 37), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  302
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 37), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  303
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 38), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  304
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 38), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  305
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 38), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  306
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 38), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  307
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 38), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  308
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 38), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  309
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 38), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  310
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 38), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  311
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 39), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  312
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 39), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  313
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 39), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  314
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 39), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  315
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 39), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  316
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 39), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  317
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 39), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  318
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 39), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  319
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 40), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  320
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 40), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  321
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 40), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  322
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 40), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  323
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 40), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  324
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 40), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  325
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 40), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  326
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 40), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  327
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 41), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  328
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 41), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  329
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 41), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  330
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 41), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  331
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 41), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  332
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 41), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  333
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 41), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  334
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 41), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  335
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 42), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  336
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 42), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  337
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 42), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  338
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 42), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  339
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 42), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  340
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 42), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  341
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 42), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  342
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 42), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  343
		new World_object::Prefab("Unknow", jgl::Vector2Int(0, 43), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  344
		new World_object::Prefab("Unknow", jgl::Vector2Int(1, 43), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  345
		new World_object::Prefab("Unknow", jgl::Vector2Int(2, 43), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  346
		new World_object::Prefab("Unknow", jgl::Vector2Int(3, 43), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  347
		new World_object::Prefab("Unknow", jgl::Vector2Int(4, 43), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  348
		new World_object::Prefab("Unknow", jgl::Vector2Int(5, 43), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  349
		new World_object::Prefab("Unknow", jgl::Vector2Int(6, 43), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  350
		new World_object::Prefab("Unknow", jgl::Vector2Int(7, 43), jgl::Vector2Int(0, 0), {
			
			}, {
			
			}),//  351
	};
}
