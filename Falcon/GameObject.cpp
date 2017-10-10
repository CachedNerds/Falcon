#include "GameObject.hpp"
#include "Game.hpp"

namespace Falcon
{
  
GameObject::GameObject (Game & game, EventHandler * eventHandler)
: game_ (game),
  eventHandler_ (eventHandler)
{
  
}

GameObject::~GameObject (void)
{
  delete this->eventHandler_;
}

void GameObject::handleEvent (const Event & event)
{
  event.accept (*this->eventHandler_);
}

Game & GameObject::getGame (void) const
{
  return this->game_;
}
  
} // namespace Falcon
