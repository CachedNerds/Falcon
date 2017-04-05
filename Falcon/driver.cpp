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
#include "SDL/Initializer.h"
#include "SDL/Window.h"
#include "Sprite.h"
#include "events/EventSystem.h"
#include "events/Event.h"

int main (int argc, char * args[])
{
  using namespace Falcon;
  using SDL::Window;
  using Events::EventSystem;
  using SDL::SDL_Exception;
  
  try
  {
    SDL::Initializer::instance ()
                     .enableAll ()
                     .initialize ();
    
    Window window ("Game", 0, 0, 500, 500);
    
    Sprite player ("fez.jpg", 10, 10);
    
    EventSystem & inputEventSystem = EventSystem::instance ();
    
    bool keepGoing = true;
    while (keepGoing)
    {
      // handle input
      while (inputEventSystem.nextEvent ())
      {
        Event * event = inputEventSystem.getNextEvent ();
        if (event->getType () == Events::QUIT)
        {
          keepGoing = false;
          break;
        }
        else
        {
          player.notify (*event);
        }
        
        delete event;
      }
      
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
