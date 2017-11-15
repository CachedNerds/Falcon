#pragma once

namespace falcon
{

namespace sdl::events
{
  class EventHandler;
} // namespace sdl::events

using sdl::events::EventHandler;

class Event
{
public:
  virtual void accept (EventHandler & handler) const = 0;
};

} // namespace falcon