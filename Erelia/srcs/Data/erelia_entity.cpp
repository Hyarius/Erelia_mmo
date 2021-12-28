#include "erelia.h"

Entity::Entity(Engine* p_engine, jgl::Vector2Int p_pos, jgl::Long p_id) :
	_engine(p_engine), _id(p_id), _position(p_pos), _sprite(-1), _direction(Direction::South), _move_speed(100u)
{
	_reset_motion_data();
}

void Entity::move(jgl::Vector2Int p_delta)
{
	_destination = _position + p_delta;
	_movement = jgl::Vector2(p_delta) / _move_speed;
	_ticks_left = _move_speed;
}

void Entity::place(jgl::Vector2Int p_pos, Map* p_map)
{
	_map = p_map;
	_position = p_pos;
	_reset_motion_data();
	_engine->set_active_map(_map);
}

jgl::Bool Entity::is_in_motion()
{
	return (_ticks_left != 0);
}

void Entity::update_position(jgl::Ulong p_delta_tick)
{
	if (_ticks_left > p_delta_tick)
	{
		_position += _movement * p_delta_tick;
		_ticks_left -= p_delta_tick;
	}
	else
	{
		_position = _destination;
		_reset_motion_data();
	}
}

void Entity::_reset_motion_data()
{
	_ticks_left = 0;
	_destination = _position;
	_movement = 0;
}

void Entity::render(jgl::Vector2Int p_anchor, jgl::Float p_depth)
{
	jgl::draw_rectangle_color(jgl::Color(0, 0, 255), p_anchor, World_object::Node::C_SIZE, p_depth);
}