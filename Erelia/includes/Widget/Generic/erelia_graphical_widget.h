#pragma once

#include "jgl.h"

#include "Data/erelia_engine.h"

class Graphical_widget : public jgl::Widget
{
private:
	Engine* _inside_graphical_widget_engine;

public:
	Graphical_widget(Engine* p_engine, jgl::Widget* p_parent = nullptr);

	jgl::Vector2Int convert_world_to_screen(jgl::Vector2 p_pos);
	jgl::Vector3Int convert_screen_to_world(jgl::Vector2Int p_pos, jgl::Int p_level);
	jgl::Vector2 convert_screen_to_world(jgl::Vector2Int p_pos);
	jgl::Vector2 convert_screen_to_chunk(jgl::Vector2Int p_pos);
};