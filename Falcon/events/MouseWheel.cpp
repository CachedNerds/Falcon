#include "MouseWheel.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

MouseWheel::MouseWheel (const SDL_Event & event)
: Event (EventType::MouseWheel)
{

}

void MouseWheel::accept (EventHandler & handler)
{
  handler.handleMouseWheel (*this);
}

} // namespace Falcon::Events