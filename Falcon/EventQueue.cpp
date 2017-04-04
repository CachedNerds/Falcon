//
//  EventQueue.cpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "EventQueue.h"
#include "Event.h"

Event & EventQueue::getEvent (void)
{
  SDL_WaitEvent (&this->event_);
  Event & event = Events::getEvent (this->event_.type);
  event.init (this->event_);
  return event;
}
