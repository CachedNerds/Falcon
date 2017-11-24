#include "Game.hpp"
#include "Sprite.hpp"
#include "Menu.hpp"
#include "SDL/CreateGame.hpp"
#include <memory>

int main (int argc, char * args[])
{
  using namespace falcon;
  
  Game game = sdl::createGame();
  auto menu = std::make_shared<Menu>(game, "../fez.jpg", 0, 0);
  game.registerGameObject(menu);
  game.loop();

  return 0;
}
