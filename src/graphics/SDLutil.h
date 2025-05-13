#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_video.h>

void InitSDL();
void InitSDLImage();

SDL_Window* InitWindow(char* name, int w, int h);
SDL_Window* InitWindowOPENGL(char* name, int w, int h);
SDL_Renderer* InitRenderer(SDL_Window* window);

