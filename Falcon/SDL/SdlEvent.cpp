#include "SdlEvent.hpp"

namespace falcon::sdl::events
{

SdlEvent::SdlEvent (const EventType & type)
: _type(type)
{

}

EventType SdlEvent::getType (void) const
{
  return _type;
}

bool SdlEvent::operator == (const SdlEvent & rhs) const
{
  return _type == rhs._type;
}

bool SdlEvent::operator != (const SdlEvent & rhs) const
{
  return !(this->operator == (rhs));
}

} // namespace falcon::sdl::events