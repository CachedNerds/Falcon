//
//  EventHandler.h
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventHandler_h
#define EventHandler_h

#include <SDL2/SDL.h>
#include <map>
#include <vector>
#include "EventListener.h"
#include "Events.h"

class EventHandler
{
public:
  
  EventHandler (void);
  
  void registerForEvent (EventType & type, EventListener * listener);
  
  void handle (EventType & type);
  
  bool getEvent (void);
  
private:
  
  SDL_Event event_;
  
  std::map<EventType, std::vector<EventListener *> *> listeners_;

};

#endif /* EventHandler_h */
