#include "erelia.h"

namespace Singleplayer
{
	Adventure_gamemode::Adventure_gamemode(Engine *p_engine, jgl::Widget* p_parent) : Graphical_widget(p_engine, p_parent),
		_engine(p_engine)
	{
		_player_command = new Singleplayer::Player_command(p_engine, this);
		_player_command->activate();
	}

	void Adventure_gamemode::_render()
	{

	}

	void Adventure_gamemode::_on_geometry_change()
	{

	}

	jgl::Bool Adventure_gamemode::_update()
	{
		return (false);
	}

	jgl::Bool Adventure_gamemode::_fixed_update()
	{
		return (false);
	}
}