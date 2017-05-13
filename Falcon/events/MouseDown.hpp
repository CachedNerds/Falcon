//
//  MouseDown.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef MouseDown_hpp
#define MouseDown_hpp

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon
{

namespace Events
{

class EventHandler;

class MouseDown : public Event
{
public:

  MouseDown (SDL_Event & event);

  void accept (EventHandler & handler);

};

} // namespace Events

} // namespace Falcon

#endif /* MouseDown_hpp */
