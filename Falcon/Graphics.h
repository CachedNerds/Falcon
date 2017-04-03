//
//  Graphics.h
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Graphics_h
#define Graphics_h

#include <SDL2/SDL.h>

class Graphics
{
public:

  Graphics (void);

  void draw (SDL_Surface * surface, SDL_Surface * image, SDL_Rect & dstrect) const;

};

#endif /* Graphics_h */
