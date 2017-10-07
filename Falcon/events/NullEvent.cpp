#include "NullEvent.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

NullEvent::NullEvent (const SDL_Event & event)
: Event (EventType::NullEvent)
{

}

void NullEvent::accept (EventHandler & handler)
{
  handler.handleNullEvent (*this);
}

} // namespace Falcon::Events