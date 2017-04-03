//
//  Graphics.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "Graphics.h"

Graphics::Graphics (void)
{

}

void Graphics::draw (SDL_Surface * surface, SDL_Surface * image, SDL_Rect & dstrect) const
{
  SDL_BlitSurface (image, NULL, surface, &dstrect);
}
