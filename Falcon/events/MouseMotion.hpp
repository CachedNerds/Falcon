//
//  MouseMotion.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef MouseMotion_hpp
#define MouseMotion_hpp

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class EventHandler;

class MouseMotion : public Event
{
public:

  MouseMotion (const SDL_Event & event);

  void accept (EventHandler & handler) override;

};

} // namespace Falcon::Events

#endif /* MouseMotion_hpp */
