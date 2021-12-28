#include "erelia.h"

Generic_map_updater::Generic_map_updater(Engine* p_engine, jgl::Widget* p_parent) : Graphical_widget(p_engine, p_parent),
	_engine(p_engine),
	_map(nullptr)
{

}

void Generic_map_updater::change_map(jgl::String p_name)
{
	_map = _engine->map(p_name);
}