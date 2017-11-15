#pragma once

#include <SDL2/SDL.h>
#include "KeyEvent.hpp"

namespace falcon::sdl::events
{

class EventHandler;

class KeyUp : public KeyEvent
{
public:
  KeyUp (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::sdl::events