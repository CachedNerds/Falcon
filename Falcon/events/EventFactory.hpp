#ifndef _FALCON_EVENTS_EVENT_FACTORY_HPP_
#define _FALCON_EVENTS_EVENT_FACTORY_HPP_

#include "Event.hpp"
#include <SDL2/SDL.h>
#include <memory>

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
  
  std::unique_ptr<const Event> createKeyDown (const SDL_Event & event);
  
  std::unique_ptr<const Event> createKeyUp (const SDL_Event & event);
  
  std::unique_ptr<const Event> createQuit (const SDL_Event & event);
  
  std::unique_ptr<const Event> createMouseMotion (const SDL_Event & event);
  
  std::unique_ptr<const Event> createMouseDown (const SDL_Event & event);
  
  std::unique_ptr<const Event> createMouseUp (const SDL_Event & event);
  
  std::unique_ptr<const Event> createMouseWheel (const SDL_Event & event);
  
  std::unique_ptr<const Event> createWindowEvent (const SDL_Event & event);
  
  std::unique_ptr<const Event> createNullEvent (const SDL_Event & event);

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_EVENT_FACTORY_HPP_
