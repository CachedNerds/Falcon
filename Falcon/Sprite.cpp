#include "Sprite.hpp"
#include "SpriteEventHandler.hpp"
#include "SDL/Window.hpp"
#include "Events/Event.hpp"
#include "Events/Key.hpp"
#include "SDL/IMG_Exception.hpp"

namespace Falcon
{

Sprite::Sprite (Game & game, const std::string & image, int x, int y)
: GameObject (game, new SpriteEventHandler (this))
, image_ (nullptr)
, rect_ ()
{
  SDL_Surface * surface = IMG_Load (image.c_str ());
  if (!surface)
  {
    throw SDL::IMG_Exception (IMG_GetError ());
  }

  this->image_ = surface;

  this->rect_.x = x;
  this->rect_.y = y;
  this->rect_.w = this->image_->w;
  this->rect_.h = this->image_->h;
}

Sprite::~Sprite (void)
{
  SDL_FreeSurface (this->image_);
  this->image_ = nullptr;
}
  
void Sprite::update (void)
{
  // update
}

void Sprite::draw (Window & window)
{
  SDL_BlitSurface (this->image_, NULL, window.getScreen (), &this->rect_);
}

void Sprite::setX (int x)
{
  this->rect_.x = x;
}

int Sprite::getX (void) const
{
  return this->rect_.x;
}

void Sprite::setY (int y)
{
  this->rect_.y = y;
}

int Sprite::getY (void) const
{
  return this->rect_.y;
}

int Sprite::getWidth (void) const
{
  return this->rect_.w;
}

int Sprite::getHeight (void) const
{
  return this->rect_.h;
}

} // namespace Falcon
