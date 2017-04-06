//
//  MouseMotion.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "MouseMotion.h"
#include "EventHandler.h"

namespace Falcon
{

namespace Events
{

MouseMotion::MouseMotion (SDL_Event & event)
: Event (EventType (event.type))
{
  
}

void MouseMotion::accept (EventHandler & handler)
{
  handler.handleMouseMotion (*this);
}

} // namespace Events

} // namespace Falcon
