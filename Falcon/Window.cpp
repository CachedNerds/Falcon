//
//  Window.cpp
//  Falcon
//
//  Created by Danny Peck on 4/2/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "Window.h"
#include "SDL_Exception.h"

// Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// default constructor
Window::Window (std::string title)
: Window (title,
          SDL_WINDOWPOS_UNDEFINED,
          SDL_WINDOWPOS_UNDEFINED,
          SCREEN_WIDTH,
          SCREEN_HEIGHT)
{

}

// initializer constructor
Window::Window (std::string title, int x, int y, int width, int height)
: title_ (title),
x_ (x > 0 ? x : SDL_WINDOWPOS_UNDEFINED),
y_ (y > 0 ? y : SDL_WINDOWPOS_UNDEFINED),
width_ (width > 0 ? width : SCREEN_WIDTH),
height_ (height > 0 ? height : SCREEN_HEIGHT),
window_ (nullptr),
screen_ (nullptr)
{
  SDL_Window * window = SDL_CreateWindow (this->title_.c_str (),
                                          this->x_,
                                          this->y_,
                                          this->width_,
                                          this->height_,
                                          SDL_WINDOW_SHOWN);
  if (window != nullptr)
  {
    this->window_ = window;
  }
  else
  {
    throw SDL_Exception (SDL_GetError ());
  }

  this->screen_ = SDL_GetWindowSurface (window);

  // Fill the surface white
  SDL_FillRect (this->screen_, nullptr, SDL_MapRGB (this->screen_->format, 0xFF, 0xFF, 0xFF));

  this->update ();
}

// destructor
Window::~Window (void)
{
  SDL_DestroyWindow (this->window_);
  this->window_ = nullptr;
}

// updates the window
void Window::update (void)
{
  SDL_UpdateWindowSurface (this->window_);
}

SDL_Surface * Window::getScreen (void) const
{
  return this->screen_;
}
