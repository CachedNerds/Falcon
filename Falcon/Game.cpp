#include <iostream>
#include "Game.hpp"
#include "SDL/System.hpp"
#include "Events/Event.hpp"
#include "Events/Events.hpp"
#include "GameObject.hpp"

namespace Falcon
{

  Game::Game (void)
  : window_ ()
  , eventSystem_ (Events::EventSystem::instance ())
  , gameObjects_ ()
  {
    using SDL::System;
    using SDL::Window;
    
    System::instance ()
           .enableAll ()
           .initialize ();

    // must be created after System has been initialized
    this->window_ = std::make_shared<Window>("Game", 0, 0, 500, 500);
  }
  
  Game::~Game (void)
  {

  }
  
  void Game::registerGameObject (std::shared_ptr<GameObject> object)
  {
    this->gameObjects_.insert (object);
  }
  
  bool Game::processEvents (void)
  {
    using Events::EventType;

    bool keepGoing = true;
    
    // handle input / events
    while (this->eventSystem_.nextEvent ())
    {
      // get next event
      Event * event = this->eventSystem_.getNextEvent ();
      
      // handle event
      if (event->getType () == EventType::NullEvent)
      {
        // do nothing
      }
      else if (event->getType () == EventType::Quit)
      {
        keepGoing = false;
        break;
      }
      else
      {
        for (auto iter = this->gameObjects_.begin (); iter != this->gameObjects_.end (); ++iter)
        {
          (*iter)->handleEvent (*event);
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
      keepGoing = this->processEvents ();
      
      // update
      for (auto iter = this->gameObjects_.begin (); iter != this->gameObjects_.end (); ++ iter)
      {
        (*iter)->update ();
      }
      
      // draw
      for (auto iter = this->gameObjects_.begin (); iter != this->gameObjects_.end (); ++ iter)
      {
        (*iter)->draw (*this->window_);
      }
      
      this->window_->update ();
    }
  }

} // namespace Falcon
