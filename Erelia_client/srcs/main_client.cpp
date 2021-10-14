#include "erelia_client.h"

int main()
{
	jgl::Application app("Erelia client", jgl::Vector2Int(640, 640), jgl::Color(50, 50, 50));
	
	Client_application main_app;
	main_app.set_geometry(0, app.size());
	main_app.activate();

	return (app.run());
}