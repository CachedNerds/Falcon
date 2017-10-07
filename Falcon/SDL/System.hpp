#ifndef _FALCON_SDL_SYSTEM_HPP_
#define _FALCON_SDL_SYSTEM_HPP_

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

#endif // _FALCON_SDL_SYSTEM_HPP_
