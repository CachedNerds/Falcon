//
//  InputEventSystem.h
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef InputEventSystem_h
#define InputEventSystem_h

#include <SDL2/SDL.h>

class Event;

class InputEventSystem
{
public:
  
  static InputEventSystem & instance (void);
  
  bool nextEvent (void);
  
  void processInput (void);
  
private:
  
  SDL_Event event_;
  
};

#endif /* InputEventSystem_h */
