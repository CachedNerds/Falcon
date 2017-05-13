//
//  KeyUp.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef KeyUp_hpp
#define KeyUp_hpp

#include <SDL2/SDL.h>
#include "Event.hpp"
#include "Key.hpp"

namespace Falcon
{

namespace Events
{

class EventHandler;

class KeyUp : public Event
{
public:

  KeyUp (SDL_Event & event);

  void accept (EventHandler & handler);

  Key getKey (void) const;

private:

  Key code_;

};

} // namespace Events

} // namespace Falcon

#endif /* KeyUp_hpp */
