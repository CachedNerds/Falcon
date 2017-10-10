#ifndef _FALCON_EVENTS_KEY_UP_HPP_
#define _FALCON_EVENTS_KEY_UP_HPP_

#include <SDL2/SDL.h>
#include "KeyEvent.hpp"
#include "Key.hpp"

namespace Falcon::Events
{

class EventHandler;

class KeyUp : public KeyEvent
{
public:

  KeyUp (const SDL_Event & event);

  void accept (EventHandler & handler) const override;

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_KEY_UP_HPP_
