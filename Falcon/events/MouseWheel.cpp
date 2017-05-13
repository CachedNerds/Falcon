//
//  MouseWheel.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "MouseWheel.hpp"
#include "EventHandler.hpp"

namespace Falcon
{

namespace Events
{

MouseWheel::MouseWheel (SDL_Event & event)
: Event (EventType (event.type))
{

}

void MouseWheel::accept (EventHandler & handler)
{
  handler.handleMouseWheel (*this);
}

} // namespace Events

} // namespace Falcon
