#include <iostream>
#include <SDL.h>

int main(int argc, char* argv[])
{
    SDL_Window *window;                    // Declare a pointer

//    SDL_Init(SDL_INIT_EVERYTHING);              // Initialize SDL2
//
//    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
//        std::cout << "Fail to create window " << SDL_GetError();

    // Create an application window with the following settings:
    window = SDL_CreateWindow(
        "HIENCOI",                  // window title
        SDL_WINDOWPOS_CENTERED,           // initial x position
        SDL_WINDOWPOS_CENTERED,           // initial y position
        500,                               // width, in pixels
        500,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );


    // The window is open: could enter program loop here (see SDL_PollEvent())

    SDL_Delay(2000);   // Pause execution for 3000 milliseconds, for example

    // Close and destroy the window
    SDL_DestroyWindow(window);

    // Clean up
    SDL_Quit();
    return 0;
}
