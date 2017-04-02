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

int main (int argc, char * args[])
{
  try
  {
    SDL_Manager manager;
    Window window ("test", -1, -1, -1, -1);
    
    SDL_Delay (3000);
  }
  catch (SDL_Exception & e)
  {
    std::cout << e.what () << std::endl;
  }
  
  return 0;
}
