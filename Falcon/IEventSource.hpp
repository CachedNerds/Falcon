#pragma once
#include <memory>

#include "Event.hpp"

namespace falcon 
{

class IEventSource 
{
public:
  virtual bool nextEvent (void) = 0;
  virtual std::unique_ptr<const Event> getNextEvent (void) = 0;
};

}
