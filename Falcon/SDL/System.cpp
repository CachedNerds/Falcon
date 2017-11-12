#include "SdlException.hpp"
#include "ImgException.hpp"
#include "System.hpp"

namespace falcon::sdl
{

System & System::instance (void)
{
  static System system;
  return system;
}

System::System (void)
: _flags()
, _initialized(false)
{

}

System & System::enableVideo (void)
{
  _flags.push_back(SDL_INIT_VIDEO);
  return *this;
}

System & System::enableAudio (void)
{
  _flags.push_back(SDL_INIT_AUDIO);
  return *this;
}

System & System::enableEvents (void)
{
  _flags.push_back(SDL_INIT_EVENTS);
  return *this;
}

System & System::enableJoystick (void)
{
  _flags.push_back(SDL_INIT_JOYSTICK);
  return *this;
}

System & System::enableTimer (void)
{
  _flags.push_back(SDL_INIT_TIMER);
  return *this;
}

System & System::enableAll (void)
{
  _flags.push_back(SDL_INIT_EVERYTHING);
  return *this;
}

void System::initialize (void)
{
  if (!_initialized)
  {
    Uint32 SDL_INIT_FLAGS = 0;
    for (Uint32 flag : _flags)
    {
      SDL_INIT_FLAGS |= flag;
    }

    Uint32 IMG_INIT_FLAGS = IMG_INIT_JPG | IMG_INIT_PNG;
    if (SDL_Init(SDL_INIT_FLAGS) < 0)
    {
      throw SdlException (SDL_GetError());
    }

    if (!IMG_Init(IMG_INIT_FLAGS))
    {
      throw SdlException (IMG_GetError());
    }

    _initialized = true;
  }
}

} // namespace falcon::sdl