//
//  SpriteEventHandler.h
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef SpriteEventHandler_h
#define SpriteEventHandler_h

#include "EventHandler.h"

class Sprite;

class SpriteEventHandler : public EventHandler
{
public:
  
  SpriteEventHandler (Sprite * sprite);
  
  void handleKeyDown (KEYDOWN & event);
  
private:
  
  Sprite * sprite_;
  
};


#endif /* SpriteEventHandler_h */
