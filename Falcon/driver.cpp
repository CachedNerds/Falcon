//
//  driver.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include <SDL2_image/SDL_image.h>
#include "SDL_Exception.h"
#include "SDL_Initializer.h"
#include "Window.h"
#include "Sprite.h"
#include "EventHandler.h"
#include "Events.h"

int main (int argc, char * args[])
{
  try
  {
    SDL_Initializer::instance ()
                    .enableAll ()
                    .initialize ();
    
    Window window ("Game", 0, 0, 500, 500);
    Sprite player ("fez.jpg", 10, 10);
    
    EventHandler handler;
    handler.registerForEvent (Events::KEYDOWN, &player);
    
    while (handler.getEvent ())
    {
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
