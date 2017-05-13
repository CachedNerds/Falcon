//
//  WindowEvent.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "WindowEvent.hpp"
#include "EventHandler.hpp"

namespace Falcon
{

namespace Events
{

WindowEvent::WindowEvent (SDL_Event & event)
: Event (EventType (event.type))
{

}

void WindowEvent::accept (EventHandler & handler)
{
  handler.handleWindowEvent (*this);
}

} // namespace Events

} // namespace Falcon
