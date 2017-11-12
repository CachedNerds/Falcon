#include "ImgException.hpp"

namespace falcon::sdl
{

ImgException::ImgException (const std::string & error)
: std::runtime_error(error)
{

}

} // namespace falcon::sdl