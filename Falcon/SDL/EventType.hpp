#pragma once

#include <SDL2/SDL.h>

namespace falcon::sdl::events
{

enum class EventType
{
  NullEvent = 0,
  KeyDown = SDL_KEYDOWN,
  KeyUp = SDL_KEYUP,
  Quit = SDL_QUIT,
  MouseMotion = SDL_MOUSEMOTION,
  MouseDown = SDL_MOUSEBUTTONDOWN,
  MouseUp = SDL_MOUSEBUTTONUP,
  MouseWheel = SDL_MOUSEWHEEL,
  WindowEvent = SDL_WINDOWEVENT
};

} // namespace falcon::sdl::events