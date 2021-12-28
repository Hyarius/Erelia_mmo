#pragma once

#include "Widget/Generic/erelia_graphical_widget.h"
#include "Data/erelia_engine.h"

class Generic_player_updater : public Graphical_widget
{
private:
	Engine* _generic_player_updater_engine;

	jgl::Size_t _gamemode_index;
	jgl::Array<jgl::Widget*> _gamemode_collection;

	jgl::Bool _update() final;
	jgl::Bool _fixed_update() final;

public:
	Generic_player_updater(Engine* p_engine, jgl::Widget* p_parent = nullptr);

	void resize_gamemode(jgl::Vector2Int p_anchor, jgl::Vector2Int p_area);

	void add_gamemode(jgl::Widget* p_new_gamemode);
	void set_gamemode(jgl::Size_t p_gamemode_index);
};