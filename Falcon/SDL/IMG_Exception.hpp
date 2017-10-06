//
//  IMG_Exception.hpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef IMG_Exception_hpp
#define IMG_Exception_hpp

#include <SDL2_image/SDL_image.h>
#include <stdexcept>
#include <string>

namespace Falcon::SDL
{

/**
 * IMG_Exception
 *
 * Exception class that wraps IMG related errors
 */
class IMG_Exception : public std::exception
{
public:

  IMG_Exception (const char * error);

  const char * what () const throw ();

protected:

  std::string error_;

};

} // namespace Falcon::SDL

#endif /* IMG_Exception_hpp */
