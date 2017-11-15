#include "MouseUp.hpp"
#include "EventHandler.hpp"

namespace falcon::sdl::events
{

MouseUp::MouseUp (const SDL_Event & event)
: SdlEvent(EventType::MouseUp)
{

}

void MouseUp::accept (EventHandler & handler) const
{
  handler.handleMouseUp(*this);
}

} // namespace falcon::sdl::events