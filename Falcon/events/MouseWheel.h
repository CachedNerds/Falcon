//
//  MouseWheel.h
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef MouseWheel_h
#define MouseWheel_h

#include <SDL2/SDL.h>
#include "Event.h"

namespace Falcon
{

namespace Events
{

class EventHandler;

class MouseWheel : public Event
{
public:
  
  MouseWheel (SDL_Event & event);
  
  void accept (EventHandler & handler);
  
};

} // namespace Events

} // namespace Falcon

#endif /* MouseWheel_h */
