//
//  SpriteEventHandler.cpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "SpriteEventHandler.hpp"
#include "Sprite.hpp"
#include "Events/KeyDown.hpp"

namespace Falcon
{

SpriteEventHandler::SpriteEventHandler (Sprite * const sprite)
: sprite_ (sprite)
{

}

void SpriteEventHandler::handleKeyDown (const KeyDown & event)
{
  if (sprite_ != nullptr)
  {
    using Events::Key;
    
    switch (event.getKey ())
    {
      case Key::Right:
        this->sprite_->setX (this->sprite_->getX () + 5);
        break;
  
      case Key::Left:
        this->sprite_->setX (this->sprite_->getX () - 5);
        break;
  
      case Key::Up:
        this->sprite_->setY (this->sprite_->getY () - 5);
        break;
  
      case Key::Down:
        this->sprite_->setY (this->sprite_->getY () + 5);
        break;
  
      default:
        break;
    }
  }
}

} // namespace Falcon
