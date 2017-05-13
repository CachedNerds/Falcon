//
//  System.cpp
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "SDL_Exception.hpp"
#include "IMG_Exception.hpp"
#include "System.hpp"

namespace Falcon
{

namespace SDL
{

System & System::instance (void)
{
  static System system;
  return system;
}

System::System (void)
: initialized_ (false)
{

}

System::~System (void)
{

}

System & System::enableVideo (void)
{
  this->flags_.push_back (SDL_INIT_VIDEO);
  return *this;
}

System & System::enableAudio (void)
{
  this->flags_.push_back (SDL_INIT_AUDIO);
  return *this;
}

System & System::enableEvents (void)
{
  this->flags_.push_back (SDL_INIT_EVENTS);
  return *this;
}

System & System::enableJoystick (void)
{
  this->flags_.push_back (SDL_INIT_JOYSTICK);
  return *this;
}

System & System::enableTimer (void)
{
  this->flags_.push_back (SDL_INIT_TIMER);
  return *this;
}

System & System::enableAll (void)
{
  this->flags_.push_back (SDL_INIT_EVERYTHING);
  return *this;
}

void System::initialize (void)
{
  if (!this->initialized_)
  {
    Uint32 SDL_INIT_FLAGS = 0;

    for (auto iter = this->flags_.begin (); iter != this->flags_.end (); ++ iter)
    {
      Uint32 flag = *iter;
      SDL_INIT_FLAGS = SDL_INIT_FLAGS | flag;
    }

    Uint32 IMG_INIT_FLAGS = IMG_INIT_JPG | IMG_INIT_PNG;

    if (SDL_Init (SDL_INIT_FLAGS) < 0)
    {
      throw SDL_Exception (SDL_GetError ());
    }

    if (!IMG_Init (IMG_INIT_FLAGS))
    {
      throw SDL_Exception (IMG_GetError ());
    }

    this->initialized_ = true;
  }
}

} // namespace SDL

} // namespace Falcon
