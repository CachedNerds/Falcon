//
//  Window.h
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Window_h
#define Window_h

#include <SDL2/SDL.h>
#include <string>

/**
 * Window
 *
 * Wrapper class around the SDL_Window
 */
class Window
{
public:

  // default constructor
  Window (std::string title);

  // initializer constructor
  Window (std::string title, int x, int y, int width, int height);

  // destructor
  ~Window (void);

  // updates the window
  void update (void);

  SDL_Surface * getScreen (void) const;
  
  SDL_Renderer * getRenderer (void) const;
  
  std::string getTitle (void) const;
  
  void setTitle (std::string title);
  
  int getWidth (void) const;
  
  int getHeight (void) const;
  
  void hide (void);
  
  void show (void);

private:

  std::string title_;
  int x_, y_;
  int width_, height_;

  SDL_Window * window_;
  SDL_Renderer * renderer_;
  SDL_Surface * screen_;

};

#endif /* Window_h */
