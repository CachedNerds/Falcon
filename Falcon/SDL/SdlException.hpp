#pragma once

#include <stdexcept>
#include <string>

namespace falcon::sdl
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

} // namespace falcon::sdl