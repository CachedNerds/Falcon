//
//  EventHandler.h
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventHandler_h
#define EventHandler_h

class KEYDOWN;
class KEYUP;
class QUIT;
class MOUSEMOTION;
class MOUSEDOWN;
class MOUSEUP;
class MOUSEWHEEL;
class WINDOW;
class NULLEVENT;

class EventHandler
{
public:
  
  virtual void handleKeyDown (KEYDOWN & event);
  
  virtual void handleKeyUp (KEYUP & event);
  
  virtual void handleQuit (QUIT & event);
  
  virtual void handleMouseMotion (MOUSEMOTION & event);
  
  virtual void handleMouseDown (MOUSEDOWN & event);
  
  virtual void handleMouseUp (MOUSEUP & event);
  
  virtual void handleMouseWheel (MOUSEWHEEL & event);

  virtual void handleWindow (WINDOW & event);
  
  virtual void handleNullEvent (NULLEVENT & event);
  
};

#endif /* EventHandler_h */
