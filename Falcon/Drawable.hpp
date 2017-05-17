//
//  Drawable.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Drawable_hpp
#define Drawable_hpp

namespace Falcon
{

class GameObject;

namespace SDL
{
  class Window;
} // namespace SDL

using SDL::Window;

class Drawable
{
  public:

    virtual void draw (Window & window) = 0;
  
};

} // namespace Falcon

#endif /* Drawable_hpp */
