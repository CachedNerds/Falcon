#pragma once

#include <SDL2/SDL.h>
#include "SdlEvent.hpp"

namespace falcon::sdl::events
{

class EventHandler;

class MouseMotion : public SdlEvent
{
public:
  MouseMotion (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::sdl::events