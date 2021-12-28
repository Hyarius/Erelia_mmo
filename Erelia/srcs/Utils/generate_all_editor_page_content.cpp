#include "erelia.h"

void print_editor_item(jgl::File& file, jgl::Int x, jgl::Int y, jgl::Int value)
{
	file << "{jgl::Vector2Int(" << x << ", " << y << "), " << value << "}," << std::endl;
}

void generate_all_editor_page_content()
{
	jgl::File file = jgl::open_file("result_editor_page_content.txt", jgl::File_mode::out);

	for (jgl::Size_t i = 0; i < 8; i++)
	{
		print_editor_item(file, i % 8, 0, i);
	}
	for (jgl::Size_t i = 0; i < 8; i++)
	{
		print_editor_item(file, i % 8, 1, 15 + i);
	}
	for (jgl::Size_t i = 0; i < 7; i++)
	{
		print_editor_item(file, i % 4, 2 + i / 4, 8 + i);
	}

	jgl::Size_t line = 4;
	for (jgl::Size_t nb_wall = 0; nb_wall < 3; nb_wall++)
	{
		for (jgl::Size_t col = 0; col < 4; col++)
		{
			for (jgl::Size_t y = 0; y < 4; y++)
			{
				for (jgl::Size_t x = 0; x < 8; x++)
				{
					print_editor_item(file, x, line, 23 + x + col * 8 + y * 32 + nb_wall * 4 * 32);
				}
				line++;
			}
		}
	}
	for (jgl::Size_t i = 0; i < 8; i++)
	{
		print_editor_item(file, i % 8, line, i + 407);
	}
	line++;

	for (jgl::Size_t col = 0; col < 4; col++)
	{
		for (jgl::Size_t y = 0; y < 12; y++)
		{
			for (jgl::Size_t x = 0; x < 8; x++)
			{
				print_editor_item(file, x, line, 415 + x + col * 8 + y * 32);
			}
			line++;
		}
		for (jgl::Size_t y = 0; y < 12; y++)
		{
			for (jgl::Size_t x = 0; x < 8; x++)
			{
				if (col == 0 || col == 1)
				{
					print_editor_item(file, x, line, 799 + x + col * 8 + y * 20);
				}
				else if (col == 2)
				{
					if (x % 4 == 0)
					{
						print_editor_item(file, x / 4, line, 799 + x / 4 + col * 8 + y * 20);
						print_editor_item(file, x / 4 + 2, line, 799 + x / 4 + 2 + col * 8 + y * 20);
					}
				}
			}
			line++;
		}
	}

	file.close();
}