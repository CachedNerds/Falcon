//
//  KeyUp.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "KeyUp.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

KeyUp::KeyUp (const SDL_Event & event)
: KeyEvent (EventType::KeyUp, Key (event.key.keysym.sym))
{

}

void KeyUp::accept (EventHandler & handler)
{
  handler.handleKeyUp (*this);
}

} // namespace Falcon::Events