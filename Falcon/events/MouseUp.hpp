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

namespace Falcon::Events
{

class EventHandler;

class MouseUp : public Event
{
public:

  MouseUp (const SDL_Event & event);

  void accept (EventHandler & handler) override;

};

} // namespace Falcon::Events

#endif /* MouseUp_hpp */
