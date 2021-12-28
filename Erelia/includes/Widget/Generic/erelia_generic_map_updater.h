#pragma once

#include "jgl.h"

#include "Widget/Generic/erelia_graphical_widget.h"
#include "Data/erelia_engine.h"

class Generic_map_updater : public Graphical_widget
{
protected:
	Engine* _engine;
	Map* _map;

public:
	Generic_map_updater(Engine* p_engine, jgl::Widget* p_parent = nullptr);
	void change_map(jgl::String p_name);
};