#pragma once

#include <SDL2/SDL.h>

#ifdef __APPLE__
#include <SDL2_image/SDL_image.h>
#else
#include <SDL2/SDL_image.h>
#endif

#include <string>
#include "GameObject.hpp"

namespace falcon
{

namespace sdl
{
  class Window;
} // namespace sdl

using sdl::Window;

class Sprite : public GameObject
{
public:
  Sprite (Game & game, std::unique_ptr<EventHandler> eventHander, const std::string & image, int x, int y);
  virtual ~Sprite (void);
  
  void update (void) override;
  void draw (Window & window) override;

  int getX (void) const;
  void setX (int x);

  int getY (void) const;
  void setY (int y);

  int getWidth (void) const;
  int getHeight (void) const;

protected:
  SDL_Surface * _image;
  SDL_Rect _rect;
};

} // namespace falcon