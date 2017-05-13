//
//  Updateable.hpp
//  Falcon
//
//  Created by Danny Peck on 4/10/17.
//  Copyright © 2017 Danny Peck. All rights reserved.
//

#ifndef Updateable_hpp
#define Updateable_hpp

class Updateable
{
  public:

    virtual void update (GameObject & object) = 0;
};

#endif /* Updateable_hpp */
