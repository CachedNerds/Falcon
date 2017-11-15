#include "MouseMotion.hpp"
#include "EventHandler.hpp"

namespace falcon::sdl::events
{

MouseMotion::MouseMotion (const SDL_Event & event)
: SdlEvent(EventType::MouseMotion)
{

}

void MouseMotion::accept (EventHandler & handler) const
{
  handler.handleMouseMotion(*this);
}

} // namespace falcon::sdl::events