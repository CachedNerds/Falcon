#ifndef _FALCON_EVENTS_EVENT_HANDLER_HPP_
#define _FALCON_EVENTS_EVENT_HANDLER_HPP_

namespace Falcon::Events
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

    virtual ~EventHandler (void);

    virtual void handleKeyDown (const KeyDown & event);

    virtual void handleKeyUp (const KeyUp & event);

    virtual void handleQuit (const Quit & event);

    virtual void handleMouseMotion (const MouseMotion & event);

    virtual void handleMouseDown (const MouseDown & event);

    virtual void handleMouseUp (const MouseUp & event);

    virtual void handleMouseWheel (const MouseWheel & event);

    virtual void handleWindowEvent (const WindowEvent & event);

    virtual void handleNullEvent (const NullEvent & event);

};

} // namespace Falcon::Events

#endif // _FALCON_EVENTS_EVENT_HANDLER_HPP_
