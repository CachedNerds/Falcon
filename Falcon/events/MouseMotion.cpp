#include "MouseMotion.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

MouseMotion::MouseMotion (const SDL_Event & event)
: Event (EventType::MouseMotion)
{

}

void MouseMotion::accept (EventHandler & handler)
{
  handler.handleMouseMotion (*this);
}

} // namespace Falcon::Events