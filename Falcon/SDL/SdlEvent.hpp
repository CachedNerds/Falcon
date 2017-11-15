#pragma once

#include "../Event.hpp"
#include "EventType.hpp"

namespace falcon::sdl::events
{

class SdlEvent : public Event
{
public:
  SdlEvent (const EventType & type);

  EventType getType (void) const;
  bool operator == (const SdlEvent & rhs) const;
  bool operator != (const SdlEvent & rhs) const;

protected:
  EventType _type;
};

} // namespace falcon::sdl::events