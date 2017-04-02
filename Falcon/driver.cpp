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
#include "SDL_Manager.h"
#include "Window.h"
#include "Sprite.h"

int main (int argc, char * args[])
{
  try
  {
    SDL_Manager manager;
    Window window ("test");
    Sprite sprite (window, "fez.jpg");
    sprite.draw ();

    bool quit = false;
    SDL_Event event;
    while (SDL_WaitEvent (&event) != quit)
    {
      if (event.type == SDL_QUIT)
      {
        std::cout << "quit" << std::endl;
        quit = true;
      }
      else if (event.type == SDL_KEYDOWN)
      {
        int symbol = event.key.keysym.sym;
        switch (symbol)
        {
          case SDLK_UP:
            std::cout << "up" << std::endl;
            break;

          case SDLK_DOWN:
            std::cout << "down" << std::endl;
            break;

          case SDLK_LEFT:
            std::cout << "left" << std::endl;
            break;

          case SDLK_RIGHT:
            std::cout << "right" << std::endl;
            break;

          default:
            break;
        }
      }

      window.update ();
    }
  }
  catch (SDL_Exception & e)
  {
    std::cout << e.what () << std::endl;
  }

  return 0;
}
