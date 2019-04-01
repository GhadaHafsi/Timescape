#include <stdio.h> 
#include <stdlib.h>
#include <SDL/SDL.h> 
#include <SDL/SDL_image.h>  
#include <SDL/SDL_ttf.h>
#include "enigme.h"

void initialiser_enigme(Enigme1Surface1 *Enigme1Surface,Enigme1Rect1 *Enigme1Rect,SDL_Surface *screen, Enigme *enigme)
{

enigme->etat=0;

SDL_Color white={255,255,255};

SDL_Color black={0,0,0};

TTF_Init();

TTF_Font* font;

font=TTF_OpenFont("Capture_it.ttf",25);


//Questions
Enigme1Surface->Q1=TTF_RenderText_Blended(font,"Q1 :",white);
Enigme1Surface->Q2=TTF_RenderText_Blended(font,"Q2 :",white);
Enigme1Surface->Q3=TTF_RenderText_Blended(font,"Q3 :",white);
Enigme1Surface->Q4=TTF_RenderText_Blended(font,"Q4 :",white);
Enigme1Surface->Q5=TTF_RenderText_Blended(font,"Q5 :",white);
Enigme1Surface->Q6=TTF_RenderText_Blended(font,"Q6 :",white);

//Reponses
Enigme1Surface->R1A=TTF_RenderText_Blended(font,"A:",black);
Enigme1Surface->R1B=TTF_RenderText_Blended(font,"B:",black);
Enigme1Surface->R1C=TTF_RenderText_Blended(font,"C:",black);

Enigme1Surface->R2A=TTF_RenderText_Blended(font,"A:",black);
Enigme1Surface->R2B=TTF_RenderText_Blended(font,"B:",black);
Enigme1Surface->R2C=TTF_RenderText_Blended(font,"C:",black);

Enigme1Surface->R3A=TTF_RenderText_Blended(font,"A:",black);
Enigme1Surface->R3B=TTF_RenderText_Blended(font,"B:",black);
Enigme1Surface->R3C=TTF_RenderText_Blended(font,"C:",black);

Enigme1Surface->R4A=TTF_RenderText_Blended(font,"A:",black);
Enigme1Surface->R4B=TTF_RenderText_Blended(font,"B:",black);
Enigme1Surface->R4C=TTF_RenderText_Blended(font,"C:",black);

Enigme1Surface->R5A=TTF_RenderText_Blended(font,"A:",black);
Enigme1Surface->R5B=TTF_RenderText_Blended(font,"B:",black);
Enigme1Surface->R5C=TTF_RenderText_Blended(font,"C:",black);

Enigme1Surface->R6A=TTF_RenderText_Blended(font,"A:",black);
Enigme1Surface->R6B=TTF_RenderText_Blended(font,"B:",black);
Enigme1Surface->R6C=TTF_RenderText_Blended(font,"C:",black);


Enigme1Rect->Q1Pos.x=(screen->w - Enigme1Surface->Q1->w) /2;
Enigme1Rect->Q1Pos.y=0;

Enigme1Rect->Q2Pos.x=(screen->w - Enigme1Surface->Q2->w) /2;
Enigme1Rect->Q2Pos.y=0;

Enigme1Rect->Q3Pos.x=(screen->w - Enigme1Surface->Q3->w) /2;
Enigme1Rect->Q3Pos.y=0;

Enigme1Rect->Q4Pos.x=(screen->w - Enigme1Surface->Q4->w) /2;
Enigme1Rect->Q4Pos.y=0;

Enigme1Rect->Q5Pos.x=(screen->w - Enigme1Surface->Q5->w) /2;
Enigme1Rect->Q5Pos.y=0;

Enigme1Rect->Q6Pos.x=(screen->w - Enigme1Surface->Q6->w) /2;
Enigme1Rect->Q6Pos.y=0;


Enigme1Rect->R1APos.x=100;
Enigme1Rect->R1APos.y=400;

Enigme1Rect->R1BPos.x=300;
Enigme1Rect->R1BPos.y=400;

Enigme1Rect->R1CPos.x=500;
Enigme1Rect->R1CPos.y=400;

Enigme1Rect->R2APos.x=100;
Enigme1Rect->R2APos.y=400;

Enigme1Rect->R2BPos.x=300;
Enigme1Rect->R2BPos.y=400;

Enigme1Rect->R2CPos.x=500;
Enigme1Rect->R2CPos.y=400;

Enigme1Rect->R3APos.x=100;
Enigme1Rect->R3APos.y=400;

Enigme1Rect->R3BPos.x=300;
Enigme1Rect->R3BPos.y=400;

Enigme1Rect->R3CPos.x=500;
Enigme1Rect->R3CPos.y=400;

Enigme1Rect->R4APos.x=100;
Enigme1Rect->R4APos.y=400;

Enigme1Rect->R4BPos.x=300;
Enigme1Rect->R4BPos.y=400;

Enigme1Rect->R4CPos.x=500;
Enigme1Rect->R4CPos.y=400;

Enigme1Rect->R5APos.x=100;
Enigme1Rect->R5APos.y=400;

Enigme1Rect->R5BPos.x=300;
Enigme1Rect->R5BPos.y=400;

Enigme1Rect->R5CPos.x=500;
Enigme1Rect->R5CPos.y=400;

Enigme1Rect->R6APos.x=100;
Enigme1Rect->R6APos.y=400;

Enigme1Rect->R6BPos.x=300;
Enigme1Rect->R6BPos.y=400;

Enigme1Rect->R6CPos.x=500;
Enigme1Rect->R6CPos.y=400;
}
