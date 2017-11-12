#include "EventFactory.hpp"
#include "Events.hpp"

namespace falcon::events
{

std::unique_ptr<const Event> EventFactory::createKeyDown (const SDL_Event & event)
{
  return std::make_unique<KeyDown>(event);
}

std::unique_ptr<const Event> EventFactory::createKeyUp (const SDL_Event & event)
{
  return std::make_unique<KeyUp>(event);
}

std::unique_ptr<const Event> EventFactory::createQuit (const SDL_Event & event)
{
  return std::make_unique<Quit>(event);
}

std::unique_ptr<const Event> EventFactory::createMouseMotion (const SDL_Event & event)
{
  return std::make_unique<MouseMotion>(event);
}

std::unique_ptr<const Event> EventFactory::createMouseDown (const SDL_Event & event)
{
  return std::make_unique<MouseDown>(event);
}

std::unique_ptr<const Event> EventFactory::createMouseUp (const SDL_Event & event)
{
  return std::make_unique<MouseUp>(event);
}

std::unique_ptr<const Event> EventFactory::createMouseWheel (const SDL_Event & event)
{
  return std::make_unique<MouseWheel>(event);
}

std::unique_ptr<const Event> EventFactory::createWindowEvent (const SDL_Event & event)
{
  return std::make_unique<WindowEvent>(event);
}

std::unique_ptr<const Event> EventFactory::createNullEvent (const SDL_Event & event)
{
  return std::make_unique<NullEvent>(event);
}

} // namespace falcon::events