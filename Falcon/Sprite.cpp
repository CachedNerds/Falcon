//
//  Sprite.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "Sprite.h"
#include "Window.h"
#include "Graphics.h"
#include "IMG_Exception.h"

Sprite::Sprite (Window & window, std::string image)
: window_ (window)
{
  SDL_Surface * surface = IMG_Load (image.c_str ());
  if (!surface)
  {
    throw IMG_Exception (IMG_GetError ());
  }

  this->image_ = surface;

  this->graphics_ = new Graphics ();
}

Sprite::~Sprite (void)
{
  SDL_FreeSurface (this->image_); this->image_ = nullptr;
  delete this->graphics_; this->graphics_ = nullptr;
}

void Sprite::draw (void) const
{
  this->graphics_->draw (this->window_.getScreen (), this->image_);
}
