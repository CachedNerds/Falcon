#pragma once
#include <memory>
#include "GameObject.hpp"

namespace falcon
{

class IWindow
{
public:
  virtual void update (void) = 0;
  virtual void draw(const std::shared_ptr<GameObject>& gameObject) = 0;
};

}
