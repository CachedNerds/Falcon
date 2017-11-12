#include "MouseWheel.hpp"
#include "EventHandler.hpp"

namespace falcon::events
{

MouseWheel::MouseWheel (const SDL_Event & event)
: Event(EventType::MouseWheel)
{

}

void MouseWheel::accept (EventHandler & handler) const
{
  handler.handleMouseWheel(*this);
}

} // namespace falcon::events