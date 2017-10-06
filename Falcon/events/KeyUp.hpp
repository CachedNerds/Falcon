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
#include "KeyEvent.hpp"
#include "Key.hpp"

namespace Falcon::Events
{

class EventHandler;

class KeyUp : public KeyEvent
{
public:

  KeyUp (const SDL_Event & event);

  void accept (EventHandler & handler) override;

};

} // namespace Falcon::Events

#endif /* KeyUp_hpp */
