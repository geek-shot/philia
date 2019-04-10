#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <SDL/SDL.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include"background.h"

struct Background{
	SDL_Surface *backgroundImg;
	SDL_Rect backgroundPos;
};
typedef struct Background Background;

int loadBackground(Background *Backg);
void initBackground(Background *Backg);
void freeBackground(Background *Backg);
void blitBackground(Background*Backg,SDL_Surface *screen);

#endif
