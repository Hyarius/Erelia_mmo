#pragma once

#include "jgl.h"
#include "erelia_commun.h"

#include "data/erelia_engine.h"

#include "widget/controller/erelia_console_controller.h"
#include "widget/controller/erelia_interact_controller.h"
#include "widget/controller/erelia_player_controller.h"

#include "widget/renderer/erelia_entity_renderer.h"
#include "widget/renderer/erelia_particule_renderer.h"
#include "widget/renderer/erelia_ui_renderer.h"
#include "widget/renderer/erelia_map_renderer.h"
#include "widget/renderer/erelia_console_renderer.h"

class Client_application : public jgl::Widget
{
private:
	//Renderer elements
	jgl::Contener* _renderer;
	Map_renderer* _world_renderer;
	Entity_renderer* _entity_renderer;
	UI_renderer* _ui_renderer;
	Particule_renderer* _particule_renderer;
	Console_renderer* _console_renderer;

	//Controller elements
	jgl::Contener* _controller;
	Player_controller* _player_controller;
	Interact_controller* _interact_controller;
	Console_controller* _console_controller;

	//Data contener
	Engine* _engine;

	void _on_geometry_change();
	void _render();

public:
	Client_application(jgl::Widget* p_parent = nullptr);
};