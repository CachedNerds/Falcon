#ifndef _FALCON_EVENTS_KEY_EVENT_HPP_
#define _FALCON_EVENTS_KEY_EVENT_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"
#include "Key.hpp"

namespace Falcon::Events
{

class EventHandler;

class KeyEvent : public Event
{
  public:

    KeyEvent (const EventType & type, const Key & key);

    Key getKey (void) const;

  protected:

    Key key_;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_KEY_EVENT_HPP_
