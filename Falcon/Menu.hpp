#pragma once

#include "Sprite.hpp"
#include "SDL/EventHandler.hpp"
#include <string>

namespace falcon
{

class Game;

namespace sdl::events
{
  class KeyDown;
} // namespace sdl::events

using sdl::events::EventHandler;
using sdl::events::KeyDown;
using sdl::events::Quit;

/**
 * The root class for the menu system
 */
class Menu : public Sprite
{
public:
  Menu (Game & game, const std::string & image, int x, int y);

private:
  // Menu Event Handler
  class MenuEventHandler : public EventHandler
  {
  public:
    MenuEventHandler (Menu & menu);

    void handleKeyDown (const KeyDown & event) override;
    void handleQuit (const Quit & event) override;

  private:
    Menu & _menu;
  };
};

} // namespace falcon