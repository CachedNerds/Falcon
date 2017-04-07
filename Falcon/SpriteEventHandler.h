//
//  SpriteEventHandler.h
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef SpriteEventHandler_h
#define SpriteEventHandler_h

#include "events/EventHandler.h"

namespace Falcon
{

using Events::EventHandler;
using Events::KeyDown;

class Sprite;

class SpriteEventHandler : public EventHandler
{
public:
  
  SpriteEventHandler (Sprite * sprite);
  
  void handleKeyDown (KeyDown & event);
  
private:
  
  Sprite * sprite_;
  
};

} // namespace Falcon


#endif /* SpriteEventHandler_h */
