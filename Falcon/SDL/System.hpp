#pragma once

#include <SDL2/SDL.h>

namespace falcon::sdl
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
  ~System (void);

  Uint32 _flags;
  bool _initialized;

};
  
} // namespace falcon::sdl