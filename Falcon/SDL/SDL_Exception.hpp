#ifndef _FALCON_SDL_SDL_EXCEPTION_HPP_
#define _FALCON_SDL_SDL_EXCEPTION_HPP_

#include <stdexcept>
#include <string>

namespace Falcon::SDL
{

/**
 * SDL_Exception
 *
 * Exception class that wraps SDL related errors
 */
class SDL_Exception : public std::runtime_error
{
public:

  SDL_Exception (const std::string & error);

};

} // namespace Falcon

#endif // _FALCON_SDL_SDL_EXCEPTION_HPP_
