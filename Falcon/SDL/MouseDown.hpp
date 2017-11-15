#pragma once

#include <SDL2/SDL.h>
#include "SdlEvent.hpp"

namespace falcon::sdl::events
{

class EventHandler;

class MouseDown : public SdlEvent
{
public:
  MouseDown (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::sdl::events