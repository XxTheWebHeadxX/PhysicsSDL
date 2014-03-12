#include "SDL/SDL.h"

int main( int argc, char* args[] )
{
    //The Images
    SDL_Surface* helloImg = NULL;
    SDL_Surface* screen = NULL;
    SDL_Surface* ball = NULL;

    //Start SDL
    SDL_Init( SDL_INIT_EVERYTHING );

    //Screen Setup
    screen = SDL_SetVideoMode(640,480,32,SDL_SWSURFACE);

    //Load image
    helloImg = SDL_LoadBMP("hello.bmp");

    //Apply Image to screen
    SDL_BlitSurface(helloImg,NULL,screen,NULL);

    //Update Screen
    SDL_Flip(screen);

    //Pause
    SDL_Delay(3000);

    //Free the loaded Image
    SDL_FreeSurface(helloImg);

    //Quit SDL
    SDL_Quit();

    return 0;
}
