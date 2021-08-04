#include <SDL.h>
#include <stdio.h>

int main() {
	SDL_Window* window = NULL;
  SDL_Surface* screenSurface = NULL;
	
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		fprintf(stderr, "[ERROR] Failed to initialise SDL\n%s\n", SDL_GetError());
	} else {
		window = SDL_CreateWindow("Pong", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
		
    if (!window) {
			fprintf(stderr, "[ERROR] Failed to create window\n%s\n", SDL_GetError());
		} else {
			screenSurface = SDL_GetWindowSurface(window);
			SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0x00, 0xFF));
			SDL_UpdateWindowSurface(window);
			SDL_Delay(2000);
			SDL_DestroyWindow(window);
		}
    
		SDL_Quit();
	}
	return 0;
}