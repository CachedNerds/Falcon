#pragma once

namespace falcon
{

class Updateable
{
public:
  virtual void update (void) = 0;
};

} // namespace falcon