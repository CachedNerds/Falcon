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
  this->factoryMethods_[KEYDOWN] = &EventFactory::createKeyDown;
  this->factoryMethods_[KEYUP] = &EventFactory::createKeyUp;
  this->factoryMethods_[QUIT] = &EventFactory::createQuit;
  this->factoryMethods_[MOUSEMOTION] = &EventFactory::createMouseMotion;
  this->factoryMethods_[MOUSEDOWN] = &EventFactory::createKeyDown;
  this->factoryMethods_[MOUSEUP] = &EventFactory::createMouseUp;
  this->factoryMethods_[MOUSEWHEEL] = &EventFactory::createMouseWheel;
  this->factoryMethods_[WINDOWEVENT] = &EventFactory::createWindowEvent;
  this->factoryMethods_[NULLEVENT] = &EventFactory::createNullEvent;
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
  FACTORYMETHOD createEvent = this->factoryMethods_[type];
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
