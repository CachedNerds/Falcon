//
//  EventFactory.cpp
//  Falcon
//
//  Created by Danny Peck on 4/5/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "EventFactory.hpp"
#include "Events.hpp"

namespace Falcon::Events
{

Event * EventFactory::createKeyDown (const SDL_Event & event)
{
  return new KeyDown (event);
}

Event * EventFactory::createKeyUp (const SDL_Event & event)
{
  return new KeyUp (event);
}

Event * EventFactory::createQuit (const SDL_Event & event)
{
  return new Quit (event);
}

Event * EventFactory::createMouseMotion (const SDL_Event & event)
{
  return new MouseMotion (event);
}

Event * EventFactory::createMouseDown (const SDL_Event & event)
{
  return new MouseDown (event);
}

Event * EventFactory::createMouseUp (const SDL_Event & event)
{
  return new MouseUp (event);
}

Event * EventFactory::createMouseWheel (const SDL_Event & event)
{
  return new MouseWheel (event);
}

Event * EventFactory::createWindowEvent (const SDL_Event & event)
{
  return new WindowEvent (event);
}

Event * EventFactory::createNullEvent (const SDL_Event & event)
{
  return new NullEvent (event);
}

} // namespace Falcon::Events