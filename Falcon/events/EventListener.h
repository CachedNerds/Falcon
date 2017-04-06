//
//  EventListener.h
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventListener_h
#define EventListener_h

#include "Event.h"

namespace Falcon
{

namespace Events
{

class EventListener
{
public:
  
  virtual void notify (Event & event) = 0;
  
};

} // namespace Events

} // namespace Falcon

#endif /* EventListener_h */
