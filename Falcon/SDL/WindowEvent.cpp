#include "WindowEvent.hpp"
#include "EventHandler.hpp"

namespace falcon::sdl::events
{

WindowEvent::WindowEvent (const SDL_Event & event)
: SdlEvent(EventType::WindowEvent)
{

}

void WindowEvent::accept (EventHandler & handler) const
{
  handler.handleWindowEvent(*this);
}

} // namespace falcon::sdl::events