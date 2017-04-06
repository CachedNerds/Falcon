//
//  Quit.h
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Quit_h
#define Quit_h

#include <SDL2/SDL.h>
#include "Event.h"

namespace Falcon
{

namespace Events
{
  
class EventHandler;

class Quit : public Event
{
public:
  
  Quit (SDL_Event & event);
  
  void accept (EventHandler & handler);
  
};

} // namespace Events

} // namespace Falcon

#endif /* Quit_h */
