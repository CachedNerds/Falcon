//
//  System.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "System.h"
#include "SDL_Exception.h"

namespace Falcon
{

namespace SDL
{

// default constructor
System::System (void)
{
  
}

// destructor
System::~System (void)
{
  IMG_Quit ();
  SDL_Quit ();
}

void System::init (Uint32 SDL_INIT_FLAGS, Uint32 IMG_INIT_FLAGS)
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
  
} // namespace SDL
  
} // namespace Falcon
