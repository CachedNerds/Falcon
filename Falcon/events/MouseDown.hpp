#ifndef _FALCON_EVENTS_MOUSE_DOWN_HPP_
#define _FALCON_EVENTS_MOUSE_DOWN_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class EventHandler;

class MouseDown : public Event
{
public:

  MouseDown (const SDL_Event & event);

  void accept (EventHandler & handler) const override;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_MOUSE_DOWN_HPP_
