//
//  SDL_Exception.h
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef SDL_Exception_h
#define SDL_Exception_h

#include <stdexcept>
#include <string>

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

#endif /* SDL_Exception_h */
