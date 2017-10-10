#include "MouseMotion.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

MouseMotion::MouseMotion (const SDL_Event & event)
: Event (EventType::MouseMotion)
{

}

void MouseMotion::accept (EventHandler & handler) const
{
  handler.handleMouseMotion (*this);
}

} // namespace Falcon::Events