#include "MouseUp.hpp"
#include "EventHandler.hpp"

namespace falcon::events
{

MouseUp::MouseUp (const SDL_Event & event)
: Event(EventType::MouseUp)
{

}

void MouseUp::accept (EventHandler & handler) const
{
  handler.handleMouseUp(*this);
}

} // namespace falcon::events