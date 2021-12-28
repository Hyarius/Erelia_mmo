#pragma once

#include "jgl.h"

#include "erelia_world_object.h"

class Chunk
{
public:
	static const jgl::Size_t C_SIZE = 16u;
	static const jgl::Size_t C_NB_LAYER = 7u;
	static const jgl::Size_t C_NB_ANIMATION_FRAME = 4u;

private:
	jgl::String _name;
	jgl::Vector2Int _pos;
	jgl::Short _content[C_SIZE][C_SIZE][C_NB_LAYER];
	Chunk* _neightbour_chunks[3][3];
	jgl::Bool _baked;

	static jgl::Bool _intern_variable_initialize;
	static jgl::Shader* _chunk_shader;
	static jgl::Uniform* _delta_pos_uniform;
	static jgl::Uniform* _texture_uniform;
	static jgl::Vector3* _chunk_point_array;
	static jgl::Vector2* _chunk_uv_array;
	static jgl::Size_t* _chunk_index_array;
	static jgl::Vector2 _delta_autotile_position[4];
	static jgl::Vector2 _delta_tile_position[4];
	static jgl::Vector2 _delta_uvs[4];
	static jgl::Uint _delta_indexes[6];

	static jgl::Vector2Int _baking_neightbour_node[4][3];
	static jgl::Vector2Int _baking_delta_node_sprite[4][2][2][2];

	struct Chunk_buffer_data
	{
		jgl::Buffer* point_buffer;
		jgl::Buffer* uv_buffer;
		jgl::Buffer* element_buffer;

		Chunk_buffer_data()
		{
			point_buffer = nullptr;
			uv_buffer = nullptr;
			element_buffer = nullptr;
		}
		void acquire()
		{
			point_buffer = Chunk::_chunk_shader->buffer("model_space")->copy();
			uv_buffer = Chunk::_chunk_shader->buffer("model_UV")->copy();
			element_buffer = Chunk::_chunk_shader->indexes_buffer()->copy();
		}
		void activate()
		{

		}
	};

	Chunk_buffer_data _fixed_buffers;
	Chunk_buffer_data _animated_buffers[C_NB_ANIMATION_FRAME];

	static void _init_internal_variable();

	jgl::Vector2Int _calc_sub_part_sprite(jgl::Int p_x, jgl::Int p_y, jgl::Int p_z, jgl::Size_t p_sub_part);
	void _bake_autotile(const World_object::Node* p_node, const jgl::Int& p_value, const jgl::Size_t& p_frame, const jgl::Int& p_x, const jgl::Int& p_y, const jgl::Int& p_z, jgl::Size_t& p_index, jgl::Size_t& p_index_indexes);
	
	void _bake_tile(const World_object::Node* p_node, const jgl::Int& p_value, const jgl::Size_t& p_frame, const jgl::Int& p_x, const jgl::Int& p_y, const jgl::Int& p_z, jgl::Size_t& p_index, jgl::Size_t& p_index_indexes);

	void _bake_fixed();
	void _bake_animated();

	void _render_fixed(jgl::Vector3 p_anchor);
	void _render_animated(jgl::Vector3 p_anchor, jgl::Size_t p_frame);

	void _find_neightbour_chunk(const class Map* p_map, jgl::Int x, jgl::Int y);

public:
	Chunk(jgl::Vector2Int p_pos = 0);
	void save(jgl::String p_path);
	void load(jgl::String p_path);

	void place_node(jgl::Vector3Int p_pos, jgl::Short p_value);

	jgl::Short& node(jgl::Vector3Int p_pos) { return (_content[p_pos.x][p_pos.y][p_pos.z]); }
	jgl::Short& node(jgl::Vector2Int p_pos, jgl::Int p_level) { return (_content[p_pos.x][p_pos.y][p_level]); }
	jgl::Short& node(jgl::Int p_x, jgl::Int p_y, jgl::Int p_z) { return (_content[p_x][p_y][p_z]); }

	jgl::Bool baked() { return (_baked); }

	void unbake(jgl::Bool p_reset_neightbour_chunk = false);
	void bake(const class Map* p_map);
	void rebake(const class Map* p_map);

	void render(jgl::Vector3 p_anchor, jgl::Size_t p_frame);
};