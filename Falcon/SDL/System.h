//
//  Initializer.h
//  Falcon
//
//  Created by Danny Peck on 4/5/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef System_h
#define System_h

#include <SDL2/SDL.h>
#include <vector>

namespace Falcon
{

namespace SDL
{

class System
{
public:
  
  static System & instance (void);
  
  System & enableVideo (void);
  
  System & enableAudio (void);
  
  System & enableEvents (void);
  
  System & enableJoystick (void);
  
  System & enableTimer (void);
  
  System & enableAll (void);
  
  void initialize (void);
  
private:
  
  std::vector<Uint32> flags_;
  
  bool initialized_;
  
  System (void);
  
  ~System (void);
  
};
  
} // namespace SDL
  
} // namespace Falcon

#endif /* System_h */
