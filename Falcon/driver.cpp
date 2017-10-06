//
//  driver.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "Game.hpp"
#include "Sprite.hpp"
#include "events/Event.hpp"
#include "events/KeyDown.hpp"

int main (int argc, char * args[])
{
  using namespace Falcon;
  
  Game game;
  Sprite sprite (game, "../fez.jpg", 0, 0);
  game.registerGameObject (&sprite);
  game.loop ();

  return 0;
}
