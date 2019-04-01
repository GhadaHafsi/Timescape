#ifndef ENIGME_H_
#define ENIGME_H_

typedef struct
{
	SDL_Surface *Q1,*Q2,*Q3,*Q4,*Q5,*Q6,*R1A,*R1B,*R1C,*R2A,*R2B,*R2C,*R3A,*R3B,*R3C,*R4A,*R4B,*R4C,*R5A,*R5B,*R5C,*R6A,*R6B,*R6C;

}Enigme1Surface1;

typedef struct
{
	SDL_Rect Q1Pos,Q2Pos,Q3Pos,Q4Pos,Q5Pos,Q6Pos,R1APos,R1BPos,R1CPos,R2APos,R2BPos,R2CPos,R3APos,R3BPos,R3CPos,R4APos,R4BPos,R4CPos,R5APos,R5BPos,R5CPos,R6APos,R6BPos,R6CPos;

}Enigme1Rect1;
typedef struct 
{
 int etat;
}Enigme;
void initialiser_enigme(Enigme1Surface1 *Enigme1Surface,Enigme1Rect1 *Enigme1Rect,SDL_Surface *screen, Enigme *enigme);
#endif
