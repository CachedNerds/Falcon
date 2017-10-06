#include "SDL_Exception.hpp"

namespace Falcon::SDL
{

SDL_Exception::SDL_Exception (const char * error)
: error_ (error)
{

}

const char * SDL_Exception::what () const throw ()
{
  std::string message = "SDL_Error: " + this->error_;
  return message.c_str ();
}

} // namespace Falcon::SDL