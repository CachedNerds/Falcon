//
//  Game.cpp
//  Falcon
//
//  Created by Danny Peck on 5/13/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#include <iostream>
#include "Game.hpp"
#include "SDL/System.hpp"
#include "Events/Event.hpp"
#include "Events/Events.hpp"
#include "GameObject.hpp"

namespace Falcon
{

  Game::Game (void)
  : eventSystem_ (Events::EventSystem::instance ())
  {
    using SDL::System;
    using SDL::Window;
    
    System::instance ()
           .enableAll ()
           .initialize ();

    this->window_ = new Window ("Game", 0, 0, 500, 500);
  }
  
  Game::~Game (void)
  {
    delete this->window_;
  }
  
  void Game::registerGameObject (GameObject * object)
  {
    this->gameObjects_.push_back (object);
  }
  
  bool Game::processEvents (void)
  {
    using Events::Event;
    using Events::NULLEVENT;
    using Events::QUIT;
    
    bool keepGoing = true;
    
    // handle input / events
    while (this->eventSystem_.nextEvent ())
    {
      // get next event
      Event * event = this->eventSystem_.getNextEvent ();
      
      // handle event
      if (event->getType () == NULLEVENT)
      {
        // do nothing
      }
      else if (event->getType () == QUIT)
      {
        keepGoing = false;
        break;
      }
      else
      {
        for (auto iter = this->gameObjects_.begin (); iter != this->gameObjects_.end (); ++ iter)
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
