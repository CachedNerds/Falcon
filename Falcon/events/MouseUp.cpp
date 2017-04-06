//
//  MouseUp.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "MouseUp.h"
#include "EventHandler.h"

namespace Falcon
{

namespace Events
{

MouseUp::MouseUp (SDL_Event & event)
: Event (EventType (event.type))
{
  
}

void MouseUp::accept (EventHandler & handler)
{
  handler.handleMouseUp (*this);
}

} // namespace Events

} // namespace Falcon
