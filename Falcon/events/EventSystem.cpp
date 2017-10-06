//
//  InputEventQueue.cpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

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

Event * EventSystem::getNextEvent (void)
{
  EventType type = EventType (this->event_.type);
  FACTORYMETHOD createEvent = this->factoryMethods_[type];

  Event * event;
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
