#ifndef _FALCON_EVENTS_MOUSE_MOTION_HPP_
#define _FALCON_EVENTS_MOUSE_MOTION_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class EventHandler;

class MouseMotion : public Event
{
public:

  MouseMotion (const SDL_Event & event);

  void accept (EventHandler & handler) const override;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_MOUSE_DOWN_HPP_
