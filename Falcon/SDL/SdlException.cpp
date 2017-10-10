#include "SdlException.hpp"

namespace Falcon::SDL
{

  SdlException::SdlException (const std::string & error)
: std::runtime_error (error)
{

}

} // namespace Falcon::SDL