//
//  driver.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include <SDL2_image/SDL_image.h>
#include <vector>
#include "SDL/SDL_Exception.h"
#include "SDL/SDL_Initializer.h"
#include "SDL/Window.h"
#include "Sprite.h"
#include "events/InputEventSystem.h"
#include "events/Event.h"

int main (int argc, char * args[])
{
  try
  {
    SDL_Initializer::instance ()
                    .enableAll ()
                    .initialize ();
    
    Window window ("Game", 0, 0, 500, 500);
    
    Sprite player ("fez.jpg", 10, 10);
    std::vector<Sprite> sprites;
    sprites.push_back (player);
    
    InputEventSystem & inputEventSystem = InputEventSystem::instance ();
    
    bool keepGoing = true;
    while (keepGoing)
    {
      // handle input
      inputEventSystem.processInput ();
      
      // update
      
      // render
      player.draw (window);
      window.update ();
    }
  }
  catch (SDL_Exception & e)
  {
    std::cout << e.what () << std::endl;
  }

  return 0;
}
