#include "erelia.h"

void Entity_renderer::_on_geometry_change()
{

}

void Entity_renderer::_render()
{
	for (auto tmp : _engine->entities())
	{
		tmp.second->render(convert_world_to_screen(tmp.second->pos()), _depth);
	}
}

Entity_renderer::Entity_renderer(Engine* p_engine, jgl::Widget* p_parent) : Graphical_widget(p_engine, p_parent),
	_engine(p_engine)
{

}