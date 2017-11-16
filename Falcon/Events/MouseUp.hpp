#pragma once

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace falcon::events
{

class EventHandler;

class MouseUp : public Event
{
public:
  MouseUp (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::events
