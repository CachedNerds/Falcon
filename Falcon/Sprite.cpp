#include "Sprite.hpp"
#include "SpriteEventHandler.hpp"
#include "SDL/Window.hpp"
#include "Events/Event.hpp"
#include "Events/Key.hpp"
#include "SDL/ImgException.hpp"
#include <memory>

namespace falcon
{

Sprite::Sprite (Game & game, const std::string & image, int x, int y)
: GameObject(game, std::make_unique<SpriteEventHandler>(*this))
, _image(nullptr)
, _rect()
{
  SDL_Surface * surface = IMG_Load(image.c_str());
  if (!surface)
  {
    throw sdl::ImgException(IMG_GetError());
  }

  _image = surface;

  _rect.x = x;
  _rect.y = y;
  _rect.w = _image->w;
  _rect.h = _image->h;
}

Sprite::~Sprite (void)
{
  SDL_FreeSurface(_image);
  _image = nullptr;
}
  
void Sprite::update (void)
{
  // update
}

void Sprite::draw (Window & window)
{
  SDL_BlitSurface(_image, nullptr, window.getScreen(), &_rect);
}

void Sprite::setX (int x)
{
  _rect.x = x;
}

int Sprite::getX (void) const
{
  return _rect.x;
}

void Sprite::setY (int y)
{
  _rect.y = y;
}

int Sprite::getY (void) const
{
  return _rect.y;
}

int Sprite::getWidth (void) const
{
  return _rect.w;
}

int Sprite::getHeight (void) const
{
  return _rect.h;
}

} // namespace falcon
