//
//  SDL_Exception.hpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef SDL_Exception_hpp
#define SDL_Exception_hpp

#include <stdexcept>
#include <string>

namespace Falcon
{

namespace SDL
{

/**
 * SDL_Exception
 *
 * Exception class that wraps SDL related errors
 */
class SDL_Exception : public std::exception
{
public:

  SDL_Exception (const char * error)
  {
    this->error_ = std::string (error);
  }

  const char * what () const throw ()
  {
    std::string message = "SDL_Error: " + this->error_;

    return message.c_str ();
  }

protected:

  std::string error_;

};

} // namespace SDL

} // namespace Falcon

#endif /* SDL_Exception_hpp */
