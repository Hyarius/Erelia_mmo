#include "erelia.h"

namespace Multiplayer
{
	void Entity_updater::_on_geometry_change()
	{

	}

	void Entity_updater::_render()
	{
		
	}

	jgl::Bool Entity_updater::_update()
	{
		return (false);
	}

	jgl::Bool Entity_updater::_fixed_update()
	{
		return (false);
	}


	Entity_updater::Entity_updater(Engine* p_engine, jgl::Widget* p_parent) : jgl::Widget(p_parent),
		_engine(p_engine)
	{

	}
}