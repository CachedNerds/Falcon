//
//  EventHandler.h
//  Falcon
//
//  Created by Danny Peck on 4/4/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef EventHandler_h
#define EventHandler_h

namespace Falcon
{

namespace Events
{
  
  class KeyDown;
  class KeyUp;
  class Quit;
  class MouseMotion;
  class MouseDown;
  class MouseUp;
  class MouseWheel;
  class WindowEvent;
  class NullEvent;
  
  class EventHandler
  {
  public:
    
    virtual void handleKeyDown (KeyDown & event);
    
    virtual void handleKeyUp (KeyUp & event);
    
    virtual void handleQuit (Quit & event);
    
    virtual void handleMouseMotion (MouseMotion & event);
    
    virtual void handleMouseDown (MouseDown & event);
    
    virtual void handleMouseUp (MouseUp & event);
    
    virtual void handleMouseWheel (MouseWheel & event);
    
    virtual void handleWindowEvent (WindowEvent & event);
    
    virtual void handleNullEvent (NullEvent & event);
    
  };

} // namespace Events
  
} // namespace Falcon

#endif /* EventHandler_h */
