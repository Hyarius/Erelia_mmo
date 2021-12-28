#include "erelia.h"

void print_node(jgl::File& file, jgl::Size_t& index, jgl::String name, jgl::Vector2Int pos, jgl::Bool autotiled, jgl::Bool obstacle, jgl::Size_t animation = 1u)
{
	jgl::String text = "	new World_object::Node(";

	text += jgl::normalize_string("\"" + name + "\"", ' ', 25);
	text += ", ";
	text += "jgl::Vector2Int(";
	text += jgl::normalize_string(jgl::itoa(pos.x), ' ', 2);
	text += ", ";
	text += jgl::normalize_string(jgl::itoa(pos.y), ' ', 2);
	text += "), ";

	if (autotiled == true)
		text += jgl::normalize_string("true", ' ', 5);
	else
		text += jgl::normalize_string("false", ' ', 5);
	text += ", ";

	if (autotiled == true)
		text += jgl::normalize_string("true", ' ', 5);
	else
		text += jgl::normalize_string("false", ' ', 5);

	text += ", " + jgl::normalize_string(jgl::itoa(animation), ' ', 2) + "u), //   ";

	text += jgl::itoa(index);

	file << text << std::endl;

	index++;
}

void generate_wall(jgl::File& file, jgl::Size_t& index, jgl::Size_t& line)
{
	jgl::Size_t wall_pos_index[4] = { 2, 0, 3, 1 };

	for (jgl::Size_t y = 0; y < 4; y++)
	{
		jgl::Size_t wall_pos = wall_pos_index[y];
		for (jgl::Int x = 0; x < 32; x++)
		{
			if ((x % 4) == wall_pos)
				print_node(file, index, "Stair - undefined", jgl::Vector2Int(x, line), false, false, 1);
			else
				print_node(file, index, "Wall - undefined", jgl::Vector2Int(x, line), false, true, 1);
		}
		line++;
	}
}

