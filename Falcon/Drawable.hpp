#pragma once

namespace falcon
{

namespace sdl
{
  class Window;
} // namespace sdl

using sdl::Window;

class Drawable
{
public:
  virtual void draw (Window & window) = 0;
};

} // namespace falcon