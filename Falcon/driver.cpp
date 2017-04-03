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

int main (int argc, char * args[])
{
  try
  {
    SDL_Initializer::instance ()
                    .enableAll ()
                    .initialize ();

    Window window ("Game", 0, 0, 500, 500);
    Sprite sprite ("fez.jpg", 10, 10);
    sprite.draw (window);

    bool quit = false;
    SDL_Event event;
    while (SDL_WaitEvent (&event) != quit)
    {
      if (event.type == SDL_QUIT)
      {
        quit = true;
      }
      else if (event.type == SDL_KEYDOWN)
      {
        int symbol = event.key.keysym.sym;
        switch (symbol)
        {
          case SDLK_UP:
            std::cout << "up" << std::endl;
            sprite.setY (15);
            break;

          case SDLK_DOWN:
            std::cout << "down" << std::endl;
            sprite.setY (5);
            break;

          case SDLK_LEFT:
            std::cout << "left" << std::endl;
            sprite.setX (5);
            break;

          case SDLK_RIGHT:
            std::cout << "right" << std::endl;
            sprite.setX (15);
            break;

          default:
            break;
        }
      }

      sprite.draw (window);
      window.update ();
    }
  }
  catch (SDL_Exception & e)
  {
    std::cout << e.what () << std::endl;
  }

  return 0;
}
