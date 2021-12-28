#include "erelia.h"

namespace Singleplayer
{
	void Player_updater::_on_geometry_change()
	{
		resize_gamemode(_anchor, _area);
	}

	void Player_updater::_render()
	{
		
	}
	
	Player_updater::Player_updater(Engine* p_engine, jgl::Widget* p_parent) : Generic_player_updater(p_engine, p_parent),
		_engine(p_engine)
	{
		add_gamemode(new Singleplayer::Adventure_gamemode(_engine, this));
		add_gamemode(new Singleplayer::Editor_gamemode(_engine, this));
	}
}