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
#include "SDL/SDL_Exception.hpp"
#include "SDL/System.hpp"
#include "SDL/Window.hpp"
#include "Sprite.hpp"
#include "events/EventSystem.hpp"
#include "events/Event.hpp"

int main (int argc, char * args[])
{
  using namespace Falcon;
  using SDL::System;
  using SDL::SDL_Exception;
  using SDL::Window;
  using Events::EventSystem;
  using Events::QUIT;
  using Events::NULLEVENT;

  try
  {
    System::instance ()
           .enableAll ()
           .initialize ();

    Window window ("Game", 0, 0, 500, 500);
    std::vector <Sprite *> eventListeners;
    std::vector <Sprite *> updateable;
    std::vector <Sprite *> renderable;

    Sprite * player = new Sprite ("fez.jpg", 10, 10);
    Sprite * enemy = new Sprite ("fez.jpg", 30, 100);
    eventListeners.push_back (player);
    renderable.push_back (player);
    eventListeners.push_back (enemy);
    renderable.push_back (enemy);

    EventSystem & eventSystem = EventSystem::instance ();

    bool keepGoing = true;
    while (keepGoing)
    {
      // handle input / events
      while (eventSystem.nextEvent ())
      {
        Event * event = eventSystem.getNextEvent ();
        if (event->getType () == NULLEVENT)
        {
          // do nothing
        }
        else if (event->getType () == QUIT)
        {
          keepGoing = false;
          break;
        }
        else
        {
          for (auto iter = eventListeners.begin (); iter != eventListeners.end (); ++ iter)
          {
            (*iter)->handleEvent (*event);
          }
        }
      }

      // update
      
      // render
      for (auto iter = renderable.begin (); iter != renderable.end (); ++ iter)
      {
        (*iter)->draw (window);
      }

      window.update ();
    }

    for (auto iter = eventListeners.begin (); iter != eventListeners.end (); ++ iter)
    {
      delete (*iter);
    }

  }
  catch (SDL_Exception & e)
  {
    std::cout << e.what () << std::endl;
  }

  return 0;
}
