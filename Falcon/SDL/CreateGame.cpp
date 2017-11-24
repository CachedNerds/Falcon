#include "CreateGame.hpp"
#include "Window.hpp"
#include "EventSystem.hpp"
#include "System.hpp"

namespace falcon::sdl
{

  Game createGame (void)
  {
    auto eventSystem = events::EventSystem::instance();

    System::instance()
          .enableAll()
          .initialize();

    //must be created after System has been initialized
    auto window = std::make_shared<Window>("Game", 0, 0, 500, 500);

    return Game(eventSystem, window);
  }

}
