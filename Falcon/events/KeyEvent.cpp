#include "KeyEvent.hpp"

namespace falcon::events
{

KeyEvent::KeyEvent (const EventType & type, const Key & key)
: Event(type)
, _key(key)
{

}

Key KeyEvent::getKey (void) const
{
  return _key;
}

} // namespace falcon::events