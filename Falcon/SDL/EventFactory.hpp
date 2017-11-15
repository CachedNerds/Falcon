#pragma once

#include "SdlEvent.hpp"
#include <SDL2/SDL.h>
#include <memory>

namespace falcon::sdl::events
{

class EventFactory
{
public:
  std::unique_ptr<const SdlEvent> createKeyDown (const SDL_Event & event);
  std::unique_ptr<const SdlEvent> createKeyUp (const SDL_Event & event);
  std::unique_ptr<const SdlEvent> createQuit (const SDL_Event & event);
  std::unique_ptr<const SdlEvent> createMouseMotion (const SDL_Event & event);
  std::unique_ptr<const SdlEvent> createMouseDown (const SDL_Event & event);
  std::unique_ptr<const SdlEvent> createMouseUp (const SDL_Event & event);
  std::unique_ptr<const SdlEvent> createMouseWheel (const SDL_Event & event);
  std::unique_ptr<const SdlEvent> createWindowEvent (const SDL_Event & event);
  std::unique_ptr<const SdlEvent> createNullEvent (const SDL_Event & event);
};

} // namespace falcon::sdl::events