#pragma once

#include "Events/EventHandler.hpp"

namespace falcon
{

namespace events
{
  class KeyDown;
} // namespace events

using events::EventHandler;
using events::KeyDown;

class Sprite;

class SpriteEventHandler : public EventHandler
{
public:
  SpriteEventHandler (Sprite & sprite);

  void handleKeyDown (const KeyDown & event) override;

private:
  Sprite & _sprite;
};

} // namespace falcon