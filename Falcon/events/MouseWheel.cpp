//
//  MouseWheel.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "MouseWheel.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

MouseWheel::MouseWheel (const SDL_Event & event)
: Event (EventType::MouseWheel)
{

}

void MouseWheel::accept (EventHandler & handler)
{
  handler.handleMouseWheel (*this);
}

} // namespace Falcon::Events