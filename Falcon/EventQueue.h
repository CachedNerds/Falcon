//
//  EventQueue.h
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventQueue_h
#define EventQueue_h

#include <SDL2/SDL.h>

class Event;

class EventQueue
{
public:
  
  Event & getEvent (void);
  
private:
  
  SDL_Event event_;
};

#endif /* EventQueue_h */
