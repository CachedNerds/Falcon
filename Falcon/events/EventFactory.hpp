#ifndef _FALCON_EVENTS_EVENT_FACTORY_HPP_
#define _FALCON_EVENTS_EVENT_FACTORY_HPP_

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class KeyDown;
class KeyUp;
class Quit;
class MouseMotion;
class MouseDown;
class MouseUp;
class MouseWheel;
class WindowEvent;
class NullEvent;

class EventFactory
{
public:

  Event * createKeyDown (const SDL_Event & event);
  
  Event * createKeyUp (const SDL_Event & event);
  
  Event * createQuit (const SDL_Event & event);
  
  Event * createMouseMotion (const SDL_Event & event);
  
  Event * createMouseDown (const SDL_Event & event);
  
  Event * createMouseUp (const SDL_Event & event);
  
  Event * createMouseWheel (const SDL_Event & event);
  
  Event * createWindowEvent (const SDL_Event & event);
  
  Event * createNullEvent (const SDL_Event & event);

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_EVENT_FACTORY_HPP_
