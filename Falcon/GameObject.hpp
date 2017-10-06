//
//  GameObject.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef GameObject_hpp
#define GameObject_hpp

#include "Events/EventListener.hpp"
#include "Events/EventHandler.hpp"
#include "Updateable.hpp"
#include "Drawable.hpp"

namespace Falcon
{

using Events::EventListener;
using Events::EventHandler;
using Events::Event;

class Game;

class GameObject : public Drawable, public EventListener, public Updateable
{
  public:

    virtual void handleEvent (Event & event) override;

  protected:

    GameObject (Game & game, EventHandler * eventHandler);

    virtual ~GameObject (void);

    Game & getGame (void) const;

    Game & game_;

    EventHandler * eventHandler_;

};

} // namespace Falcon

#endif /* GameObject_hpp */
