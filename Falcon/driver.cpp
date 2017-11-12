#include "Game.hpp"
#include "Sprite.hpp"
#include <memory>

int main (int argc, char * args[])
{
  using namespace falcon;
  
  Game game;
  auto sprite = std::make_shared<Sprite>(game, "../fez.jpg", 0, 0);
  game.registerGameObject(sprite);
  game.loop();

  return 0;
}
