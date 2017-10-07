#ifndef _FALCON_EVENTS_MOUSE_UP_HPP_
#define _FALCON_EVENTS_MOUSE_UP_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class EventHandler;

class MouseUp : public Event
{
public:

  MouseUp (const SDL_Event & event);

  void accept (EventHandler & handler) override;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_MOUSE_UP_HPP_
