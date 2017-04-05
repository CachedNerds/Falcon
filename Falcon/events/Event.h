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

typedef Uint32 EventType;

class Event
{
public:
  
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
  
  virtual void init (SDL_Event & event)
  {
    // do nothing
  };
  
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
  
  void init (SDL_Event & event)
  {
    this->code_ = Key (event.key.keysym.sym);
  };
  
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
  
  void accept (EventHandler & handler)
  {
    handler.handleKeyUp (*this);
  }
  
};

class Quit : public Event
{
public:
  
  void accept (EventHandler & handler)
  {
    handler.handleQuit (*this);
  }
  
};

class MouseMotion : public Event
{
public:
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseMotion (*this);
  }
  
};

class MouseDown : public Event
{
public:
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseDown (*this);
  }
  
};

class MouseUp : public Event
{
public:
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseUp (*this);
  }
  
};

class MouseWheel : public Event
{
public:
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseWheel (*this);
  }
  
};

class Window : public Event
{
public:
  
  void accept (EventHandler & handler)
  {
    handler.handleWindow (*this);
  }
  
};

class NullEvent : public Event
{
public:
  
  void accept (EventHandler & handler)
  {
    handler.handleNullEvent (*this);
  }
  
};

#endif /* Event_h */
