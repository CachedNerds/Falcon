#include "SDL_Exception.hpp"

namespace Falcon::SDL
{

SDL_Exception::SDL_Exception (const std::string & error)
: std::runtime_error (error)
{

}

} // namespace Falcon::SDL