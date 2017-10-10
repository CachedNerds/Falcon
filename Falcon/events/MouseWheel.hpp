#ifndef _FALCON_EVENTS_MOUSE_WHEEL_HPP_
#define _FALCON_EVENTS_MOUSE_WHEEL_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class EventHandler;

class MouseWheel : public Event
{
public:

  MouseWheel (const SDL_Event & event);

  void accept (EventHandler & handler) const override;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_MOUSE_WHEEL_HPP_
