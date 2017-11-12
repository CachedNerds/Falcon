#pragma once

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace falcon::events
{

class EventHandler;

class NullEvent : public Event
{
public:
  NullEvent (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::events