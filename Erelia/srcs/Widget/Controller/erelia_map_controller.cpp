#include "erelia.h"

void Map_controller::_on_geometry_change()
{
	if (_updater != nullptr)
		_updater->set_geometry(_anchor, _area);
	if (_renderer != nullptr)
		_renderer->set_geometry(_anchor, _area);
}

void Map_controller::_render()
{
	jgl::draw_text("FPS : " + jgl::itoa(jgl::Application::active_application()->fps()), jgl::Vector2Int(50, 50), 30, 10000, 1.0f, jgl::Color(255, 255, 255), jgl::Color());
}

Map_controller::Map_controller(Connection_type p_connection_type, Engine* p_engine, jgl::Widget* p_parent) : jgl::Widget(p_parent),
	_connection_type(p_connection_type),
	_engine(p_engine),
	_updater(nullptr),
	_renderer(nullptr)
{

}

void Map_controller::change_map(jgl::String p_name)
{
	if (_connection_type == Connection_type::Singleplayer)
	{
		static_cast<Singleplayer::Map_updater*>(_updater)->change_map(p_name);
		static_cast<Map_renderer*>(_renderer)->change_map(p_name);
	}
	else if (_connection_type == Connection_type::Multiplayer)
	{
		static_cast<Multiplayer::Map_updater*>(_updater)->change_map(p_name);
		static_cast<Map_renderer*>(_renderer)->change_map(p_name);
	}
	else if (_connection_type == Connection_type::Host)
	{

	}
}

Map_controller* Map_controller::create(Engine* p_engine, Connection_type p_connection_type, jgl::Widget* p_parent)
{
	Map_controller* result = new Map_controller(p_connection_type, p_engine, p_parent);

	if (p_connection_type == Connection_type::Singleplayer)
	{
		result->_updater = new Singleplayer::Map_updater(p_engine, result);
		result->_renderer = new Map_renderer(p_engine, result);
	}
	else if (p_connection_type == Connection_type::Multiplayer)
	{
		result->_updater = new Multiplayer::Map_updater(p_engine, result);
		result->_renderer = new Map_renderer(p_engine, result);
	}
	else if (p_connection_type == Connection_type::Host)
	{

	}

	result->change_map("Overworld");
	result->_updater->activate();
	result->_renderer->set_depth(10);
	result->_renderer->activate();

	result->activate();

	return (result);
}