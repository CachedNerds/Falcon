//
//  Sprite.h
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Sprite_h
#define Sprite_h

#include <SDL2/SDL.h>
#include <SDL2_image/SDL_image.h>
#include <string>

class Window;
class Graphics;

class Sprite
{
public:

  Sprite (Window & window, std::string image);

  ~Sprite (void);

  void draw (void) const;

private:

  Window & window_;
  SDL_Surface * image_;

  Graphics * graphics_;

};

#endif /* Sprite_h */
