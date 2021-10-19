#include "erelia_server.h"

void Server_application::_on_geometry_change()
{
}

void Server_application::_render()
{
	_server->update();
}

void Server_application::_chunk_request(Message& msg)
{
	jgl::Vector2Int pos;
	Message result(Server_message::Chunk_content);

	while (msg.empty() == false)
	{
		msg >> pos;

		Chunk* tmp_chunk = _engine->request_chunk(pos);
		if (tmp_chunk != nullptr)
			result << tmp_chunk->data();
	}
	_server->send_to_all(result);
}

Server_application::Server_application(jgl::Widget* p_parent) : jgl::Widget(p_parent),
	_engine(nullptr),
	_updater(nullptr),
	_player_updater(nullptr),
	_map_updater(nullptr),
	_entity_updater(nullptr),
	_server(nullptr)
{
	_engine = new Engine();

	_server = new Server(SERVER_PORT);
	_server->add_activity(Server_message::Chunk_request, [&](Connection* client, Message& msg, jgl::Data_contener& data) { _chunk_request(msg); });
	_server->start();

	//Creation des renderers
	_updater = new jgl::Contener(this);
	_updater->activate();

	_player_updater = new Player_updater(_updater);
	_player_updater->activate();

	_map_updater = new Map_updater(_updater);
	_map_updater->activate();

	_entity_updater = new Entity_updater(_updater);
	_entity_updater->activate();
}