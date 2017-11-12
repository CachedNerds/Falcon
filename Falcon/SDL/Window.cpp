#include "Window.hpp"
#include "SdlException.hpp"

namespace falcon::sdl
{

// Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

// default constructor
Window::Window (const std::string & title)
: Window(title,
         SDL_WINDOWPOS_UNDEFINED,
         SDL_WINDOWPOS_UNDEFINED,
         SCREEN_WIDTH,
         SCREEN_HEIGHT)
{

}

// initializer constructor
Window::Window (const std::string & title, int x, int y, int width, int height)
: _title(title)
, _x(x >= 0 ? x : SDL_WINDOWPOS_UNDEFINED)
, _y(y >= 0 ? y : SDL_WINDOWPOS_UNDEFINED)
, _width(width > 0 ? width : SCREEN_WIDTH)
, _height(height > 0 ? height : SCREEN_HEIGHT)
, _window(nullptr)
, _renderer(nullptr)
, _screen(nullptr)
{
  SDL_Window * window = SDL_CreateWindow(_title.c_str(), _x, _y, _width, _height,
                                         SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
  if (window != nullptr)
  {
    _window = window;
  }
  else
  {
    throw SdlException(SDL_GetError());
  }

  _screen = SDL_GetWindowSurface(window);

  // Fill the surface white
  SDL_FillRect(_screen, nullptr, SDL_MapRGB(_screen->format, 0xFF, 0xFF, 0xFF));

  _renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  update();
}

// destructor
Window::~Window (void)
{
  SDL_DestroyWindow(_window);
  _window = nullptr;
  _renderer = nullptr;

  // _screen, _window, and _renderer are deleted by SDL_DestroyWindow
}

// updates the window
void Window::update (void)
{
  SDL_UpdateWindowSurface(_window);
  SDL_FillRect(_screen, nullptr, 0xFFFFFF);
}

SDL_Surface * Window::getScreen (void) const
{
  return _screen;
}

std::string Window::getTitle (void) const
{
  return _title;
}

void Window::setTitle (const std::string & title)
{
  SDL_SetWindowTitle(_window, title.c_str());
  _title = title;
}

int Window::getWidth (void) const
{
  return _width;
}

void Window::hide (void)
{
  SDL_HideWindow(_window);
}

void Window::show (void)
{
  SDL_ShowWindow(_window);
}

} // namespace falcon::sdl