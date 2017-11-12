#include "WindowEvent.hpp"
#include "EventHandler.hpp"

namespace falcon::events
{

WindowEvent::WindowEvent (const SDL_Event & event)
: Event(EventType::WindowEvent)
{

}

void WindowEvent::accept (EventHandler & handler) const
{
  handler.handleWindowEvent(*this);
}

} // namespace falcon::events