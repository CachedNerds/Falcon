#include "Quit.hpp"
#include "Eventhandler.hpp"

namespace Falcon::Events
{

Quit::Quit (const SDL_Event & event)
: Event (EventType::Quit)
{

}

void Quit::accept (EventHandler & handler)
{
  handler.handleQuit (*this);
}

} // namespace Falcon::Events