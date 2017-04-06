//
//  EventFactory.cpp
//  Falcon
//
//  Created by Danny Peck on 4/5/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "EventFactory.h"
#include "KeyDown.h"
#include "KeyUp.h"
#include "Quit.h"
#include "MouseMotion.h"
#include "MouseDown.h"
#include "MouseUp.h"
#include "MouseWheel.h"
#include "WindowEvent.h"
#include "NullEvent.h"

namespace Falcon
{

namespace Events
{

KeyDown * EventFactory::createKeyDown (SDL_Event & event)
{
  return new KeyDown (event);
}

KeyUp * EventFactory::createKeyUp (SDL_Event & event)
{
  return new KeyUp (event);
}

Quit * EventFactory::createQuit (SDL_Event & event)
{
  return new Quit (event);
}

MouseMotion * EventFactory::createMouseMotion (SDL_Event & event)
{
  return new MouseMotion (event);
}

MouseDown * EventFactory::createMouseDown (SDL_Event & event)
{
  return new MouseDown (event);
}

MouseUp * EventFactory::createMouseUp (SDL_Event & event)
{
  return new MouseUp (event);
}

MouseWheel * EventFactory::createMouseWheel (SDL_Event & event)
{
  return new MouseWheel (event);
}

WindowEvent * EventFactory::createWindowEvent (SDL_Event & event)
{
  return new WindowEvent (event);
}

NullEvent * EventFactory::createNullEvent (SDL_Event & event)
{
  return new NullEvent (event);
}

} // namespace Events

} // namespace Falcon
