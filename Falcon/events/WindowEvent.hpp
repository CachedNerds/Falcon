//
//  WindowEvent.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef WindowEvent_hpp
#define WindowEvent_hpp

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon
{

namespace Events
{

class EventHandler;

class WindowEvent : public Event
{
public:

  WindowEvent (SDL_Event & event);

  void accept (EventHandler & handler);

};

} // namespace Events

} // namespace Falcon

#endif /* WindowEvent_hpp */
