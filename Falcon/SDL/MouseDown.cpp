#include "MouseDown.hpp"
#include "EventHandler.hpp"

namespace falcon::sdl::events
{

MouseDown::MouseDown (const SDL_Event & event)
: SdlEvent(EventType::MouseDown)
{

}

void MouseDown::accept (EventHandler & handler) const
{
  handler.handleMouseDown(*this);
}

} // namespace falcon::sdl::events