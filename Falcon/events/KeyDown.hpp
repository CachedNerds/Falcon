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
#include "KeyEvent.hpp"
#include "Key.hpp"

namespace Falcon::Events
{

class EventHandler;

class KeyDown : public KeyEvent
{
  public:

    KeyDown (const SDL_Event & event);

    void accept (EventHandler & handler) override;
    
};

} // namespace Falcon::Events

#endif /* KeyDown_hpp */
