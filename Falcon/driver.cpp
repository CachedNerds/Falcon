#include <iostream>
#include "Game.hpp"
#include "Sprite.hpp"
#include "events/Event.hpp"
#include "events/KeyDown.hpp"

int main (int argc, char * args[])
{
  using namespace Falcon;
  
  Game game;
  auto sprite = std::make_shared<Sprite> (game, "../fez.jpg", 0, 0);
  game.registerGameObject (sprite);
  game.loop ();

  return 0;
}
