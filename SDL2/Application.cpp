#include "Application.h"

CApplication::CApplication()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		clog << "SDL_INIT ERROR: " << SDL_GetError() << endl;
		exit(1);
	}
}

CApplication::~CApplication()
{
	SDL_Quit();
}

CApplication &CApplication::getInstance()
{
	static CApplication app;
	return app;
}

void CApplication::main_loop()
{
	while (m_lop_woc)
	{
		while (SDL_PollEvent(&event)) 
		{
			switch (event.type)
			{
			case SDL_QUIT:
				m_lop_woc = false;
				break;

			case SDL_WINDOWEVENT:
				if (event.window.event == SDL_WINDOWEVENT_SIZE_CHANGED)
				{
					//TODO изменять размер окна
					cout << "[Window resize] << " << event.type << endl;
				}
				break;
			case SDL_MOUSEBUTTONDOWN:
				if (event.button.button == SDL_BUTTON_LEFT)
				{
					//TODO обработка нажатия мышки
					cout << "[Mouse pressed] << " << event.type << endl;
				}
				break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.scancode)
				{
				case SDL_SCANCODE_1:
					cout << "[Button 1 pressed] << " << event.type << endl;
					break;
				default:
					break;
				}
				break;
			default:
				break;
			}
		}
	}
}
