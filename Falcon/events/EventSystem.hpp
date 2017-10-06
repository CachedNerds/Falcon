//
//  EventSystem.hpp
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventSystem_hpp
#define EventSystem_hpp

#include "Event.hpp"
#include "EventFactory.hpp"
#include "EventType.hpp"

#include <SDL2/SDL.h>
#include <map>
#include <memory>

namespace Falcon::Events
{

class Event;

class EventSystem
{
public:

  static EventSystem & instance (void);

  bool nextEvent (void);

  Event * getNextEvent (void);

private:

  EventSystem (void);

  SDL_Event event_;

  EventFactory eventFactory_;

  typedef Event * (EventFactory::*FACTORYMETHOD) (const SDL_Event &);
  std::map<EventType, FACTORYMETHOD> factoryMethods_;

};

} // namespace Falcon::Events

#endif /* EventSystem_hpp */
