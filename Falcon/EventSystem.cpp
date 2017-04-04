//
//  EventSystem.cpp
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "EventSystem.h"

EventSystem & EventSystem::instance (void)
{
  static EventSystem system;
  return system;
}

EventSystem::EventSystem (void)
{

}

void EventSystem::registerForEvent (Event & event, EventListener * listener)
{
  EventType & type = event.getType ();
  std::vector<EventListener *> * listeners = this->listeners_[type];
  if (listeners == nullptr)
  {
    listeners = new std::vector <EventListener *> ();
  }
  listeners->push_back (listener);
  this->listeners_[type] = listeners;
}

void EventSystem::fire (Event & event)
{
  std::vector<EventListener *> * listeners = this->listeners_[event.getType ()];
  if (listeners != nullptr)
  {
    for (auto iterator = listeners->begin (); iterator != listeners->end (); ++ iterator)
    {
      (*iterator)->notify (event);
    }
  }
}

bool EventSystem::getEvent (void)
{
  Event & event = this->eventQueue_.getEvent ();
  if (event != Events::QUIT)
  {
    this->fire (event);
  }
  else
  {
    return false;
  }

  return true;
}
