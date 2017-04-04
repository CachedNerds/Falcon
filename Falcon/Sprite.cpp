//
//  Sprite.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "Sprite.h"
#include "Window.h"
#include "Events.h"
#include "IMG_Exception.h"

Sprite::Sprite (std::string image, int x, int y)
: image_ (nullptr)
{
  SDL_Surface * surface = IMG_Load (image.c_str ());
  if (!surface)
  {
    throw IMG_Exception (IMG_GetError ());
  }

  this->image_ = surface;
  
  this->rect_.x = x;
  this->rect_.y = y;
  this->rect_.w = this->image_->w;
  this->rect_.h = this->image_->h;
}

Sprite::~Sprite (void)
{
  SDL_FreeSurface (this->image_); this->image_ = nullptr;
}

void Sprite::draw (Window & window)
{
  SDL_BlitSurface (this->image_, NULL, window.getScreen (), &this->rect_);
}

void Sprite::notify (SDL_Event & event)
{
  if (event.type == Events::KEYDOWN)
  {
    switch (event.key.keysym.sym)
    {
      case SDLK_RIGHT:
        this->setX (this->rect_.x + 5);
    }
  }
  else if (event.type == Events::KEYUP)
  {
    switch (event.key.keysym.sym)
    {
      case SDLK_LEFT:
        this->setX (this->rect_.x - 5);
    }
  }
}

void Sprite::setX (int x)
{
  this->rect_.x = x;
}

int Sprite::getX (void) const
{
  return this->rect_.x;
}

void Sprite::setY (int y)
{
  this->rect_.y = y;
}

int Sprite::getY (void) const
{
  return this->rect_.y;
}

int Sprite::getWidth (void) const
{
  return this->rect_.w;
}

int Sprite::getHeight (void) const
{
  return this->rect_.h;
}
