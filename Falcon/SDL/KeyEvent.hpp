#pragma once

#include "SdlEvent.hpp"
#include "Key.hpp"

namespace falcon::sdl::events
{

class KeyEvent : public SdlEvent
{
public:
  KeyEvent (const EventType & type, const Key & key);

  Key getKey (void) const;

protected:
  Key _key;
};

} // namespace falcon::sdl::events