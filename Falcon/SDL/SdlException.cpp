#include "SdlException.hpp"

namespace falcon::sdl
{

SdlException::SdlException (const std::string & error)
: std::runtime_error(error)
{

}

} // namespace falcon::sdl