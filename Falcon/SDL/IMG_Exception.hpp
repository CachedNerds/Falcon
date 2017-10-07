#ifndef _FALCON_SDL_IMG_EXCEPTION_HPP_
#define _FALCON_SDL_IMG_EXCEPTION_HPP_

#include <SDL2_image/SDL_image.h>
#include <stdexcept>
#include <string>

namespace Falcon::SDL
{

/**
 * IMG_Exception
 *
 * Exception class that wraps IMG related errors
 */
class IMG_Exception : public std::runtime_error
{
public:

  explicit IMG_Exception (const std::string & error);

};

} // namespace Falcon::SDL

#endif // _FALCON_SDL_IMG_EXCEPTION_HPP_
