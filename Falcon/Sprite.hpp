#ifndef _FALCON_SPRITE_HPP_
#define _FALCON_SPRITE_HPP_

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <string>
#include "GameObject.hpp"

namespace Falcon
{

using Events::EventListener;
using Events::Event;

namespace SDL
{
  class Window;
} // namespace SDL

using SDL::Window;

class SpriteEventHandler;

class Sprite : public GameObject
{
public:

  Sprite (Game & game, const std::string & image, int x, int y);

  virtual ~Sprite (void);
  
  void update (void) override;

  void draw (Window & window) override;

  void setX (int x);

  int getX (void) const;

  void setY (int y);

  int getY (void) const;

  int getWidth (void) const;

  int getHeight (void) const;

private:

  SDL_Surface * image_;
  SDL_Rect rect_;

};

} // namespace Falcon

#endif // _FALCON_SPRITE_HPP_
