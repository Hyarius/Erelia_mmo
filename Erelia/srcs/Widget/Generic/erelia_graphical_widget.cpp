#include "erelia.h"

Graphical_widget::Graphical_widget(Engine* p_engine, jgl::Widget* p_parent) : jgl::Widget(p_parent)
{
	_inside_graphical_widget_engine = p_engine;
}

jgl::Vector2Int Graphical_widget::convert_world_to_screen(jgl::Vector2 p_pos)
{
	jgl::Vector2 player_pos = _inside_graphical_widget_engine->player()->pos();

	jgl::Vector2 result = p_pos;

	result -= 0.5f;
	result -= player_pos;
	result *= World_object::Node::C_SIZE;
	result += _anchor + _area / 2;

	return (result);
}

jgl::Vector3Int Graphical_widget::convert_screen_to_world(jgl::Vector2Int p_pos, jgl::Int p_level)
{
	jgl::Vector2Int tmp_pos = convert_screen_to_world(p_pos);

	return (jgl::Vector3Int(tmp_pos.x, tmp_pos.y, p_level));
}

jgl::Vector2 Graphical_widget::convert_screen_to_world(jgl::Vector2Int p_pos)
{
	jgl::Vector2 player_pos = _inside_graphical_widget_engine->player()->pos();

	jgl::Vector2 result = p_pos;

	result -= _anchor + _area / 2;
	result /= World_object::Node::C_SIZE;
	result += player_pos;
	result += 0.5f;

	result = result.floor();

	return (result);
}

jgl::Vector2 Graphical_widget::convert_screen_to_chunk(jgl::Vector2Int p_pos)
{
	jgl::Vector2 player_pos = _inside_graphical_widget_engine->player()->pos();

	jgl::Vector2 result = p_pos;

	result -= jgl::Application::active_application()->size() / 2;
	result /= World_object::Node::C_SIZE;
	result += player_pos;
	result += 0.5f;

	result = result.floor();

	result /= Chunk::C_SIZE;

	result = result.floor();

	return (result);
}
