#pragma once

#include "Event.hpp"

namespace falcon::events
{

class EventListener
{
public:
  virtual void handleEvent (const Event & event) = 0;
};

} // namespace falcon::events