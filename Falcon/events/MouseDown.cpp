#include "MouseDown.hpp"
#include "EventHandler.hpp"

namespace falcon::events
{

MouseDown::MouseDown (const SDL_Event & event)
: Event(EventType::MouseDown)
{

}

void MouseDown::accept (EventHandler & handler) const
{
  handler.handleMouseDown(*this);
}

} // namespace falcon::events