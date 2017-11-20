#include "Game.hpp"
#include "SDL/System.hpp"
#include "SDL/SdlEvent.hpp"
#include "SDL/Events.hpp"
#include "SDL/EventSystem.hpp"
#include "GameObject.hpp"

namespace falcon
{

Game::Game (void)
: _window()
, _eventSystem(EventSystem::instance())
, _eventQueue()
, _gameObjects()
{
  using sdl::System;
  using sdl::Window;
  
  System::instance()
          .enableAll()
          .initialize();

  // must be created after System has been initialized
  _window = std::make_shared<Window>("Game", 0, 0, 500, 500);
}

Game::~Game (void)
{

}

void Game::registerGameObject (std::shared_ptr<GameObject> object)
{
  if (object) {
   _gameObjects.insert(object); 
  }
}

void Game::queueEvent (std::unique_ptr<const Event> event)
{
  _eventQueue.push(std::move(event));
}

void Game::quit (void)
{
  _keepGoing = false;
}

void Game::queueSdlEvents (void)
{
  while (_eventSystem.nextEvent())
  {
    queueEvent(_eventSystem.getNextEvent());
  }
}

void Game::processEventQueue (void)
{
  while (!_eventQueue.empty())
  {
    std::shared_ptr<const Event> event = std::move(_eventQueue.front());
    for (auto gameObject : _gameObjects) {
      gameObject->handleEvent(*event);
    }
    _eventQueue.pop();
  }
}

void Game::loop (void)
{
  while (_keepGoing)
  {
    // add sdl events to the event queue
    queueSdlEvents();

    processEventQueue();

    // update
    for (auto gameObject : _gameObjects)
    {
      gameObject->update();
    }

    // draw
    for (auto gameObject : _gameObjects)
    {
      gameObject->draw(*_window);
    }

    _window->update();
  }
}

} // namespace falcon