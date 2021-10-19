#pragma once

#include "jgl.h"

#define SERVER_PORT 62500
#define SERVER_ADDR "127.0.0.1"

enum class Server_message
{
	Chunk_request = 0,
	Chunk_content = 1
};

using Connection = jgl::Connection<Server_message>;
using Message = jgl::Message<Server_message>;
using Client = jgl::Client<Server_message>;
using Server = jgl::Server<Server_message>;

namespace Constant
{
	namespace World
	{

	};

	struct Texture_size
	{
		static const jgl::Vector2Uint node;
		static const jgl::Vector2Uint scenery;
	};

	struct Chunk
	{
		static const jgl::Size_t size = 16u;

		static const jgl::Size_t nb_layer = 5u;
	};

	struct Node
	{
		static const jgl::Size_t size = 32u;
	};
};

namespace World_object
{
	struct Node
	{
		static jgl::Sprite_sheet* texture;
		jgl::String name;
		jgl::Size_t animation_size;
		jgl::Vector2Int sprite;
		jgl::Bool autotiled;
		jgl::Bool walkable;

		Node(jgl::String p_name = "Undefined", jgl::Size_t p_animation_size = 0, jgl::Vector2Int p_sprite = -1, jgl::Bool p_autotiled = false, jgl::Bool p_walkable = true)
		{
			name = p_name;
			animation_size = p_animation_size;
			sprite = p_sprite;
			autotiled = p_autotiled;
			walkable = p_walkable;
		}
		friend std::ostream& operator<<(std::ostream& os, const Node& other)
		{
			os << other.name << "[Anim : " << other.animation_size << "][Sprite : " << other.sprite << "]";
			return os;
		}
	};

	struct Scenery
	{
		jgl::String name;
		jgl::Int id;
		jgl::Size_t base_sprite;
		jgl::Vector2Int size;

		Scenery(jgl::String p_name = "Undefined", jgl::Int p_id = -1, jgl::Size_t p_base_sprite = 0u, jgl::Vector2Int p_size = 1)
		{
			name = p_name;
			id = p_id;
			base_sprite = p_base_sprite;
			size = p_size;
		}
		friend std::ostream& operator<<(std::ostream& os, const Scenery& other)
		{
			os << other.name << "[Id : " << other.id << "]";
			return os;
		}
	};

	struct Scenery_part
	{
		static jgl::Sprite_sheet* texture;
		jgl::Vector2Int sprite;
		jgl::Bool autotiled;
		jgl::Size_t animation_size;
		jgl::Bool obstacle;

		Scenery_part(jgl::Vector2Int p_sprite = 0, jgl::Bool p_autotiled = false, jgl::Bool p_obstacle = true, jgl::Size_t p_animation_size = 0)
		{
			autotiled = p_autotiled;
			sprite = p_sprite;
			obstacle = p_obstacle;
			animation_size = p_animation_size;
		}
		friend std::ostream& operator<<(std::ostream& os, const Scenery_part& other)
		{
			os << "Scenery part : " << other.sprite << "[" << other.animation_size << "]";
			return os;
		}
	};

	extern jgl::Array<Node> g_node_array;
	extern jgl::Array<Scenery> g_scenery_array;
	extern jgl::Array<Scenery_part> g_scenery_part_array;
};

namespace Data_structure
{
	struct Chunk
	{
		jgl::Vector2Int pos;
		jgl::Char nodes[Constant::Chunk::size][Constant::Chunk::size];
		jgl::Short sceneries[Constant::Chunk::size][Constant::Chunk::size][Constant::Chunk::nb_layer];

		Chunk(jgl::Vector2Int p_pos = 0)
		{
			pos = p_pos;
			for (jgl::Size_t i = 0; i < Constant::Chunk::size; i++)
			{
				for (jgl::Size_t j = 0; j < Constant::Chunk::size; j++)
				{
					nodes[i][j] = -1;
					for (jgl::Size_t h = 0; h < Constant::Chunk::nb_layer; h++)
					{
						sceneries[i][j][h] = -1;
					}
				}
			}
		}
	};

	struct Entity
	{
		enum class Direction : unsigned char
		{
			South = 0,
			East = 1,
			West = 2,
			North = 3
		};
		jgl::Long id;
		jgl::Vector2 position;
		Direction direction;
	};
};