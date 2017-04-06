//
//  Event.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "Event.h"
#include "EventHandler.h"

namespace Falcon
{

namespace Events
{

Event::Event (EventType type)
{
  this->type_ = type;
}

Event::~Event (void)
{
  
}

EventType & Event::getType (void)
{
  return this->type_;
}

bool Event::operator == (Event & rhs) const
{
  return this->type_ == rhs.getType ();
}

bool Event::operator != (Event & rhs) const
{
  return !(this->operator == (rhs));
}

} // namespace Events

} // namespace Falcon
