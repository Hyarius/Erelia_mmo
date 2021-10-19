#pragma once

#include "jgl.h"
#include "erelia_commun.h"

class Client_updater : public jgl::Widget
{
private:
	Client* _client;

	void _on_geometry_change();
	void _render();

	bool _update();
	bool _fixed_update();

public:
	Client_updater(Client* p_client, jgl::Widget* p_parent = nullptr);
};