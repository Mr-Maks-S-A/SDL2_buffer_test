#pragma once
#include "Main.hpp"
#include <vector>
#include "IMy_SDL_Window.h"

class CApplication
{
private:
    //members
    IMy_SDL_Window window ;
    bool m_lop_woc = true;
    SDL_Event event;

    //vector<IMy_SDL_Window> m_windows
    
    //surse_inspector
    //surse_inspector
private:
    CApplication();
public:
    ~CApplication();
    /// <summary>
    /// необходима для инициализации класса приложения 
    /// </summary>
    /// <returns>указатель на инициалезированную память в куче  app*</returns>
    static  CApplication& getInstance();
public:
    //main func

    void main_loop();
};
