#include "NullEvent.hpp"
#include "EventHandler.hpp"

namespace falcon::events
{

NullEvent::NullEvent (const SDL_Event & event)
: Event(EventType::NullEvent)
{

}

void NullEvent::accept (EventHandler & handler) const
{
  handler.handleNullEvent(*this);
}

} // namespace falcon::events