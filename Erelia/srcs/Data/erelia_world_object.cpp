#include "erelia.h"

namespace World_object
{

	jgl::Sprite_sheet* Node::C_TEXTURE_SHEET = nullptr;
	jgl::Vector2Int Node::C_TEXTURE_SIZE = jgl::Vector2Int(32, 68);
	jgl::Size_t Node::C_SIZE = 64u;

	jgl::Sprite_sheet* Prefab::C_TEXTURE_SHEET = nullptr;
	jgl::Vector2Int Prefab::C_TEXTURE_SIZE = jgl::Vector2Int(8, 44);

	Node::Node(jgl::String p_name, jgl::Vector2Int p_sprite, jgl::Bool p_autotiled, jgl::Bool p_obstacle, jgl::Size_t p_animation_size) :
		name(p_name), sprite(p_sprite), animation_size(p_animation_size), autotiled(p_autotiled), obstacle(p_obstacle)
	{

	}

	Prefab::Prefab(jgl::String p_name, jgl::Vector2Int p_sprite, jgl::Vector2Int p_size, jgl::Array<jgl::Int> p_composition, jgl::Array<jgl::Int> p_level) :
		name(p_name), sprite(p_sprite), size(p_size)
	{
		levels = new jgl::Int * [size.x];
		for (jgl::Int i = 0; i < size.x; i++)
			levels[i] = new jgl::Int[size.y];

		composition = new jgl::Int * [size.x];
		for (jgl::Int i = 0; i < size.x; i++)
			composition[i] = new jgl::Int[size.y];

		if (p_level.size() == 0)
		{
			for (jgl::Int i = 0; i < size.x; i++)
			{
				for (jgl::Int j = 0; j < size.y; j++)
				{
					levels[i][j] = 0;
				}
			}
		}
		else
		{
			for (jgl::Int i = 0; i < size.x; i++)
			{
				for (jgl::Int j = 0; j < size.y; j++)
				{
					levels[i][j] = p_level[i + j * size.x];
				}
			}
		}
		if (p_composition.size() == 0)
		{
			for (jgl::Int i = 0; i < size.x; i++)
			{
				for (jgl::Int j = 0; j < size.y; j++)
				{
					composition[i][j] = 0;
				}
			}
		}
		else
		{
			for (jgl::Int i = 0; i < size.x; i++)
			{
				for (jgl::Int j = 0; j < size.y; j++)
				{
					composition[i][j] = p_composition[i + j * size.x];
				}
			}
		}
	}
}