#pragma once

#include <SDL2/SDL.h>
#include "KeyEvent.hpp"

namespace falcon::sdl::events
{

class EventHandler;

class KeyDown : public KeyEvent
{
public:
  KeyDown (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::sdl::events