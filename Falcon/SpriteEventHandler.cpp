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

namespace Falcon
{

SpriteEventHandler::SpriteEventHandler (Sprite * sprite)
: sprite_ (sprite)
{
}

void SpriteEventHandler::handleKeyDown (KeyDown & event)
{
  using Events::Key::LEFT;
  using Events::Key::RIGHT;
  using Events::Key::UP;
  using Events::Key::DOWN;
  
  switch (event.getKey ())
  {
    case RIGHT:
      std::cout << "right" << std::endl;
      this->sprite_->setX (this->sprite_->getX () + 5);
      break;
      
    case LEFT:
      std::cout << "left" << std::endl;
      this->sprite_->setX (this->sprite_->getX () - 5);
      break;
      
    case UP:
      std::cout << "up" << std::endl;
      this->sprite_->setY (this->sprite_->getY () - 5);
      break;
      
    case DOWN:
      std::cout << "down" << std::endl;
      this->sprite_->setY (this->sprite_->getY () + 5);
      break;
      
    default:
      break;
  }
}
  
} // namespace Falcon
