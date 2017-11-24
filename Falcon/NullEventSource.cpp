#include "NullEventSource.hpp"

namespace falcon
{
  bool NullEventSource::nextEvent (void)
  {
    return false;
  }

  std::unique_ptr<const Event> NullEventSource::getNextEvent (void) 
  {
    return nullptr;
  }
}
