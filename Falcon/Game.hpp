#pragma once

#include "SDL/Window.hpp"
#include <vector>
#include <set>
#include <memory>

namespace falcon
{

namespace events
{
  class EventSystem;
} // namespace events

class GameObject;

class Game
{
public:
  Game (void);
  virtual ~Game (void);

  void loop (void);
  void registerGameObject (std::shared_ptr<GameObject> object);

private:
  bool processEvents (void);

  std::shared_ptr<sdl::Window> _window;
  events::EventSystem & _eventSystem;
  std::set<std::shared_ptr<GameObject>> _gameObjects;
};

} // namespace falcon