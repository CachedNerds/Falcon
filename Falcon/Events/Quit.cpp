#include "Quit.hpp"
#include "EventHandler.hpp"

namespace falcon::events
{

Quit::Quit (const SDL_Event & event)
: Event(EventType::Quit)
{

}

void Quit::accept (EventHandler & handler) const
{
  handler.handleQuit(*this);
}

} // namespace falcon::events