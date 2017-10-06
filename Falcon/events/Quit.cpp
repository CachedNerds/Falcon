//
//  Quit.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "Quit.hpp"
#include "Eventhandler.hpp"

namespace Falcon::Events
{

Quit::Quit (const SDL_Event & event)
: Event (EventType::Quit)
{

}

void Quit::accept (EventHandler & handler)
{
  handler.handleQuit (*this);
}

} // namespace Falcon::Events