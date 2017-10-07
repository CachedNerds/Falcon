#include "MouseDown.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

MouseDown::MouseDown (const SDL_Event & event)
: Event (EventType::MouseDown)
{

}

void MouseDown::accept (EventHandler & handler)
{
  handler.handleMouseDown (*this);
}

} // namespace Falcon::Events