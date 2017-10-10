#include "KeyDown.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

KeyDown::KeyDown (const SDL_Event & event)
: KeyEvent (EventType::KeyDown, Key (event.key.keysym.sym))
{

}

void KeyDown::accept (EventHandler & handler) const
{
  handler.handleKeyDown (*this);
}

} // namespace Falcon::Events
