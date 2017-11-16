#pragma once

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace falcon::events
{

class EventHandler;

class MouseDown : public Event
{
public:
  MouseDown (const SDL_Event & event);

  void accept (EventHandler & handler) const override;
};

} // namespace falcon::events