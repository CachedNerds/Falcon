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
  
  KeyDown * createKeyDown (SDL_Event & event);
  
  KeyUp * createKeyUp (SDL_Event & event);
  
  Quit * createQuit (SDL_Event & event);
  
  MouseMotion * createMouseMotion (SDL_Event & event);
  
  MouseDown * createMouseDown (SDL_Event & event);
  
  MouseUp * createMouseUp (SDL_Event & event);
  
  MouseWheel * createMouseWheel (SDL_Event & event);
  
  WindowEvent * createWindowEvent (SDL_Event & event);
  
  NullEvent * createNullEvent (SDL_Event & event);
  
};

} // namespace Events

} // namespace Falcon

#endif /* EventFactory_h */
