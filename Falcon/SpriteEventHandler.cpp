#include "SpriteEventHandler.hpp"
#include "Sprite.hpp"
#include "Events/KeyDown.hpp"

namespace falcon
{

SpriteEventHandler::SpriteEventHandler (Sprite & sprite)
: _sprite(sprite)
{

}

void SpriteEventHandler::handleKeyDown (const KeyDown & event)
{
  using events::Key;
  
  switch (event.getKey())
  {
    case Key::Right:
      _sprite.setX(_sprite.getX() + 5);
      break;

    case Key::Left:
      _sprite.setX(_sprite.getX() - 5);
      break;

    case Key::Up:
      _sprite.setY(_sprite.getY() - 5);
      break;

    case Key::Down:
      _sprite.setY(_sprite.getY() + 5);
      break;
    
      default:
      break;
  }
}

} // namespace falcon