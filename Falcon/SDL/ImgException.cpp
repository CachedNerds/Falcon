#include "ImgException.hpp"

namespace Falcon::SDL
{

  ImgException::ImgException (const std::string & error)
: std::runtime_error (error)
{

}

} // namespace Falcon::SDL