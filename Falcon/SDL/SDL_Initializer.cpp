//
//  SDL_Initializer.cpp
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "SDL_Initializer.h"
#include "SDL_System.h"
#include "SDL_Exception.h"
#include "IMG_Exception.h"

SDL_Initializer & SDL_Initializer::instance (void)
{
  static SDL_Initializer initializer;
  return initializer;
}

SDL_Initializer::SDL_Initializer (void)
: system_ (new SDL_System),
  initialized_ (false)
{
  
}

SDL_Initializer::~SDL_Initializer (void)
{
  delete this->system_;
}

SDL_Initializer & SDL_Initializer::enableVideo (void)
{
  this->flags_.push_back (SDL_INIT_VIDEO);
  return *this;
}

SDL_Initializer & SDL_Initializer::enableAudio (void)
{
  this->flags_.push_back (SDL_INIT_AUDIO);
  return *this;
}

SDL_Initializer & SDL_Initializer::enableEvents (void)
{
  this->flags_.push_back (SDL_INIT_EVENTS);
  return *this;
}

SDL_Initializer & SDL_Initializer::enableJoystick (void)
{
  this->flags_.push_back (SDL_INIT_JOYSTICK);
  return *this;
}

SDL_Initializer & SDL_Initializer::enableTimer (void)
{
  this->flags_.push_back (SDL_INIT_TIMER);
  return *this;
}

SDL_Initializer & SDL_Initializer::enableAll (void)
{
  this->flags_.push_back (SDL_INIT_EVERYTHING);
  return *this;
}

void SDL_Initializer::initialize (void)
{
  if (!this->initialized_)
  {
    Uint32 SDL_INIT_FLAGS = 0;
    
    for (auto iterator = this->flags_.begin (); iterator != this->flags_.end (); ++ iterator)
    {
      Uint32 flag = *iterator;
      SDL_INIT_FLAGS = SDL_INIT_FLAGS | flag;
    }
    
    Uint32 IMG_INIT_FLAGS = IMG_INIT_JPG | IMG_INIT_PNG;
    
    try
    {
      this->system_->init (SDL_INIT_FLAGS, IMG_INIT_FLAGS);
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
