#pragma once

#ifdef __APPLE__
#include <SDL2_image/SDL_image.h>
#else
#include <SDL2/SDL_image.h>
#endif

#include <stdexcept>
#include <string>

namespace falcon::sdl
{

/**
 * ImgException
 *
 * Exception class that wraps SDL IMG related errors
 */
class ImgException : public std::runtime_error
{
public:
  ImgException (const std::string & error);
};

} // namespace falcon::sdl