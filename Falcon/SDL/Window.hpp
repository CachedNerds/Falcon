#pragma once

#include <SDL2/SDL.h>
#include <string>

namespace falcon::sdl
{

/**
 * Window
 *
 * Wrapper class around the SDL_Window
 */
class Window
{
public:
  Window (const std::string & title);
  Window (const std::string & title, int x, int y, int width, int height);
  virtual ~Window (void);

  virtual void update (void);

  SDL_Surface * getScreen (void) const;

  std::string getTitle (void) const;
  void setTitle (const std::string & title);

  int getWidth (void) const;
  int getHeight (void) const;

  void hide (void);
  void show (void);

private:
  std::string _title;
  int _x, _y;
  int _width, _height;

  SDL_Window * _window;
  SDL_Surface * _screen;
  SDL_Renderer * _renderer;
};

} // namespace falcon::sdl