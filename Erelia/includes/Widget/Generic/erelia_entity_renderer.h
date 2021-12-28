#pragma once

#include "jgl.h"

#include "Widget/Generic/erelia_graphical_widget.h"
#include "Data/erelia_engine.h"

class Entity_renderer : public Graphical_widget
{
private:
	Engine* _engine;

	void _on_geometry_change();
	void _render();
public:
	Entity_renderer(Engine* p_engine, jgl::Widget* p_parent = nullptr);
};