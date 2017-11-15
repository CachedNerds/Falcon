#include "KeyDown.hpp"
#include "EventHandler.hpp"

namespace falcon::sdl::events
{

KeyDown::KeyDown (const SDL_Event & event)
: KeyEvent(EventType::KeyDown, Key(event.key.keysym.sym))
{

}

void KeyDown::accept (EventHandler & handler) const
{
  handler.handleKeyDown(*this);
}

} // namespace falcon::sdl::events
