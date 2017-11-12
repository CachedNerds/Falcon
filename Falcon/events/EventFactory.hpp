#pragma once

#include "Event.hpp"
#include <SDL2/SDL.h>
#include <memory>

namespace falcon::events
{

class EventFactory
{
public:
  std::unique_ptr<const Event> createKeyDown (const SDL_Event & event);
  std::unique_ptr<const Event> createKeyUp (const SDL_Event & event);
  std::unique_ptr<const Event> createQuit (const SDL_Event & event);
  std::unique_ptr<const Event> createMouseMotion (const SDL_Event & event);
  std::unique_ptr<const Event> createMouseDown (const SDL_Event & event);
  std::unique_ptr<const Event> createMouseUp (const SDL_Event & event);
  std::unique_ptr<const Event> createMouseWheel (const SDL_Event & event);
  std::unique_ptr<const Event> createWindowEvent (const SDL_Event & event);
  std::unique_ptr<const Event> createNullEvent (const SDL_Event & event);
};

} // namespace falcon::events