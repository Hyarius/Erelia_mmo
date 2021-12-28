#pragma once

#include "jgl.h"

#include "erelia_connection_data.h"

#include "Widget/Generic/erelia_entity_renderer.h"

#include "Widget/Multiplayer/erelia_entity_updater_multiplayer.h"
#include "Widget/Singleplayer/erelia_entity_updater_singleplayer.h"

class Entity_controller : public jgl::Widget
{
private:
	Engine* _engine;

	jgl::Widget* _updater;
	jgl::Widget* _renderer;

	void _on_geometry_change();

	void _render();

	Entity_controller(Engine* p_engine, jgl::Widget* p_parent = nullptr);

public:
	static Entity_controller* create(Engine* p_engine, Connection_type p_connection_type, jgl::Widget* p_parent = nullptr);
};
