#pragma once

#include "../IWindow.hpp"
#include <SDL2/SDL.h>
#include <string>

namespace falcon
{
  class GameObject;
}

namespace falcon::sdl
{

/**
 * Window
 *
 * Wrapper class around the SDL_Window
 */
class Window : public IWindow
{
public:
  Window (const std::string & title);
  Window (const std::string & title, int x, int y, unsigned int width, unsigned int height);
  virtual ~Window (void);

  virtual void update (void) override;
  virtual void draw (const std::shared_ptr<GameObject>& gameObject) override;

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