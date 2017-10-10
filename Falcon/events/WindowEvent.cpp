#include "WindowEvent.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

WindowEvent::WindowEvent (const SDL_Event & event)
: Event (EventType::WindowEvent)
{

}

void WindowEvent::accept (EventHandler & handler) const
{
  handler.handleWindowEvent (*this);
}

} // namespace Falcon::Events