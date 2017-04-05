//
//  InputEventQueue.cpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "EventSystem.h"
#include "Event.h"

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
      case SDL_KEYDOWN:
        return this->eventFactory_.createKeyDown (this->event_);
        
      case SDL_KEYUP:
        return this->eventFactory_.createKeyUp (this->event_);
        
      case SDL_QUIT:
        return this->eventFactory_.createQuit (this->event_);
        
      case SDL_MOUSEMOTION:
        return this->eventFactory_.createMouseMotion (this->event_);
        
      case SDL_MOUSEBUTTONDOWN:
        return this->eventFactory_.createMouseDown (this->event_);
        
      case SDL_MOUSEBUTTONUP:
        return this->eventFactory_.createMouseUp (this->event_);
        
      case SDL_MOUSEWHEEL:
        return this->eventFactory_.createMouseWheel (this->event_);
        
      case SDL_WINDOWEVENT:
        return this->eventFactory_.createWindowEvent (this->event_);
        
      default:
        return this->eventFactory_.createNullEvent (this->event_);
    }
  }
  
} // namespace Events
  
} // namespace Falcon
