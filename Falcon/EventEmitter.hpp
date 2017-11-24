#pragma once

#include <memory>
#include "Event.hpp"

namespace falcon
{

  class Event;

class EventEmitter
{
public:
  virtual void emitEvent (std::unique_ptr<const Event> event) = 0;
};

} // namespace falcon
