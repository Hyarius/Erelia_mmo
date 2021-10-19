#include "erelia_client.h"

void Client_updater::_on_geometry_change()
{

}

void Client_updater::_render()
{

}

bool Client_updater::_update()
{
	static Connection::State lastState = Connection::State::Unknown;

	_client->update();

	if (lastState != Connection::State::Accepted && _client->connection()->state() == Connection::State::Accepted)
	{
		static_cast<Client_application*>(_parent)->connection_complete();
		lastState = _client->connection()->state();
	}
	return (false);
}

bool Client_updater::_fixed_update()
{
	return (false);
}

Client_updater::Client_updater(Client* p_client, jgl::Widget* p_parent) : jgl::Widget(p_parent)
{
	_client = p_client;
}