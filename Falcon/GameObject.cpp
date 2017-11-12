#include "GameObject.hpp"
#include "Game.hpp"

namespace falcon
{
  
GameObject::GameObject (Game & game, std::unique_ptr<EventHandler> eventHandler)
: _game(game)
, _eventHandler(std::move(eventHandler))
{

}

GameObject::~GameObject (void)
{

}

void GameObject::handleEvent (const Event & event)
{
  event.accept(*_eventHandler);
}

Game & GameObject::getGame (void) const
{
  return _game;
}
  
} // namespace falcon
