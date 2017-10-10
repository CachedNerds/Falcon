#include <iostream>
#include "EventSystem.hpp"
#include "Events.hpp"

namespace Falcon::Events
{

EventSystem & EventSystem::instance (void)
{
  static EventSystem system;
  return system;
}

EventSystem::EventSystem (void)
: event_ ()
, eventFactory_ ()
, factoryMethods_ ()
{
  this->factoryMethods_[EventType::KeyDown] = &EventFactory::createKeyDown;
  this->factoryMethods_[EventType::KeyUp] = &EventFactory::createKeyUp;
  this->factoryMethods_[EventType::Quit] = &EventFactory::createQuit;
  this->factoryMethods_[EventType::MouseMotion] = &EventFactory::createMouseMotion;
  this->factoryMethods_[EventType::MouseDown] = &EventFactory::createKeyDown;
  this->factoryMethods_[EventType::MouseUp] = &EventFactory::createMouseUp;
  this->factoryMethods_[EventType::MouseWheel] = &EventFactory::createMouseWheel;
  this->factoryMethods_[EventType::WindowEvent] = &EventFactory::createWindowEvent;
}

bool EventSystem::nextEvent (void)
{
  return SDL_PollEvent (&this->event_);
}

std::unique_ptr<const Event> EventSystem::getNextEvent (void)
{
  EventType type = EventType (this->event_.type);
  CREATE_EVENT_METHOD createEvent = this->factoryMethods_[type];

  std::unique_ptr<const Event> event (nullptr);
  if (createEvent == nullptr)
  {
    event = this->eventFactory_.createNullEvent (this->event_);
  }
  else
  {
    event = (this->eventFactory_.*createEvent)(this->event_);
  }

  return event;
}

} // namespace Falcon::Events
