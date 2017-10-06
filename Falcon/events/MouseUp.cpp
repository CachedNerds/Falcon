//
//  MouseUp.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "MouseUp.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

MouseUp::MouseUp (const SDL_Event & event)
: Event (EventType::MouseUp)
{

}

void MouseUp::accept (EventHandler & handler)
{
  handler.handleMouseUp (*this);
}

} // namespace Falcon::Events