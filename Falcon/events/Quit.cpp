//
//  Quit.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "Quit.hpp"
#include "Eventhandler.hpp"

namespace Falcon
{

namespace Events
{

Quit::Quit (SDL_Event & event)
: Event (EventType (event.type))
{

}

void Quit::accept (EventHandler & handler)
{
  handler.handleQuit (*this);
}

} // namespace Events

} // namespace Falcon
