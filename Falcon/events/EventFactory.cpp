//
//  EventFactory.cpp
//  Falcon
//
//  Created by Danny Peck on 4/5/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "EventFactory.hpp"
#include "Events.hpp"

namespace Falcon
{

namespace Events
{

Event * EventFactory::createKeyDown (SDL_Event & event)
{
  return new KeyDown (event);
}

Event * EventFactory::createKeyUp (SDL_Event & event)
{
  return new KeyUp (event);
}

Event * EventFactory::createQuit (SDL_Event & event)
{
  return new Quit (event);
}

Event * EventFactory::createMouseMotion (SDL_Event & event)
{
  return new MouseMotion (event);
}

Event * EventFactory::createMouseDown (SDL_Event & event)
{
  return new MouseDown (event);
}

Event * EventFactory::createMouseUp (SDL_Event & event)
{
  return new MouseUp (event);
}

Event * EventFactory::createMouseWheel (SDL_Event & event)
{
  return new MouseWheel (event);
}

Event * EventFactory::createWindowEvent (SDL_Event & event)
{
  return new WindowEvent (event);
}

Event * EventFactory::createNullEvent (SDL_Event & event)
{
  return new NullEvent (event);
}

} // namespace Events

} // namespace Falcon
