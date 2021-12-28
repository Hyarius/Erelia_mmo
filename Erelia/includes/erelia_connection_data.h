#pragma once

#include "jgl.h"

enum class Server_message
{
	Error = -1
};

using Message = jgl::Message<Server_message>;
using Client = jgl::Client<Server_message>;
using Server = jgl::Server<Server_message>;
using Connection = jgl::Connection<Server_message>;

enum class Connection_type
{
	Singleplayer = 0,
	Multiplayer = 1,
	Host = 2
};