#include "KeyEvent.hpp"

namespace falcon::sdl::events
{

KeyEvent::KeyEvent (const EventType & type, const Key & key)
: SdlEvent(type)
, _key(key)
{

}

Key KeyEvent::getKey (void) const
{
  return _key;
}

} // namespace falcon::sdl::events