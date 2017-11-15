#include "MouseWheel.hpp"
#include "EventHandler.hpp"

namespace falcon::sdl::events
{

MouseWheel::MouseWheel (const SDL_Event & event)
: SdlEvent(EventType::MouseWheel)
{

}

void MouseWheel::accept (EventHandler & handler) const
{
  handler.handleMouseWheel(*this);
}

} // namespace falcon::sdl::events