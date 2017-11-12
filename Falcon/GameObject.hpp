#pragma once

#include "Events/EventListener.hpp"
#include "Events/EventHandler.hpp"
#include "Updateable.hpp"
#include "Drawable.hpp"
#include <memory>

namespace falcon
{

using events::EventListener;
using events::EventHandler;
using events::Event;

class Game;

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