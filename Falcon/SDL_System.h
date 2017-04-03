//
//  SDL_System.h
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef SDL_System_h
#define SDL_System_h

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include "SDL_Initializer.h"

/**
 * SDL_System
 *
 * Class responsible for managing the SDL system
 */
class SDL_System
{
public:

  friend SDL_Initializer;

private:

  // default constructor
  SDL_System (void);

  // destructor
  ~SDL_System (void);

  // initializes SDL Systems
  void init (Uint32 SDL_INIT_FLAGS, Uint32 IMG_INIT_FLAGS);

};

#endif /* SDL_System_h */
