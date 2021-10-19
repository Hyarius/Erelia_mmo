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

bool Client_application::_update()
{
	if (_map_renderer->missing_chunk().size() != 0)
	{
		Message msg(Server_message::Chunk_request);

		for (jgl::Size_t i = 0; i < _map_renderer->missing_chunk().size(); i++)
		{
			msg << _map_renderer->missing_chunk()[i];
			_engine->map()->set_chunk_asked(_map_renderer->missing_chunk()[i], true);
		}

		_client->send(msg);
		_map_renderer->clear_missing_chunk();
	}

	return (false);
}

bool Client_application::_fixed_update()
{
	return (false);
}

void Client_application::connection_complete()
{
	_renderer->activate();
	_controller->activate();
}

Client_application::Client_application(jgl::Widget* p_parent) : jgl::Widget(p_parent),
	_engine(nullptr),
	_client_updater(nullptr),
	_renderer(nullptr),
	_map_renderer(nullptr),
	_entity_renderer(nullptr),
	_ui_renderer(nullptr),
	_particule_renderer(nullptr),
	_controller(nullptr),
	_player_controller(nullptr),
	_interact_controller(nullptr),
	_console_controller(nullptr),
	_client(nullptr)
{
	_client = new Client();
	_client->add_activity(Server_message::Chunk_content, [&](Message& msg, jgl::Data_contener data) {_engine->received_chunk_data(msg); });
	_client->connect("127.168.0.1", SERVER_PORT);

	World_object::Node::texture = new jgl::Sprite_sheet("ressource/texture/tile_sheet.png", Constant::Texture_size::node);
	World_object::Scenery_part::texture = new jgl::Sprite_sheet("ressource/texture/scenery_sheet.png", Constant::Texture_size::scenery);

	_client_updater = new Client_updater(_client, this);
	_client_updater->activate();

	_engine = new Engine();

	//Creation des renderers
	_renderer = new jgl::Contener(this);

	_map_renderer = new Map_renderer(_engine->map(), _renderer);
	_map_renderer->activate();

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

	_player_controller = new Player_controller(_controller);
	_player_controller->activate();

	_interact_controller = new Interact_controller(_controller);
	_interact_controller->activate();

	_console_controller = new Console_controller(_controller);
	_console_controller->activate();
}