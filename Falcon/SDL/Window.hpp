#ifndef _FALCON_SDL_WINDOW_HPP_
#define _FALCON_SDL_WINDOW_HPP_

#include <SDL2/SDL.h>
#include <string>
#include <memory>

namespace Falcon::SDL
{

/**
 * Window
 *
 * Wrapper class around the SDL_Window
 */
class Window
{
public:

  // default constructor
  Window (const std::string & title);

  // initializer constructor
  Window (const std::string & title, int x, int y, int width, int height);

  // destructor
  virtual ~Window (void);

  // updates the window
  virtual void update (void);

  SDL_Surface * getScreen (void) const;

  std::string getTitle (void) const;

  void setTitle (const std::string & title);

  int getWidth (void) const;

  int getHeight (void) const;

  void hide (void);

  void show (void);

private:

  std::string title_;
  int x_, y_;
  int width_, height_;

  SDL_Window * window_;
  SDL_Surface * screen_;
  SDL_Renderer * renderer_;

};

} // namespace Falcon::SDL

#endif // _FALCON_SDL_WINDOW_HPP_
