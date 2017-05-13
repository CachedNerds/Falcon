//
//  KeyDown.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "KeyDown.hpp"
#include "EventHandler.hpp"

namespace Falcon
{

namespace Events
{

KeyDown::KeyDown (SDL_Event & event)
: Event (EventType (event.type))
, code_ (Key (event.key.keysym.sym))
{

}

void KeyDown::accept (EventHandler & handler)
{
  handler.handleKeyDown (*this);
}

Key KeyDown::getKey (void) const
{
  return this->code_;
}

} // namespace Events

} // namespace Falcon
