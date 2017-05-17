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

int main (int argc, char * args[])
{
  using namespace Falcon;
  
  Game game;
  Sprite * player = new Sprite ("fez.jpg", 10, 10);
  game.registerGameObject (player);
  game.loop ();

  return 0;
}