void generate_world_object_node_array()
{
	jgl::File file = jgl::open_file("result_world_object_node_array.txt", jgl::File_mode::out);

	jgl::Size_t index = 0;


	print_node(file, index, "Grass", jgl::Vector2Int(0, 0), true, false, 1);
	print_node(file, index, "Forest", jgl::Vector2Int(4, 0), true, false, 1);
	print_node(file, index, "Sand", jgl::Vector2Int(8, 0), true, false, 1);
	print_node(file, index, "Dirt", jgl::Vector2Int(12, 0), true, false, 1);
	print_node(file, index, "Road", jgl::Vector2Int(16, 0), true, false, 1);
	print_node(file, index, "Stone", jgl::Vector2Int(20, 0), true, false, 1);
	print_node(file, index, "Stone - dark", jgl::Vector2Int(24, 0), true, false, 1);
	print_node(file, index, "Enchanted forest", jgl::Vector2Int(28, 0), true, false, 1);

	print_node(file, index, "Brown stone", jgl::Vector2Int(0, 6), true, false, 1);
	print_node(file, index, "Wood plank", jgl::Vector2Int(4, 6), true, false, 1);
	print_node(file, index, "Tiled stone", jgl::Vector2Int(8, 6), true, false, 1);
	print_node(file, index, "Wall interior", jgl::Vector2Int(12, 6), true, true, 1);
	print_node(file, index, "Lava", jgl::Vector2Int(16, 6), true, true, 4);

	print_node(file, index, "Water", jgl::Vector2Int(0, 12), true, true, 4);
	print_node(file, index, "Deep water", jgl::Vector2Int(16, 12), true, true, 4);

	print_node(file, index, "Dungeon - Purple", jgl::Vector2Int(0, 18), true, false, 1);
	print_node(file, index, "Dungeon - Red", jgl::Vector2Int(4, 18), true, false, 1);
	print_node(file, index, "Dungeon - Blue", jgl::Vector2Int(8, 18), true, false, 1);
	print_node(file, index, "Dungeon - Green", jgl::Vector2Int(12, 18), true, false, 1);
	print_node(file, index, "Dungeon - White", jgl::Vector2Int(16, 18), true, false, 1);
	print_node(file, index, "Dungeon - Black", jgl::Vector2Int(20, 18), true, false, 1);
	print_node(file, index, "Dungeon - Orange", jgl::Vector2Int(24, 18), true, false, 1);
	print_node(file, index, "Dungeon - Pink", jgl::Vector2Int(28, 18), true, false, 1);

	jgl::Size_t line = 24;

	for (jgl::Int y = 0; y < 3; y++)
	{
		generate_wall(file, index, line);
	}


	print_node(file, index, "Undefined", jgl::Vector2Int(0, line), true, false, 1);
	print_node(file, index, "Undefined", jgl::Vector2Int(4, line), true, false, 1);
	print_node(file, index, "Undefined", jgl::Vector2Int(8, line), true, false, 1);
	print_node(file, index, "Undefined", jgl::Vector2Int(12, line), true, false, 1);
	print_node(file, index, "Undefined", jgl::Vector2Int(16, line), true, false, 1);
	print_node(file, index, "Undefined", jgl::Vector2Int(20, line), true, false, 1);
	print_node(file, index, "Undefined", jgl::Vector2Int(24, line), true, false, 1);
	print_node(file, index, "Undefined", jgl::Vector2Int(28, line), true, false, 1);

	line = 42;

	while (line < 66)
	{
		for (jgl::Size_t x = 0; x < 32; x++)
		{
			if (line == 42)
			{
				if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
			}
			if (line == 43 || line == 45 || line == 47)
			{
				if (x > 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
			}
			if (line == 44 || line == 46 || line == 48)
			{
				print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
			}
			if (line == 49)
			{
				if (x < 12)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
			}
			if (line == 50)
			{
				if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
			}
			if (line == 51 || line == 53)
			{
				if (x < 8)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
			}
			if (line == 52)
			{
				if (x < 8)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
			}
			if (line == 54)
			{
				if (x < 8)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 4);
			}
			if (line == 55)
			{
				if (x < 6)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else if(x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 4);
			}
			if (line == 56)
			{
				if (x < 6)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else if (x < 8)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 4);
			}
			if (line == 57)
			{
				if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 4);
			}
			if (line == 58)
			{
				if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Flower", jgl::Vector2Int(x, line), false, false, 4);
			}
			if (line == 59)
			{
				if (x < 8)
					print_node(file, index, "Ruin", jgl::Vector2Int(x, line), false, true, 1);
				else if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, false, 4);
			}
			if (line == 60)
			{
				if (x < 4)
					print_node(file, index, "Ruin", jgl::Vector2Int(x, line), false, true, 1);
				else if (x < 8)
					print_node(file, index, "Ruin", jgl::Vector2Int(x, line), false, false, 1);
				else if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 4);
			}
			if (line == 61)
			{
				if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Torch", jgl::Vector2Int(x, line), false, false, 4);
			}
			if (line == 62 || line == 63 || line == 64 || line == 65)
			{
				if (x < 16)
					print_node(file, index, "Undefined", jgl::Vector2Int(x, line), false, true, 1);
				else if (x >= 16 && x % 4 == 0)
					print_node(file, index, "Fire", jgl::Vector2Int(x, line), false, false, 4);
			}
		}

		line++;
	}


	file.close();
}

void generate_world_object_scenery_array()
{
	jgl::File file = jgl::open_file("result_world_object_scenery_array.txt", jgl::File_mode::out);

	jgl::Size_t index = 0;
	for (jgl::Size_t y = 0; y < World_object::Prefab::C_TEXTURE_SIZE.y; y++)
	{
		for (jgl::Size_t x = 0; x < World_object::Prefab::C_TEXTURE_SIZE.x; x++)
		{
			file << "new World_object::Prefab(\"Unknow\", jgl::Vector2Int(" << x << ", " << y << "), jgl::Vector2Int(0, 0), jgl::Vector2Int(1, 1), {0}),//  " << index << std::endl;
			index++;
		}
	}

	file.close();
}