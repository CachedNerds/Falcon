//
//  Event.cpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include "Event.hpp"
#include "EventHandler.hpp"

namespace Falcon::Events
{

Event::Event (const EventType & type)
: type_ (type)
{

}

Event::~Event (void)
{

}

EventType Event::getType (void) const
{
  return this->type_;
}

bool Event::operator == (const Event & rhs) const
{
  return this->type_ == rhs.type_;
}

bool Event::operator != (const Event & rhs) const
{
  return !(this->operator == (rhs));
}

} // namespace Falcon::Events
