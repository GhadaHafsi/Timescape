#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "enigme.h"

int main ()
{
   Enigme enigme;
   Enigme1Surface1 Enigme1Surface;
   Enigme1Rect1 Enigme1Rect;
   SDL_Surface screen;
   initialiser_enigme(&Enigme1Surface,&Enigme1Rect,&screen,&enigme);

return 0;

}
