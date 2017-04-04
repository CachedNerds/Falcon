//
//  EventSystem.h
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventSystem_h
#define EventSystem_h

#include <SDL2/SDL.h>
#include <map>
#include <vector>
#include "EventListener.h"
#include "Event.h"
#include "EventQueue.h"

class EventSystem
{
public:
  
  static EventSystem & instance (void);
  
  void registerForEvent (Event & event, EventListener * listener);
  
  void fire (Event & event);
  
  bool getEvent (void);
  
private:
  
  EventSystem (void);
  
  EventQueue eventQueue_;
  
  std::map<EventType, std::vector<EventListener *> *> listeners_;

};

#endif /* EventSystem_h */
