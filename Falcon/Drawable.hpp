#ifndef _FALCON_DRAWABLE_HPP_
#define _FALCON_DRAWABLE_HPP_

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

#endif // _FALCON_DRAWABLE_HPP_
