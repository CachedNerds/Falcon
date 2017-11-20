#include "Menu.hpp"
#include "Game.hpp"
#include "SDL/KeyDown.hpp"
#include <memory>

namespace falcon
{

Menu::Menu (Game & game, const std::string & image, int x, int y)
: Sprite(game, std::make_unique<MenuEventHandler>(*this), image, x, y)
{

}

Menu::MenuEventHandler::MenuEventHandler (Menu & menu)
: _menu(menu)
{

}

void Menu::MenuEventHandler::handleKeyDown (const KeyDown & event)
{
  using sdl::events::Key;

  falcon::Game& game = _menu.getGame();

  switch (event.getKey())
  {
    case Key::Right:
      _menu._rect.x += 5;
      break;

    case Key::Left:
      _menu._rect.x -= 5;
      break;

    case Key::Up:
      _menu._rect.y -= 5;
      break;

    case Key::Down:
      _menu._rect.y += 5;
      break;

    case Key::Escape:
      game.quit();
      break;

    default:
      break;
  }
}

void Menu::MenuEventHandler::handleQuit (const Quit & event)
{
}

} // namespace falcon