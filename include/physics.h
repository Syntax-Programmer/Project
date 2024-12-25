#ifndef PHYSICS_H
#define PHYSICS_H

#include <SDL.h>
#include <math.h>
#include <time.h>

extern void getDeltaTime(time_t* pStart, double* pDelta_time, int* pFrame_c);
extern SDL_Rect createRect(int x, int y, int w, int h);
extern void setRectPos(SDL_Rect* pRect, int x, int y);
extern void setRectSize(SDL_Rect* pRect, int w, int h);
extern void getMovOffset(int vel, double delta_time, int x_comp, int y_comp, int* pX_norm, int* pY_norm);
extern void moveRect(SDL_Rect* pRect, int x_offset, int y_offset);
extern int AABBCollision(const SDL_Rect* pRect1, const SDL_Rect* pRect2);

#endif