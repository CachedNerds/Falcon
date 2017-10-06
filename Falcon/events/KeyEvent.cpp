#include "KeyEvent.hpp"

namespace Falcon::Events
{

KeyEvent::KeyEvent (const EventType & type, const Key & key)
: Event (type)
, key_ (key)
{

}

Key KeyEvent::getKey (void) const
{
  return this->key_;
}

} // namespace Falcon::Events