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
      this->sprite_->setX (this->sprite_->getX () + 5);
      break;

    case LEFT:
      this->sprite_->setX (this->sprite_->getX () - 5);
      break;

    case UP:
      this->sprite_->setY (this->sprite_->getY () - 5);
      break;

    case DOWN:
      this->sprite_->setY (this->sprite_->getY () + 5);
      break;

    default:
      break;
  }
}

} // namespace Falcon
