//
//  MouseDown.h
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef MouseDown_h
#define MouseDown_h

#include <SDL2/SDL.h>
#include "Event.h"

namespace Falcon
{

namespace Events
{

class EventHandler;

class MouseDown : public Event
{
public:
  
  MouseDown (SDL_Event & event);
  
  void accept (EventHandler & handler);
  
};

} // namespace Events

} // namespace Falcon

#endif /* MouseDown_h */
