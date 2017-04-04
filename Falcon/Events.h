//
//  Events.h
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Events_h
#define Events_h

#include <SDL2/SDL.h>
#include <map>

typedef Uint32 EventType;

namespace Events
{
  static EventType KEYDOWN = SDL_KEYDOWN;
  static EventType KEYUP = SDL_KEYUP;
  static EventType QUIT = SDL_QUIT;
  static EventType MOUSEMOTION = SDL_MOUSEMOTION;
  static EventType MOUSEDOWN = SDL_MOUSEBUTTONDOWN;
  static EventType MOUSEUP = SDL_MOUSEBUTTONUP;
  static EventType MOUSEWHEEL = SDL_MOUSEWHEEL;
}

#endif /* Events_h */
