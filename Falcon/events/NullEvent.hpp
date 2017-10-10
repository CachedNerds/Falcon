#ifndef _FALCON_EVENTS_NULL_EVENT_HPP_
#define _FALCON_EVENTS_NULL_EVENT_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class EventHandler;

class NullEvent : public Event
{
public:

  NullEvent (const SDL_Event & event);

  void accept (EventHandler & handler) const override;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_NULL_EVENT_HPP_
