#include "EventSystem.hpp"
#include "Events.hpp"

namespace falcon::sdl::events
{

std::shared_ptr<EventSystem> EventSystem::instance (void)
{
  static EventSystem system;
  // a no-op custom deleter because this is cleaned up at the end of the program I guess?
  auto noopDeleter = [](EventSystem* eventSystem) {};
  return std::shared_ptr<EventSystem>(&system, noopDeleter);
}

EventSystem::EventSystem (void)
: _event()
, _eventFactory()
, _eventFactoryMethods()
{
  _eventFactoryMethods[EventType::KeyDown] = &EventFactory::createKeyDown;
  _eventFactoryMethods[EventType::KeyUp] = &EventFactory::createKeyUp;
  _eventFactoryMethods[EventType::Quit] = &EventFactory::createQuit;
  _eventFactoryMethods[EventType::MouseMotion] = &EventFactory::createMouseMotion;
  _eventFactoryMethods[EventType::MouseDown] = &EventFactory::createKeyDown;
  _eventFactoryMethods[EventType::MouseUp] = &EventFactory::createMouseUp;
  _eventFactoryMethods[EventType::MouseWheel] = &EventFactory::createMouseWheel;
  _eventFactoryMethods[EventType::WindowEvent] = &EventFactory::createWindowEvent;
}

bool EventSystem::nextEvent (void)
{
  return SDL_PollEvent(&_event);
}

std::unique_ptr<const Event> EventSystem::getNextEvent (void)
{
  EventType type = EventType(_event.type);
  CreateEventFactoryMethod createEvent = _eventFactoryMethods[type];

  std::unique_ptr<const SdlEvent> event(nullptr);
  if (createEvent == nullptr)
  {
    event = _eventFactory.createNullEvent(_event);
  }
  else
  {
    event = (_eventFactory.*createEvent)(_event);
  }

  return event;
}

} // namespace falcon::sdl::events