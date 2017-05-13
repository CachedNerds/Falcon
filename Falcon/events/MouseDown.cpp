//
//  MouseDown.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "MouseDown.hpp"
#include "EventHandler.hpp"

namespace Falcon
{

namespace Events
{

MouseDown::MouseDown (SDL_Event & event)
: Event (EventType (event.type))
{

}

void MouseDown::accept (EventHandler & handler)
{
  handler.handleMouseDown (*this);
}

} // namespace Events

} // namespace Falcon
