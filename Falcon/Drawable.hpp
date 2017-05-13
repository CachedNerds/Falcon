//
//  Drawable.hpp
//  Falcon
//
//  Created by Danny Peck on 4/6/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Drawable_hpp
#define Drawable_hpp

class GameObject;

class Drawable
{
  public:

    virtual void draw (GameObject & object) = 0;
  
};

#endif /* Drawable_hpp */
