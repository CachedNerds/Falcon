//
//  WindowEvent.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "WindowEvent.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

WindowEvent::WindowEvent (const SDL_Event & event)
: Event (EventType::WindowEvent)
{

}

void WindowEvent::accept (EventHandler & handler)
{
  handler.handleWindowEvent (*this);
}

} // namespace Falcon::Events