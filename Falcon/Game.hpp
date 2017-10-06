//
//  Game
//  Falcon
//
//  Created by Danny Peck on 5/13/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef World_hpp
#define World_hpp

#include "SDL/Window.hpp"
#include "Events/EventSystem.hpp"
#include <vector>
#include <memory>

namespace Falcon
{

class GameObject;

class Game
{
  public:

    Game (void);

    virtual ~Game (void);

    void loop (void);
  
    void registerGameObject (GameObject * object);

  private:

    bool processEvents (void);

    std::shared_ptr<SDL::Window> window_;

    Events::EventSystem & eventSystem_;
  
    std::vector<GameObject *> gameObjects_;
  
};

} // namespace Falcon

#endif /* Game_hpp */
