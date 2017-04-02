//
//  SDL_Manager.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "SDL_Manager.h"
#include "SDL_Exception.h"

// default constructor
SDL_Manager::SDL_Manager (void)
{
  if (SDL_Init (SDL_INIT_VIDEO) < 0)
  {
    throw SDL_Exception (SDL_GetError ());
  }

  if (!IMG_Init (IMG_INIT_JPG))
  {
    throw SDL_Exception (IMG_GetError ());
  }
}

// destructor
SDL_Manager::~SDL_Manager (void)
{
  IMG_Quit ();
  SDL_Quit ();
}
