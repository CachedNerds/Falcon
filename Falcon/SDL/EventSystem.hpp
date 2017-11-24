#pragma once

#include "SdlEvent.hpp"
#include "EventFactory.hpp"
#include "EventType.hpp"
#include "../IEventSource.hpp"
#include <SDL2/SDL.h>
#include <map>
#include <memory>

namespace falcon::sdl::events
{

class EventSystem : public IEventSource
{
public:
  static std::shared_ptr<EventSystem> instance (void);

  bool nextEvent (void) override;
  std::unique_ptr<const Event> getNextEvent (void) override;

private:
  EventSystem (void);

  SDL_Event _event;
  EventFactory _eventFactory;

  typedef std::unique_ptr<const SdlEvent> (EventFactory::*CreateEventFactoryMethod) (const SDL_Event &);
  using EventFactoryMethodMap = std::map<EventType, CreateEventFactoryMethod>;
  EventFactoryMethodMap _eventFactoryMethods;
};

} // namespace falcon::sdl::events