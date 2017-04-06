//
//  InputEventQueue.cpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "EventSystem.h"
#include "Event.h"
#include "KeyDown.h"
#include "KeyUp.h"
#include "Quit.h"
#include "MouseMotion.h"
#include "MouseDown.h"
#include "MouseUp.h"
#include "MouseWheel.h"
#include "WindowEvent.h"
#include "NullEvent.h"

namespace Falcon
{

namespace Events
{

EventSystem & EventSystem::instance (void)
{
  static EventSystem system;
  return system;
}

bool EventSystem::nextEvent (void)
{
  return SDL_PollEvent (&this->event_);
}

Event * EventSystem::getNextEvent (void)
{
  switch (this->event_.type)
  {
    case KEYDOWN:
      return this->eventFactory_.createKeyDown (this->event_);
      
    case KEYUP:
      return this->eventFactory_.createKeyUp (this->event_);
      
    case QUIT:
      return this->eventFactory_.createQuit (this->event_);
      
    case MOUSEMOTION:
      return this->eventFactory_.createMouseMotion (this->event_);
      
    case MOUSEDOWN:
      return this->eventFactory_.createMouseDown (this->event_);
      
    case MOUSEUP:
      return this->eventFactory_.createMouseUp (this->event_);
      
    case MOUSEWHEEL:
      return this->eventFactory_.createMouseWheel (this->event_);
      
    case WINDOWEVENT:
      return this->eventFactory_.createWindowEvent (this->event_);
      
    default:
      return this->eventFactory_.createNullEvent (this->event_);
  }
}

} // namespace Events

} // namespace Falcon
