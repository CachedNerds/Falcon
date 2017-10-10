#ifndef _FALCON_SDL_SDL_EXCEPTION_HPP_
#define _FALCON_SDL_SDL_EXCEPTION_HPP_

#include <stdexcept>
#include <string>

namespace Falcon::SDL
{

/**
 * SdlException
 *
 * Exception class that wraps SDL related errors
 */
class SdlException : public std::runtime_error
{
public:

  SdlException (const std::string & error);

};

} // namespace Falcon

#endif // _FALCON_SDL_SDL_EXCEPTION_HPP_
