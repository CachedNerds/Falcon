#ifndef _FALCON_EVENTS_QUIT_HPP_
#define _FALCON_EVENTS_QUIT_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{
  
class EventHandler;

class Quit : public Event
{
public:

  Quit (const SDL_Event & event);

  void accept (EventHandler & handler) override;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_QUIT_HPP_
