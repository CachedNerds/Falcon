//
//  SpriteEventHandler.cpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "SpriteEventHandler.h"
#include "Sprite.h"

SpriteEventHandler::SpriteEventHandler (Sprite * sprite)
: sprite_ (sprite)
{
}

void SpriteEventHandler::handleKeyDown (KEYDOWN & event)
{
  switch (event.getKey ())
  {
    case Key::RIGHT:
      std::cout << "right" << std::endl;
      this->sprite_->setX (this->sprite_->getX () + 5);
      break;
      
    case Key::LEFT:
      std::cout << "left" << std::endl;
      this->sprite_->setX (this->sprite_->getX () - 5);
      break;
      
    case Key::UP:
      std::cout << "up" << std::endl;
      this->sprite_->setY (this->sprite_->getY () - 5);
      break;
      
    case Key::DOWN:
      std::cout << "down" << std::endl;
      this->sprite_->setY (this->sprite_->getY () + 5);
      break;
      
    default:
      break;
  }
}
