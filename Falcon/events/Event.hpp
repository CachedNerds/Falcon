//
//  Event.hpp
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Event_hpp
#define Event_hpp

#include <SDL2/SDL.h>
#include "EventType.hpp"
#include "Key.hpp"

namespace Falcon::Events
{
class EventHandler;

class Event
{
public:

  Event (const EventType & type);
  
  virtual ~Event (void);
  
  EventType getType (void) const;
  
  bool operator == (const Event & rhs) const;
  
  bool operator != (const Event & rhs) const;
  
  virtual void accept (EventHandler & handler) = 0;

protected:

  EventType type_;

};

} // namespace Falcon::Events

#endif /* Event_hpp */
