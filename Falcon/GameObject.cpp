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

void GameObject::emitEvent (std::unique_ptr<const Event> event)
{
  _game.queueEvent(std::move(event));
}

Game & GameObject::getGame (void) const
{
  return _game;
}
  
} // namespace falcon
