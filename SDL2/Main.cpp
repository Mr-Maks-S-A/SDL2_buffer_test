#include "Main.hpp"
#include "Application.h"
#include "IMy_SDL_Window.h"

int main(int argc, char** args) 
{
	CApplication::getInstance();

	CApplication::getInstance().main_loop();

	return EXIT_SUCCESS;
}; 