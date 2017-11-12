#pragma once

#include <SDL2/SDL.h>
#include "EventType.hpp"

namespace falcon::events
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
  EventType _type;
};

} // namespace falcon::events