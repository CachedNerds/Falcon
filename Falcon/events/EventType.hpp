#ifndef _FALCON_EVENTS_EVENT_TYPE_HPP_
#define _FALCON_EVENTS_EVENT_TYPE_HPP_

#include <SDL2/SDL.h>

namespace Falcon::Events
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

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_EVENT_TYPE_HPP_
