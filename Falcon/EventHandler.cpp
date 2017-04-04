//
//  EventHandler.cpp
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "EventHandler.h"

EventHandler::EventHandler (void)
{

}

void EventHandler::registerForEvent (EventType & type, EventListener * listener)
{
  std::vector<EventListener *> * listeners = this->listeners_[type];
  if (listeners == nullptr)
  {
    listeners = new std::vector <EventListener *> ();
  }
  listeners->push_back (listener);
  this->listeners_[type] = listeners;
}

void EventHandler::handle (EventType & type)
{
  std::vector<EventListener *> * listeners = this->listeners_[type];
  if (listeners != nullptr)
  {
    for (auto iterator = listeners->begin (); iterator != listeners->end (); ++ iterator)
    {
      (*iterator)->notify (this->event_);
    }
  }
}

bool EventHandler::getEvent (void)
{
  bool result = SDL_WaitEvent (&this->event_);
  EventType type = this->event_.type;
  if (type != Events::QUIT)
  {
    this->handle (type);
  }
  else
  {
    result = false;
  }

  return result;
}
