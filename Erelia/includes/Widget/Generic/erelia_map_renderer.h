#pragma once

#include "jgl.h"

#include "Widget/Generic/erelia_graphical_widget.h"
#include "Data/erelia_engine.h"

class Map_renderer : public Graphical_widget
{
private:
	Engine* _engine;
	Map* _map;

	void _on_geometry_change();
	void _render();

public:
	Map_renderer(Engine* p_engine, jgl::Widget* p_parent = nullptr);

	void change_map(jgl::String p_name);
};