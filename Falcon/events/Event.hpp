#ifndef _FALCON_EVENTS_EVENT_HPP_
#define _FALCON_EVENTS_EVENT_HPP_

#include <SDL2/SDL.h>
#include "EventType.hpp"

namespace Falcon::Events
{
class EventHandler;

class Event
{
public:

  Event (const EventType & type);
  
  virtual ~Event (void);
  
  EventType getType (void) const;
  
  bool operator == (const Event & rhs) const;
  
  bool operator != (const Event & rhs) const;
  
  virtual void accept (EventHandler & handler) const = 0;

protected:

  EventType type_;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_EVENT_HPP_
