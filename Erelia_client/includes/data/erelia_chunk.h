#pragma once

#include "jgl.h"
#include "erelia_commun.h"

class Chunk
{
private:
	Data_structure::Chunk _data;
	jgl::Bool _baked;

	static jgl::Buffer* _element_buffer;
	static jgl::Buffer* _point_buffer;

	jgl::Buffer* _uvs_node_buffer;
	jgl::Buffer* _uvs_scenery_buffer[Constant::Chunk::nb_layer];
	
	void _bake_points(jgl::Shader* p_shader);
	void _bake_autotile(jgl::Array<jgl::Vector2>& p_uvs, jgl::Vector2 p_sprite, jgl::Vector2 p_unit);
	void _bake_tile(jgl::Array<jgl::Vector2>& p_uvs, jgl::Vector2 p_sprite, jgl::Vector2 p_unit);
	void _bake_nodes(jgl::Shader* p_shader);
	void _bake_sceneries(jgl::Shader* p_shader);

	void _render_nodes(jgl::Vector3& p_delta_pos, jgl::Float p_depth, jgl::Shader* p_shader);
	void _render_sceneries(jgl::Vector3& p_delta_pos, jgl::Int p_level, jgl::Float p_depth, jgl::Shader* p_shader);

public:
	Chunk(Data_structure::Chunk& p_data);

	jgl::Bool baked() { return (_baked); }

	void bake();
	void render(jgl::Float p_depth);

	void set_data(Data_structure::Chunk& p_data);
};