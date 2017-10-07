#ifndef _FALCON_EVENTS_EVENT_LISTENER_HPP_
#define _FALCON_EVENTS_EVENT_LISTENER_HPP_

#include "Event.hpp"

namespace Falcon::Events
{

class EventListener
{
public:

  virtual void handleEvent (Event & event) = 0;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_EVENT_LISTENER_HPP_