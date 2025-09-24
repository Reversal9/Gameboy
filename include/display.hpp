#include <SDL2/SDL.h>

#ifndef __DISPLAY__
#define __DISPLAY__
class Display {
private:
  SDL_Window *window {nullptr};
  SDL_Surface *screenSurface {nullptr};

public:
  void initialize();
  void close();
};
#endif
