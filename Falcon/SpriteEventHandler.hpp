//
//  SpriteEventHandler.hpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef SpriteEventHandler_hpp
#define SpriteEventHandler_hpp

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


#endif /* SpriteEventHandler_hpp */
