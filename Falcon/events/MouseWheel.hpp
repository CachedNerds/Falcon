#pragma once

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace falcon::events
{

class EventHandler;

class MouseWheel : public Event
{
public:
  MouseWheel (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::events