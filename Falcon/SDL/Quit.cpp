#include "Quit.hpp"
#include "Eventhandler.hpp"

namespace falcon::sdl::events
{

Quit::Quit (const SDL_Event & event)
: SdlEvent(EventType::Quit)
{

}

void Quit::accept (EventHandler & handler) const
{
  handler.handleQuit(*this);
}

} // namespace falcon::sdl::events