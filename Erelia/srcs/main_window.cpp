#include "erelia.h"

void Main_window::_on_geometry_change()
{
	_map_controller->set_geometry(0, _area);
	_player_controller->set_geometry(0, _area);
	_entity_controller->set_geometry(0, _area);
}

void Main_window::_render()
{
	//jgl::draw_text("FPS : " + jgl::itoa(jgl::Application::active_application()->fps()), 50, 30, 1000, 1.0f, jgl::Color(255, 255, 255), jgl::Color(255, 255, 255));
}

Main_window::Main_window(jgl::Widget* p_parent) : jgl::Widget(p_parent)
{
	_engine = new Engine();

	_map_controller = Map_controller::create(_engine, Connection_type::Singleplayer, this);
	_entity_controller = Entity_controller::create(_engine, Connection_type::Singleplayer, this);
	_player_controller = Player_controller::create(_engine, Connection_type::Singleplayer, this);

}