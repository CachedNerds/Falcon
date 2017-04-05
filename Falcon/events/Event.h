//
//  Event.h
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Event_h
#define Event_h

#include <SDL2/SDL.h>
#include "EventHandler.h"
#include "Key.h"

namespace Falcon
{

namespace Events
{

enum EventType
{
  KEYDOWN = SDL_KEYDOWN,
  KEYUP = SDL_KEYUP,
  QUIT = SDL_QUIT,
  MOUSEMOTION = SDL_MOUSEMOTION,
  MOUSEDOWN = SDL_MOUSEBUTTONDOWN,
  MOUSEUP = SDL_MOUSEBUTTONUP,
  MOUSEWHEEL = SDL_MOUSEWHEEL,
  WINDOWEVENT = SDL_WINDOWEVENT,
  NULLEVENT = 0
};

class Event
{
public:
    
  virtual ~Event (void)
  {
      
  }
    
  EventType & getType (void)
  {
    return this->type_;
  }
  
  bool operator == (Event & rhs) const
  {
    return this->type_ == rhs.getType ();
  }
  
  bool operator != (Event & rhs) const
  {
    return !(this->operator == (rhs));
  }
  
  virtual void accept (EventHandler & handler) = 0;
  
protected:
  
  Event (EventType type)
  {
    this->type_ = type;
  }
  
  EventType type_;
  
};

class KeyDown : public Event
{
public:
  
  KeyDown (SDL_Event & event)
  : Event (EventType (event.type))
  {
    this->code_ = Key (event.key.keysym.sym);
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleKeyDown (*this);
  }
  
  Key getKey (void)
  {
    return this->code_;
  }
  
private:
  
  Key code_;
  
};

class KeyUp : public Event
{
public:
  
  KeyUp (SDL_Event & event)
  : Event (EventType (event.type))
  {
    
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleKeyUp (*this);
  }
  
};

class Quit : public Event
{
public:
  
  Quit (SDL_Event & event)
  : Event (EventType (event.type))
  {
    
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleQuit (*this);
  }
  
};

class MouseMotion : public Event
{
public:
  
  MouseMotion (SDL_Event & event)
  : Event (EventType (event.type))
  {
    
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseMotion (*this);
  }
  
};

class MouseDown : public Event
{
public:
  
  MouseDown (SDL_Event & event)
  : Event (EventType (event.type))
  {
    
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseDown (*this);
  }
  
};

class MouseUp : public Event
{
public:
  
  MouseUp (SDL_Event & event)
  : Event (EventType (event.type))
  {
    
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseUp (*this);
  }
  
};

class MouseWheel : public Event
{
public:
  
  MouseWheel (SDL_Event & event)
  : Event (EventType (event.type))
  {
    
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseWheel (*this);
  }
  
};

class WindowEvent : public Event
{
public:
  
  WindowEvent (SDL_Event & event)
  : Event (EventType (event.type))
  {
    
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleWindowEvent (*this);
  }
  
};

class NullEvent : public Event
{
public:
  
  NullEvent (SDL_Event & event)
  : Event (EventType (event.type))
  {
    
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleNullEvent (*this);
  }
  
};
  
} // namespace Events
  
} // namespace Falcon

#endif /* Event_h */
