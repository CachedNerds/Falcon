#pragma once

#include "SDL/Window.hpp"
#include "Event.hpp"
#include <set>
#include <memory>
#include <queue>

namespace falcon
{

namespace sdl::events
{
  class EventSystem;
} // namespace sdl::events

class GameObject;

using sdl::events::EventSystem;

class Game
{
public:
  explicit Game (void);
  virtual ~Game (void);

  void loop (void);
  void registerGameObject (std::shared_ptr<GameObject> object);
  void queueEvent (std::unique_ptr<const Event> event);

private:
  void queueSdlEvents (void);
  void processEventQueue (void);

  std::shared_ptr<sdl::Window> _window;
  EventSystem & _eventSystem;
  std::queue<std::unique_ptr<const Event>> _eventQueue;
  std::set<std::shared_ptr<GameObject>> _gameObjects;
};

} // namespace falcon