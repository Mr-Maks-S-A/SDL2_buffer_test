#pragma once
#include "Main.hpp"
#include "IWidget.h"

class IMy_SDL_Window{
private:
	bool m_opportunity_to_interact = true;
	
	SDL_Window* ptr_window = nullptr;
	SDL_Renderer* ptr_screen_Renderer = nullptr;

	uint32_t m_X ,m_Y, m_Widh ,m_Heith , ID;
	const char* m_Name ;

	vector<IWidget> widgets;


public:
	//operator

	/*ISDL_Window& operator=(const ISDL_Window&& other);
	ISDL_Window& operator=(const ISDL_Window&  other);
	ISDL_Window(const ISDL_Window&& other);
	ISDL_Window(const ISDL_Window&  other);*/
public:
	//construct-distruct

	virtual ~IMy_SDL_Window();
	IMy_SDL_Window();
	IMy_SDL_Window(const char name[], uint32_t x, uint32_t y, uint32_t Widh, uint32_t Heith, Uint32 Flags);
public:
	//main func

	//virtual void update() = 0 ;
public:
	//event func
	// 
	//void resize();
};

