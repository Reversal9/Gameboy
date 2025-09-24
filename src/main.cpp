#include "../include/main.hpp"
#include "../include/display.hpp"

int main() {
  Display display{};
  display.initialize();

  // INFO: Hacky solution to keep the window up.

  SDL_Event e{};
  bool quit{false};

  while (!quit) {
    while (SDL_PollEvent(&e)) {
      if (e.type == SDL_QUIT) {
        quit = true;
      }
    }
  }

  display.close();
  return 0;
}
