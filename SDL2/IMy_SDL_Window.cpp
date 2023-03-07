#include "IMy_SDL_Window.h"

IMy_SDL_Window::IMy_SDL_Window() :
	IMy_SDL_Window::IMy_SDL_Window("SDl window",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		1000, 600,
		SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE) {}

IMy_SDL_Window::IMy_SDL_Window(const char name[], uint32_t x, uint32_t y, uint32_t Widh, uint32_t Heith, Uint32 Flags):
	m_X(x), m_Y(y), m_Widh(Widh), m_Heith(Heith), m_Name(name)
{
	if (ptr_window = SDL_CreateWindow(m_Name,
		m_X, m_Y,
		m_Widh, m_Heith,
		Flags);
		ptr_window == nullptr) {clog << "eror init window \n"; exit(1);}


	if (ptr_screen_Renderer = SDL_CreateRenderer(
		ptr_window,
		-1,
		SDL_RENDERER_ACCELERATED);
		ptr_screen_Renderer == nullptr) {clog << "eror init render \n"; exit(1);}
}



IMy_SDL_Window::~IMy_SDL_Window()
{
	if (ptr_screen_Renderer != nullptr) SDL_DestroyRenderer(ptr_screen_Renderer);

	if (ptr_window != nullptr) SDL_DestroyWindow(ptr_window);
}
