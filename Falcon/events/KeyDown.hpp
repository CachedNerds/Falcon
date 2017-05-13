//
//  KeyDown.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef KeyDown_hpp
#define KeyDown_hpp

#include <SDL2/SDL.h>
#include "Event.hpp"
#include "Key.hpp"

namespace Falcon
{

namespace Events
{

class EventHandler;

class KeyDown : public Event
{
  public:

    KeyDown (SDL_Event & event);

    void accept (EventHandler & handler);

    Key getKey (void) const;

  private:

    Key code_;

};

} // namespace Events

} // namespace Falcon

#endif /* KeyDown_hpp */
