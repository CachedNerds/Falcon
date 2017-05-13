//
//  NullEvent.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "NullEvent.hpp"
#include "EventHandler.hpp"

namespace Falcon
{

namespace Events
{

NullEvent::NullEvent (SDL_Event & event)
: Event (EventType (event.type))
{

}

void NullEvent::accept (EventHandler & handler)
{
  handler.handleNullEvent (*this);
}

} // namespace Events

} // namespace Falcon
