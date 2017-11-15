#pragma once

#include "EventListener.hpp"
#include "SDL/EventHandler.hpp"
#include "Updateable.hpp"
#include "Drawable.hpp"
#include <memory>

namespace falcon
{

class Game;

using sdl::events::EventHandler;

class GameObject : public Drawable, public EventListener, public Updateable
{
public:
  virtual void handleEvent (const Event & event) override;

protected:
  GameObject (Game & game, std::unique_ptr<EventHandler> eventHandler);
  virtual ~GameObject (void);

  Game & getGame (void) const;

  Game & _game;
  std::unique_ptr<EventHandler> _eventHandler;
};

} // namespace falcon