#pragma once

#include "erelia_entity.h"

class Player : public Entity
{
private:

public:
	Player(class Engine* p_engine, jgl::Vector2Int p_pos, jgl::Long p_id);
};