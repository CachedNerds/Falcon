//
//  InputEventQueue.cpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "InputEventSystem.h"
#include "Event.h"

InputEventSystem & InputEventSystem::instance (void)
{
  static InputEventSystem system;
  return system;
}

bool InputEventSystem::nextEvent (void)
{
  return SDL_PollEvent (&this->event_);
}

void InputEventSystem::processInput (void)
{
  while (this->nextEvent ())
  {
    Event * event = new Event (this->event_.type);
    event->init (this->event_);
  }
}
