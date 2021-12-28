#pragma once

#include "jgl.h"

namespace World_object
{
	struct Node
	{
	public:
		static jgl::Sprite_sheet* C_TEXTURE_SHEET;
		static jgl::Vector2Int C_TEXTURE_SIZE;

		static jgl::Size_t C_SIZE;

		jgl::String name;
		jgl::Vector2Int sprite;
		jgl::Size_t animation_size;
		jgl::Bool autotiled;
		jgl::Bool obstacle;

		Node(jgl::String p_name, jgl::Vector2Int p_sprite, jgl::Bool p_autotiled, jgl::Bool p_obstacle, jgl::Size_t p_animation_size);
	};

	struct Prefab
	{
	public:
		static jgl::Sprite_sheet* C_TEXTURE_SHEET;
		static jgl::Vector2Int C_TEXTURE_SIZE;

		jgl::String name;
		jgl::Vector2Int sprite;
		jgl::Vector2Int size;
		jgl::Int** levels;
		jgl::Int** composition;

		Prefab(jgl::String p_name, jgl::Vector2Int p_sprite, jgl::Vector2Int p_size, jgl::Array<jgl::Int> p_composition = jgl::Array<jgl::Int>(), jgl::Array<jgl::Int> p_level = jgl::Array<jgl::Int>());
	};

	extern jgl::Array<World_object::Node*> g_node_array;
	extern jgl::Array<World_object::Prefab*> g_prefab_array;
}

