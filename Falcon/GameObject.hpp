//
//  GameObject.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef GameObject_hpp
#define GameObject_hpp

#include "Drawable.hpp"
#include "events/EventListener.hpp"
#include "Updateable.hpp"

namespace Falcon
{

using Events::EventListener;

class GameObject : public Drawable, EventListener, Updateable
{
  public:

  private:

};

} // namespace Falcon

#endif /* GameObject_hpp */
