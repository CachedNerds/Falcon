//
//  KeyDown.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "KeyDown.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

KeyDown::KeyDown (const SDL_Event & event)
: KeyEvent (EventType::KeyDown, Key (event.key.keysym.sym))
{

}

void KeyDown::accept (EventHandler & handler)
{
  handler.handleKeyDown (*this);
}

} // namespace Falcon::Events
