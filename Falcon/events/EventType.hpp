//
//  EventType.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventType_hpp
#define EventType_hpp

#include <SDL2/SDL.h>

namespace Falcon::Events
{

enum class EventType
{
  NullEvent = 0,
  KeyDown = SDL_KEYDOWN,
  KeyUp = SDL_KEYUP,
  Quit = SDL_QUIT,
  MouseMotion = SDL_MOUSEMOTION,
  MouseDown = SDL_MOUSEBUTTONDOWN,
  MouseUp = SDL_MOUSEBUTTONUP,
  MouseWheel = SDL_MOUSEWHEEL,
  WindowEvent = SDL_WINDOWEVENT
};

} // namespace Falcon::Events

#endif /* EventType_hpp */
