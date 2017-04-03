//
//  SDL_System.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "SDL_System.h"
#include "SDL_Exception.h"

// default constructor
SDL_System::SDL_System (void)
{

}

// destructor
SDL_System::~SDL_System (void)
{
  IMG_Quit ();
  SDL_Quit ();
}

void SDL_System::init (Uint32 SDL_INIT_FLAGS, Uint32 IMG_INIT_FLAGS)
{
  if (SDL_Init (SDL_INIT_FLAGS) < 0)
  {
    throw SDL_Exception (SDL_GetError ());
  }

  if (!IMG_Init (IMG_INIT_FLAGS))
  {
    throw SDL_Exception (IMG_GetError ());
  }
}
