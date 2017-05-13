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

namespace Falcon
{

namespace Events
{

enum EventType
{
  KEYDOWN = SDL_KEYDOWN,
  KEYUP = SDL_KEYUP,
  QUIT = SDL_QUIT,
  MOUSEMOTION = SDL_MOUSEMOTION,
  MOUSEDOWN = SDL_MOUSEBUTTONDOWN,
  MOUSEUP = SDL_MOUSEBUTTONUP,
  MOUSEWHEEL = SDL_MOUSEWHEEL,
  WINDOWEVENT = SDL_WINDOWEVENT,
  NULLEVENT = 0
};

} // namespace Events

} // namespace Falcon

#endif /* EventType_hpp */
