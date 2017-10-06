//
//  MouseWheel.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef MouseWheel_hpp
#define MouseWheel_hpp

#include <SDL2/SDL.h>
#include "Event.hpp"

namespace Falcon::Events
{

class EventHandler;

class MouseWheel : public Event
{
public:

  MouseWheel (const SDL_Event & event);

  void accept (EventHandler & handler) override;

};

} // namespace Falcon::Events

#endif /* MouseWheel_hpp */
