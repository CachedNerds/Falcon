#include "Game.hpp"
#include "SDL/System.hpp"
#include "Events/Event.hpp"
#include "Events/Events.hpp"
#include "Events/EventSystem.hpp"
#include "GameObject.hpp"

namespace falcon
{

Game::Game (void)
: _window()
, _eventSystem(events::EventSystem::instance())
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
  _gameObjects.insert(object);
}

bool Game::processEvents (void)
{
  using events::EventType;

  bool keepGoing = true;
  
  // handle input / events
  while (_eventSystem.nextEvent())
  {
    // get next event
    std::shared_ptr<const Event> event = _eventSystem.getNextEvent();
    
    // handle event
    if (event->getType() == EventType::NullEvent)
    {
      // do nothing
    }
    else if (event->getType() == EventType::Quit)
    {
      keepGoing = false;
      break;
    }
    else
    {
      for (auto iter = _gameObjects.begin(); iter != _gameObjects.end(); ++iter)
      {
        (*iter)->handleEvent(*event);
      }
    }
  }
  
  return keepGoing;
}

void Game::loop (void)
{
  bool keepGoing = true;
  while (keepGoing)
  {
    // process events
    keepGoing = processEvents();
    
    // update
    for (auto iter = _gameObjects.begin(); iter != _gameObjects.end(); ++iter)
    {
      (*iter)->update();
    }
    
    // draw
    for (auto iter = _gameObjects.begin(); iter != _gameObjects.end(); ++iter)
    {
      (*iter)->draw(*_window);
    }
    
    _window->update();
  }
}

} // namespace falcon