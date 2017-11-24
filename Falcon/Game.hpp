#pragma once

#include "Event.hpp"
#include <set>
#include <memory>
#include <queue>

namespace falcon
{

class GameObject;

class IEventSource;

class IWindow;

class Game
{
public:
  explicit Game (void);
  Game(std::shared_ptr<IEventSource> externalEventSource);
  Game(std::shared_ptr<IWindow> window);
  Game(std::shared_ptr<IEventSource> externalEventSource, std::shared_ptr<IWindow> window);

  virtual ~Game (void);

  void loop (void);
  void registerGameObject (std::shared_ptr<GameObject> object);
  void queueEvent (std::unique_ptr<const Event> event);
  void quit(void);

private:
  void queueExternalEvents (void);
  void processEventQueue (void);

  std::shared_ptr<IWindow> _window;
  std::shared_ptr<IEventSource> _externalEventSource;
  std::queue<std::unique_ptr<const Event>> _eventQueue;
  std::set<std::shared_ptr<GameObject>> _gameObjects;

  bool _keepGoing = true;
};

} // namespace falcon