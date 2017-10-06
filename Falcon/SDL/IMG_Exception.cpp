#include "IMG_Exception.hpp"

namespace Falcon::SDL
{

IMG_Exception::IMG_Exception (const char * error)
: error_ (error)
{

}

const char * IMG_Exception::what () const throw ()
{
  std::string message = "IMG_Error: " + this->error_;
  return message.c_str ();
}

} // namespace Falcon::SDL