//
//  NullEvent.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef NullEvent_hpp
#define NullEvent_hpp

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon
{

namespace Events
{

class EventHandler;

class NullEvent : public Event
{
public:

  NullEvent (SDL_Event & event);

  void accept (EventHandler & handler);

};

} // namespace Events

} // namespace Falcon

#endif /* NullEvent_hpp */
