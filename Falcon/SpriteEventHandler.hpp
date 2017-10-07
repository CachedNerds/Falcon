#ifndef _FALCON_SPRITE_EVENT_HANDLER_HPP_
#define _FALCON_SPRITE_EVENT_HANDLER_HPP_

#include "Events/EventHandler.hpp"

namespace Falcon
{

using Events::EventHandler;

namespace Events
{
  class KeyDown;
} // namespace Events

using Events::KeyDown;

class Sprite;

class SpriteEventHandler : public EventHandler
{
public:

  SpriteEventHandler (Sprite * const sprite);

  void handleKeyDown (const KeyDown & event) override;

private:

  Sprite * const sprite_;

};

} // namespace Falcon


#endif // _FALCON_SPRITE_EVENT_HANDLER_HPP_
