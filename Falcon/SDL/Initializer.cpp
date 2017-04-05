//
//  Initializer.cpp
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "Initializer.h"
#include "System.h"
#include "SDL_Exception.h"
#include "IMG_Exception.h"

namespace Falcon
{

namespace SDL
{

Initializer & Initializer::instance (void)
{
  static Initializer initializer;
  return initializer;
}

Initializer::Initializer (void)
: system_ (new System),
  initialized_ (false)
{
  
}

Initializer::~Initializer (void)
{
  delete this->system_;
}

Initializer & Initializer::enableVideo (void)
{
  this->flags_.push_back (SDL_INIT_VIDEO);
  return *this;
}

Initializer & Initializer::enableAudio (void)
{
  this->flags_.push_back (SDL_INIT_AUDIO);
  return *this;
}

Initializer & Initializer::enableEvents (void)
{
  this->flags_.push_back (SDL_INIT_EVENTS);
  return *this;
}

Initializer & Initializer::enableJoystick (void)
{
  this->flags_.push_back (SDL_INIT_JOYSTICK);
  return *this;
}

Initializer & Initializer::enableTimer (void)
{
  this->flags_.push_back (SDL_INIT_TIMER);
  return *this;
}

Initializer & Initializer::enableAll (void)
{
  this->flags_.push_back (SDL_INIT_EVERYTHING);
  return *this;
}

void Initializer::initialize (void)
{
  if (!this->initialized_)
  {
    Uint32 INIT_FLAGS = 0;
    
    for (auto iterator = this->flags_.begin (); iterator != this->flags_.end (); ++ iterator)
    {
      Uint32 flag = *iterator;
      INIT_FLAGS = INIT_FLAGS | flag;
    }
    
    Uint32 IMG_INIT_FLAGS = IMG_INIT_JPG | IMG_INIT_PNG;
    
    try
    {
      this->system_->init (INIT_FLAGS, IMG_INIT_FLAGS);
      this->initialized_ = true;
    }
    catch (SDL_Exception & e)
    {
      std::cout << e.what () << std::endl;
    }
    catch (IMG_Exception & e)
    {
      std::cout << e.what () << std::endl;
    }
  }
}

} // namespace SDL

} // namespace Falcon
