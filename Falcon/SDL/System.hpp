//
//  System.hpp
//  Falcon
//
//  Created by Danny Peck on 4/5/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef System_hpp
#define System_hpp

#include <SDL2/SDL.h>
#include <vector>

namespace Falcon::SDL
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

  System (void);

  std::vector<Uint32> flags_;

  bool initialized_;

};
  
} // namespace Falcon::SDL

#endif /* System_hpp */
