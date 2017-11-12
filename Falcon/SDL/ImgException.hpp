#pragma once

#include <SDL2_image/SDL_image.h>
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