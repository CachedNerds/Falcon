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

namespace Falcon::SDL
{

/**
 * SDL_Exception
 *
 * Exception class that wraps SDL related errors
 */
class SDL_Exception : public std::exception
{
public:

  SDL_Exception (const char * error);

  const char * what () const throw ();

protected:

  std::string error_;

};

} // namespace Falcon::SDL

#endif /* SDL_Exception_hpp */
