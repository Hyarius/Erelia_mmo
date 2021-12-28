#include "erelia.h"

void Player_controller::_on_geometry_change()
{
	if (_updater != nullptr)
		_updater->set_geometry(_anchor, _area);
}

void Player_controller::_render()
{

}

Player_controller::Player_controller(Engine* p_engine, jgl::Widget* p_parent) : jgl::Widget(p_parent),
	_engine(p_engine),
	_updater(nullptr)
{

}

Player_controller* Player_controller::create(Engine* p_engine, Connection_type p_connection_type, jgl::Widget* p_parent)
{
	Player_controller* result = new Player_controller(p_engine, p_parent);

	if (p_connection_type == Connection_type::Singleplayer)
	{
		p_engine->player()->set_id(0);
		p_engine->player()->place(0, p_engine->map("Overworld"));
		p_engine->add_entity(p_engine->player());

		result->_updater = new Singleplayer::Player_updater(p_engine, result);
		result->_updater->set_depth(100);
		result->_updater->activate();
	}
	else if (p_connection_type == Connection_type::Multiplayer)
	{
		result->_updater = new Multiplayer::Player_updater(p_engine, result);
		result->_updater->activate();
	}
	else if (p_connection_type == Connection_type::Host)
	{

	}

	result->_updater->set_gamemode(2);
	result->activate();

	return (result);
}