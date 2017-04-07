//
//  InputEventQueue.cpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "EventSystem.h"
#include "Events.h"

namespace Falcon
{

namespace Events
{

EventSystem & EventSystem::instance (void)
{
  static EventSystem system;
  return system;
}

EventSystem::EventSystem (void)
: eventFactory_ (new EventFactory)
{
  this->events_[KEYDOWN] = &EventFactory::createKeyDown;
  this->events_[KEYUP] = &EventFactory::createKeyUp;
  this->events_[QUIT] = &EventFactory::createQuit;
  this->events_[MOUSEMOTION] = &EventFactory::createMouseMotion;
  this->events_[MOUSEDOWN] = &EventFactory::createKeyDown;
  this->events_[MOUSEUP] = &EventFactory::createMouseUp;
  this->events_[MOUSEWHEEL] = &EventFactory::createMouseWheel;
  this->events_[WINDOWEVENT] = &EventFactory::createWindowEvent;
  this->events_[NULLEVENT] = &EventFactory::createNullEvent;
}

EventSystem::~EventSystem (void)
{
  delete this->eventFactory_;
}

bool EventSystem::nextEvent (void)
{
  return SDL_PollEvent (&this->event_);
}

Event * EventSystem::getNextEvent (void)
{
  EventType type = EventType (this->event_.type);
  FACTORYMETHOD createEvent = this->events_[type];
  if (createEvent == nullptr)
  {
    return this->eventFactory_->createNullEvent (this->event_);
  }
  else
  {
    return (this->eventFactory_->*createEvent)(this->event_);
  }
}

} // namespace Events

} // namespace Falcon
