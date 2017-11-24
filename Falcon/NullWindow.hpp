#pragma once
#include "IWindow.hpp"

namespace falcon
{
  class NullWindow : public IWindow
  {
    void update (void) override;
    void draw(const std::shared_ptr<GameObject>& gameObject) override;
  };
}
