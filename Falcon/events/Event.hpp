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

#endif /* Event_hpp */
