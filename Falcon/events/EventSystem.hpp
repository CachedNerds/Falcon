//
//  EventSystem.hpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventSystem_hpp
#define EventSystem_hpp

#include <SDL2/SDL.h>
#include <map>
#include "Event.hpp"
#include "EventFactory.hpp"
#include "EventType.hpp"

namespace Falcon
{

namespace Events
{

class Event;

class EventSystem
{
public:

  static EventSystem & instance (void);

  bool nextEvent (void);

  Event * getNextEvent (void);

private:

  SDL_Event event_;

  typedef Event * (EventFactory::*FACTORYMETHOD) (SDL_Event &);

  std::map<EventType, FACTORYMETHOD> factoryMethods_;

  EventFactory * eventFactory_;

  EventSystem (void);

  ~EventSystem (void);

};

} // namespace Events

} // namespace Falcon

#endif /* EventSystem_hpp */
