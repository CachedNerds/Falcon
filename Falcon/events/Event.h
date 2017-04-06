//
//  Event.h
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Event_h
#define Event_h

#include <SDL2/SDL.h>
#include "EventType.h"
#include "Key.h"

namespace Falcon
{

namespace Events
{
class EventHandler;

class Event
{
public:
  
  Event (EventType type);
  
  virtual ~Event (void);
  
  EventType & getType (void);
  
  bool operator == (Event & rhs) const;
  
  bool operator != (Event & rhs) const;
  
  virtual void accept (EventHandler & handler) = 0;
  
private:
  
  EventType type_;
  
};

} // namespace Events

} // namespace Falcon

#endif /* Event_h */
