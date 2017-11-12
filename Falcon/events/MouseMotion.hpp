#pragma once

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace falcon::events
{

class EventHandler;

class MouseMotion : public Event
{
public:
  MouseMotion (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::events