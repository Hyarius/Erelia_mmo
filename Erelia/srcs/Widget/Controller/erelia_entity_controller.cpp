#include "erelia.h"

void Entity_controller::_on_geometry_change()
{
	if (_updater != nullptr)
		_updater->set_geometry(_anchor, _area);
	if (_renderer != nullptr)
		_renderer->set_geometry(_anchor, _area);
}

void Entity_controller::_render()
{

}

Entity_controller::Entity_controller(Engine* p_engine, jgl::Widget* p_parent) : jgl::Widget(p_parent),
	_engine(p_engine),
	_updater(nullptr),
	_renderer(nullptr)
{

}

Entity_controller* Entity_controller::create(Engine* p_engine, Connection_type p_connection_type, jgl::Widget* p_parent)
{
	Entity_controller* result = new Entity_controller(p_engine, p_parent);

	if (p_connection_type == Connection_type::Singleplayer)
	{
		result->_updater = new Singleplayer::Entity_updater(p_engine, result);
		result->_renderer = new Entity_renderer(p_engine, result);
	}
	else if (p_connection_type == Connection_type::Multiplayer)
	{
		result->_updater = new Multiplayer::Entity_updater(p_engine, result);
		result->_renderer = new Entity_renderer(p_engine, result);
	}
	else if (p_connection_type == Connection_type::Host)
	{

	}

	result->_updater->activate();
	result->_renderer->set_depth(13);
	result->_renderer->activate();

	result->activate();

	return (result);
}