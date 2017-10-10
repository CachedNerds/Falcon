#ifndef _FALCON_SDL_IMG_EXCEPTION_HPP_
#define _FALCON_SDL_IMG_EXCEPTION_HPP_

#include <SDL2_image/SDL_image.h>
#include <stdexcept>
#include <string>

namespace Falcon::SDL
{

/**
 * ImgException
 *
 * Exception class that wraps IMG related errors
 */
class ImgException : public std::runtime_error
{
public:

  ImgException (const std::string & error);

};

} // namespace Falcon::SDL

#endif // _FALCON_SDL_IMG_EXCEPTION_HPP_
