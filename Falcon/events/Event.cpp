#include "Event.hpp"

namespace falcon::events
{

Event::Event (const EventType & type)
: _type(type)
{

}

Event::~Event (void)
{

}

EventType Event::getType (void) const
{
  return _type;
}

bool Event::operator == (const Event & rhs) const
{
  return _type == rhs._type;
}

bool Event::operator != (const Event & rhs) const
{
  return !(this->operator == (rhs));
}

} // namespace falcon::events