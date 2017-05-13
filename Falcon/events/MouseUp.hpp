//
//  MouseUp.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef MouseUp_hpp
#define MouseUp_hpp

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon
{

namespace Events
{

class EventHandler;

class MouseUp : public Event
{
public:

  MouseUp (SDL_Event & event);

  void accept (EventHandler & handler);

};

} // namespace Events

} // namespace Falcon

#endif /* MouseUp_hpp */
