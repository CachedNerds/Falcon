//
//  SDL_Initializer.h
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef SDL_Initializer_h
#define SDL_Initializer_h

#include <vector>
#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>

class SDL_System;

class SDL_Initializer
{
public:
  
  static SDL_Initializer & instance (void);
  
  SDL_Initializer & enableVideo (void);
  
  SDL_Initializer & enableAudio (void);
  
  SDL_Initializer & enableEvents (void);
  
  SDL_Initializer & enableJoystick (void);
  
  SDL_Initializer & enableTimer (void);
  
  SDL_Initializer & enableAll (void);
  
  void initialize (void);
  
private:
  
  SDL_Initializer (void);
  
  ~SDL_Initializer (void);
  
  SDL_System * system_;
  
  std::vector<Uint32> flags_;
  
  bool initialized_;
  
};

#endif /* SDL_Initializer_h */
