#pragma once

#include "Event.hpp"
#include "EventFactory.hpp"
#include "EventType.hpp"
#include <SDL2/SDL.h>
#include <map>
#include <memory>

namespace falcon::events
{

class EventSystem
{
public:
  static EventSystem & instance (void);

  bool nextEvent (void);
  std::unique_ptr<const Event> getNextEvent (void);

private:
  EventSystem (void);

  SDL_Event _event;
  EventFactory _eventFactory;

  typedef std::unique_ptr<const Event> (EventFactory::*CreateEventFactoryMethod) (const SDL_Event &);
  using EventFactoryMethodMap = std::map<EventType, CreateEventFactoryMethod>;
  EventFactoryMethodMap _eventFactoryMethods;

};

} // namespace falcon::events