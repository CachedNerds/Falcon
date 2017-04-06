//
//  IMG_Exception.h
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef IMG_Exception_h
#define IMG_Exception_h

#include <SDL2_image/SDL_image.h>

namespace Falcon
{

namespace SDL
{

  /**
   * IMG_Exception
   *
   * Exception class that wraps IMG related errors
   */
  class IMG_Exception : public std::exception
  {
  public:
    
    IMG_Exception (const char * error)
    {
      this->error_ = std::string (error);
    }
    
    const char * what () const throw ()
    {
      std::string message = "IMG_Error: " + this->error_;
      
      return message.c_str ();
    }
    
  protected:
    
    std::string error_;
    
  };

} // namespace SDL
  
} // namespace Falcon

#endif /* IMG_Exception_h */
