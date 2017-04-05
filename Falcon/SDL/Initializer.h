//
//  Initializer.h
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

namespace Falcon
{

namespace SDL
{
  
  class System;
  
  class Initializer
  {
  public:
    
    static Initializer & instance (void);
    
    Initializer & enableVideo (void);
    
    Initializer & enableAudio (void);
    
    Initializer & enableEvents (void);
    
    Initializer & enableJoystick (void);
    
    Initializer & enableTimer (void);
    
    Initializer & enableAll (void);
    
    void initialize (void);
    
  private:
    
    Initializer (void);
    
    ~Initializer (void);
    
    System * system_;
    
    std::vector<Uint32> flags_;
    
    bool initialized_;
    
  };
  
} // namespace SDL
  
} // namespace Falcon

#endif /* SDL_Initializer_h */

