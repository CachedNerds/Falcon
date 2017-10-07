#ifndef _FALCON_GAME_HPP_
#define _FALCON_GAME_HPP_

#include "SDL/Window.hpp"
#include "Events/EventSystem.hpp"
#include <vector>
#include <set>
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
  
    void registerGameObject (std::shared_ptr<GameObject> object);

  private:

    bool processEvents (void);

    std::shared_ptr<SDL::Window> window_;

    Events::EventSystem & eventSystem_;
  
    std::set<std::shared_ptr<GameObject>> gameObjects_;
  
};

} // namespace Falcon

#endif // _FALCON_GAME_HPP_
