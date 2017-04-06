//
//  MouseUp.h
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef MouseUp_h
#define MouseUp_h

#include <SDL2/SDL.h>
#include "Event.h"

namespace Falcon
{

namespace Events
{

class EventHandler;

class MouseUp : public Event
{
public:
  
  MouseUp (SDL_Event & event);
  
  void accept (EventHandler & handler);
  
};

} // namespace Events

} // namespace Falcon

#endif /* MouseUp_h */
