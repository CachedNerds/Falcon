//
//  Sprite.hpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Sprite_hpp
#define Sprite_hpp

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

  Sprite (std::string image, int x, int y);

  ~Sprite (void);
  
  void update (void);

  void draw (Window & window);

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

#endif /* Sprite_hpp */
