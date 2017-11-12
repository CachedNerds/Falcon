#pragma once

#include "Event.hpp"
#include "Key.hpp"

namespace falcon::events
{

class KeyEvent : public Event
{
public:
  KeyEvent (const EventType & type, const Key & key);

  Key getKey (void) const;

protected:
  Key _key;
};

} // namespace falcon::events