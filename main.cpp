#include <iostream>
#include "SDL.h"

using namespace std;



int main( int argc, char* args[] )
{
    //Start SDL
    SDL_Init( SDL_INIT_EVERYTHING );

    //Quit SDL
    SDL_Quit();

    return 0;
}
