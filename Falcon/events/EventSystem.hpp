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

  std::unique_ptr<const Event> getNextEvent (void);

private:

  EventSystem (void);

  SDL_Event event_;

  EventFactory eventFactory_;

  typedef std::unique_ptr<const Event> (EventFactory::*CREATE_EVENT_METHOD) (const SDL_Event &);
  std::map<EventType, CREATE_EVENT_METHOD> factoryMethods_;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_EVENT_SYSTEM_HPP_
