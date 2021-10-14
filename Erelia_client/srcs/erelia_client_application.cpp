#include "erelia_client.h"

void Client_application::_on_geometry_change()
{
	if (_renderer != nullptr)
		_renderer->set_geometry(_anchor, _area);
	if (_controller != nullptr)
		_controller->set_geometry(_anchor, _area);
}

void Client_application::_render()
{

}

Client_application::Client_application(jgl::Widget* p_parent) : jgl::Widget(p_parent),
	_engine(nullptr),
	_renderer(nullptr),
	_world_renderer(nullptr),
	_entity_renderer(nullptr),
	_ui_renderer(nullptr),
	_particule_renderer(nullptr),
	_controller(nullptr),
	_player_controller(nullptr),
	_interact_controller(nullptr),
	_console_controller(nullptr)
{
	//Creation des renderers
	_renderer = new jgl::Contener(this);
	_renderer->activate();

	_world_renderer = new Map_renderer(_renderer);
	_world_renderer->activate();

	_entity_renderer = new Entity_renderer(_renderer);
	_entity_renderer->activate();

	_ui_renderer = new UI_renderer(_renderer);
	_ui_renderer->activate();

	_particule_renderer = new Particule_renderer(_renderer);
	_particule_renderer->activate();

	_console_renderer = new Console_renderer(_renderer);
	_console_renderer->activate();


	//Creation des controllers
	_controller = new jgl::Contener(this);
	_controller->activate();

	_player_controller = new Player_controller(_controller);
	_player_controller->activate();

	_interact_controller = new Interact_controller(_controller);
	_interact_controller->activate();

	_console_controller = new Console_controller(_controller);
	_console_controller->activate();
}