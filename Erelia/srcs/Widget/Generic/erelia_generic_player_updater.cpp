#include "erelia.h"

Generic_player_updater::Generic_player_updater(Engine* p_engine, jgl::Widget* p_parent) : Graphical_widget(p_engine, p_parent),
_generic_player_updater_engine(p_engine), _gamemode_index(0)
{
	add_gamemode(nullptr);
}

void Generic_player_updater::resize_gamemode(jgl::Vector2Int p_anchor, jgl::Vector2Int p_area)
{
	for (jgl::Size_t i = 0; i < _gamemode_collection.size(); i++)
	{
		if (_gamemode_collection[i] != nullptr)
			_gamemode_collection[i]->set_geometry(p_anchor, p_area);
	}
}

jgl::Bool Generic_player_updater::_update()
{
	jgl::Bool result = false;

	return (result);
}

jgl::Bool Generic_player_updater::_fixed_update()
{
	jgl::Bool result = false;

	return (result);
}


void Generic_player_updater::add_gamemode(jgl::Widget* p_new_gamemode)
{
	_gamemode_collection.push_back(p_new_gamemode);
}

void Generic_player_updater::set_gamemode(jgl::Size_t p_gamemode_index)
{
	if (_gamemode_index < _gamemode_collection.size() && _gamemode_collection[_gamemode_index] != nullptr)
		_gamemode_collection[_gamemode_index]->desactivate();
	_gamemode_index = p_gamemode_index;
	if (_gamemode_index < _gamemode_collection.size() && _gamemode_collection[_gamemode_index] != nullptr)
		_gamemode_collection[_gamemode_index]->activate();
}
