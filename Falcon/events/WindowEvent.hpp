#ifndef _FALCON_EVENTS_WINDOW_EVENT_HPP_
#define _FALCON_EVENTS_WINDOW_EVENT_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class EventHandler;

class WindowEvent : public Event
{
public:

  WindowEvent (const SDL_Event & event);

  void accept (EventHandler & handler) override;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_WINDOW_EVENT_HPP_
