//
//  EventListener.hpp
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventListener_hpp
#define EventListener_hpp

#include "Event.hpp"

namespace Falcon
{

namespace Events
{

class EventListener
{
public:

  virtual void handleEvent (Event & event) = 0;

};

} // namespace Events

} // namespace Falcon

#endif /* EventListener_hpp */
