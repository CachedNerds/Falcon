#include "MouseUp.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

MouseUp::MouseUp (const SDL_Event & event)
: Event (EventType::MouseUp)
{

}

void MouseUp::accept (EventHandler & handler) const
{
  handler.handleMouseUp (*this);
}

} // namespace Falcon::Events