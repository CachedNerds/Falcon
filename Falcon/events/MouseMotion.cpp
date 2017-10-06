//
//  MouseMotion.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "MouseMotion.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

MouseMotion::MouseMotion (const SDL_Event & event)
: Event (EventType::MouseMotion)
{

}

void MouseMotion::accept (EventHandler & handler)
{
  handler.handleMouseMotion (*this);
}

} // namespace Falcon::Events