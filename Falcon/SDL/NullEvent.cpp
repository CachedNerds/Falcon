#include "NullEvent.hpp"
#include "EventHandler.hpp"

namespace falcon::sdl::events
{

NullEvent::NullEvent (const SDL_Event & event)
: SdlEvent(EventType::NullEvent)
{

}

void NullEvent::accept (EventHandler & handler) const
{
  handler.handleNullEvent(*this);
}

} // namespace falcon::sdl::events