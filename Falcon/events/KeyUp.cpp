//
//  KeyUp.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "KeyUp.h"
#include "EventHandler.h"

namespace Falcon
{

namespace Events
{

KeyUp::KeyUp (SDL_Event & event)
: Event (EventType (event.type))
{
  this->code_ = Key (event.key.keysym.sym);
}

void KeyUp::accept (EventHandler & handler)
{
  handler.handleKeyUp (*this);
}

Key KeyUp::getKey (void) const
{
  return this->code_;
}

} // namespace Events

} // namespace Falcon
