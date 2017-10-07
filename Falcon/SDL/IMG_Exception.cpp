#include "IMG_Exception.hpp"

namespace Falcon::SDL
{

IMG_Exception::IMG_Exception (const std::string & error)
: std::runtime_error (error)
{

}

} // namespace Falcon::SDL