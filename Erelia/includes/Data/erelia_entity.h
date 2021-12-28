#pragma once

#include "jgl.h"

class Entity
{
public:
	enum class Direction : unsigned char
	{
		South = 0,
		East = 1,
		West = 2,
		North = 3
	};

	static const jgl::Long C_UNKNOW_ID = -1;

protected:
	class Engine* _engine;
	class Map* _map;

	jgl::Long _id;
	jgl::Vector2 _position;
	Direction _direction;
	jgl::Vector2Int _sprite;

	jgl::Ulong _ticks_left;
	jgl::Vector2 _destination;
	jgl::Vector2 _movement;
	jgl::Ulong _move_speed;

public:
	Entity(class Engine *p_engine, jgl::Vector2Int p_pos, jgl::Long p_id = C_UNKNOW_ID);

	void render(jgl::Vector2Int p_anchor, jgl::Float p_depth);

	jgl::Long id() { return (_id); }
	void set_id(jgl::Long p_id) { _id = p_id; }

	jgl::Vector2 pos() { return (_position); }
	void move(jgl::Vector2Int p_delta);
	void place(jgl::Vector2Int p_pos, class Map* p_map);

	jgl::Bool is_in_motion();
	void update_position(jgl::Ulong p_delta_tick);
	void _reset_motion_data();

	class Map* map() { return (_map); }
};