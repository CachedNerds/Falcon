#pragma once

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace falcon::events
{

class EventHandler;

class WindowEvent : public Event
{
public:
  WindowEvent (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::events