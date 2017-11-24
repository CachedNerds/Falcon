#include "Game.hpp"
#include "GameObject.hpp"
#include "IEventSource.hpp"
#include "NullEventSource.hpp"
#include "NullWindow.hpp"
#include <chrono>
#include <thread>

namespace falcon
{

Game::Game (void) 
: Game(std::make_shared<NullEventSource>(), std::make_shared<NullWindow>())
{
}

Game::Game (std::shared_ptr<IEventSource> externalEventSource) 
: Game(externalEventSource, std::make_shared<NullWindow>())
{
}

Game::Game (std::shared_ptr<IWindow> window) 
: Game(std::make_shared<NullEventSource>(), window)
{
}

Game::Game (std::shared_ptr<IEventSource> externalEventSource, std::shared_ptr<IWindow> window) 
: _eventQueue() 
, _gameObjects()
, _externalEventSource(externalEventSource)
, _window(window)
{
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

void Game::queueExternalEvents (void)
{
  if (_externalEventSource) {
    while (_externalEventSource->nextEvent())
    {
      queueEvent(_externalEventSource->getNextEvent());
    }
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
    queueExternalEvents();

    processEventQueue();

    // update
    for (auto gameObject : _gameObjects)
    {
      gameObject->update();
    }

    // draw
    if (_window) {
      for (const std::shared_ptr<GameObject>& gameObject : _gameObjects)
      {
        _window->draw(gameObject);
      }

      _window->update();
    }

    // sleep for 1 milisecond
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
  }
}

} // namespace falcon