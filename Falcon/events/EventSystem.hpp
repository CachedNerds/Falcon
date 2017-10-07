#ifndef _FALCON_EVENTS_EVENT_SYSTEM_HPP_
#define _FALCON_EVENTS_EVENT_SYSTEM_HPP_

#include "Event.hpp"
#include "EventFactory.hpp"
#include "EventType.hpp"

#include <SDL2/SDL.h>
#include <map>
#include <memory>

namespace Falcon::Events
{

class Event;

class EventSystem
{
public:

  static EventSystem & instance (void);

  bool nextEvent (void);

  Event * getNextEvent (void);

private:

  EventSystem (void);

  SDL_Event event_;

  EventFactory eventFactory_;

  typedef Event * (EventFactory::*FACTORYMETHOD) (const SDL_Event &);
  std::map<EventType, FACTORYMETHOD> factoryMethods_;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_EVENT_SYSTEM_HPP_
