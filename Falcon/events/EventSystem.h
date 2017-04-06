//
//  InputEventSystem.h
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventSystem_h
#define EventSystem_h

#include <SDL2/SDL.h>
#include "EventFactory.h"

namespace Falcon
{

namespace Events
{

class Event;

class EventSystem
{
public:
  
  static EventSystem & instance (void);
  
  bool nextEvent (void);
  
  Event * getNextEvent (void);
  
private:
  
  SDL_Event event_;
  
  EventFactory eventFactory_;
  
};

} // namespace Events

} // namespace Falcon

#endif /* EventSystem_h */
