#include "../include/display.hpp"

#include <iostream>

/* INFO:
 * Create an SDL window and screen surface.
 */
void Display::initialize() {
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    std::cerr << "SDL couldn't initialize! SDL_Error: " << SDL_GetError() << std::endl;
    return;
  }

  int screen_width {640};
  int screen_height {720};

  this->window = SDL_CreateWindow("Gameboy", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, screen_width, screen_height, SDL_WINDOW_SHOWN);

  if (!this->window) {
    std::cerr << "Window couldn't initialize! SDL_Error: " << SDL_GetError() << std::endl;
    return;
  }

  this->screenSurface = SDL_GetWindowSurface(this->window);
}

/* INFO:
 * Close SDL window and surface.
 */
void Display::close() {
  SDL_DestroyWindow(this->window);
  this->window = nullptr;
  this->screenSurface = nullptr;

  SDL_Quit();
}
