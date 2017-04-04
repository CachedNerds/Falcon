//
//  Event.h
//  Falcon
//
//  Created by Danny Peck on 4/3/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Event_h
#define Event_h

#include <iostream>
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
    
  };
  
  virtual void accept (EventHandler & handler) = 0;
  
protected:
  
  EventType type_;
  
};

class KEYDOWN : public Event
{
public:
  
  KEYDOWN (void)
  {
    this->type_ = SDL_KEYDOWN;
  }
  
  void init (SDL_Event & event)
  {
    std::cout << "KEYDOWN INIT" << std::endl;
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

class KEYUP : public Event
{
public:
  
  KEYUP (void)
  {
    this->type_ = SDL_KEYUP;
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleKeyUp (*this);
  }
  
};

class QUIT : public Event
{
public:
  
  QUIT (void)
  {
    this->type_ = SDL_QUIT;
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleQuit (*this);
  }
  
};

class MOUSEMOTION : public Event
{
public:
  
  MOUSEMOTION (void)
  {
    this->type_ = SDL_MOUSEMOTION;
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseMotion (*this);
  }
  
};

class MOUSEDOWN : public Event
{
public:
  
  MOUSEDOWN (void)
  {
    this->type_ = SDL_MOUSEBUTTONDOWN;
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseDown (*this);
  }
  
};

class MOUSEUP : public Event
{
public:
  
  MOUSEUP (void)
  {
    this->type_ = SDL_MOUSEBUTTONUP;
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseUp (*this);
  }
  
};

class MOUSEWHEEL : public Event
{
public:
  
  MOUSEWHEEL (void)
  {
    this->type_ = SDL_MOUSEWHEEL;
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleMouseWheel (*this);
  }
  
};

class WINDOW : public Event
{
public:
  
  WINDOW (void)
  {
    this->type_ = SDL_WINDOWEVENT;
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleWindow (*this);
  }
  
};

class NULLEVENT: public Event
{
public:
  
  NULLEVENT (void)
  {
    this->type_ = 0;
  }
  
  void accept (EventHandler & handler)
  {
    handler.handleNullEvent (*this);
  }
  
};

namespace Events
{
  static KEYDOWN KEYDOWN;
  static KEYUP KEYUP;
  static QUIT QUIT;
  static MOUSEMOTION MOUSEMOTION;
  static MOUSEDOWN MOUSEDOWN;
  static MOUSEUP MOUSEUP;
  static MOUSEWHEEL MOUSEWHEEL;
  static WINDOW WINDOW;
  static NULLEVENT NULLEVENT;
  
  static Event & getEvent (Uint32 type)
  {
    switch (type)
    {
      case SDL_KEYDOWN:
        return KEYDOWN;
      
      case SDL_KEYUP:
        return KEYUP;
        
      case SDL_QUIT:
        return QUIT;
        
      case SDL_MOUSEMOTION:
        return MOUSEMOTION;
        
      case SDL_MOUSEBUTTONDOWN:
        return MOUSEDOWN;
        
      case SDL_MOUSEBUTTONUP:
        return MOUSEUP;
        
      case SDL_MOUSEWHEEL:
        return MOUSEWHEEL;
        
      case SDL_WINDOWEVENT:
        return WINDOW;
        
      default:
        return NULLEVENT;
    }
  }
}

#endif /* Event_h */
