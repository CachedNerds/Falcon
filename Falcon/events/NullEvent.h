//
//  NullEvent.h
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef NullEvent_h
#define NullEvent_h

#include <SDL2/SDL.h>
#include "Event.h"

namespace Falcon
{

namespace Events
{

class EventHandler;

class NullEvent : public Event
{
public:
  
  NullEvent (SDL_Event & event);
  
  void accept (EventHandler & handler);
  
};

} // namespace Events

} // namespace Falcon

#endif /* NullEvent_h */
