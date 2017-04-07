//
//  EventFactory.h
//  Falcon
//
//  Created by Danny Peck on 4/5/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventFactory_h
#define EventFactory_h

#include <SDL2/SDL.h>
#include "Event.h"

namespace Falcon
{

namespace Events
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
  
  Event * createKeyDown (SDL_Event & event);
  
  Event * createKeyUp (SDL_Event & event);
  
  Event * createQuit (SDL_Event & event);
  
  Event * createMouseMotion (SDL_Event & event);
  
  Event * createMouseDown (SDL_Event & event);
  
  Event * createMouseUp (SDL_Event & event);
  
  Event * createMouseWheel (SDL_Event & event);
  
  Event * createWindowEvent (SDL_Event & event);
  
  Event * createNullEvent (SDL_Event & event);
  
};

} // namespace Events

} // namespace Falcon

#endif /* EventFactory_h */
