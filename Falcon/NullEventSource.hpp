#include "IEventSource.hpp"

namespace falcon 
{

  class NullEventSource : public IEventSource
  {
    virtual bool nextEvent (void) override;
    virtual std::unique_ptr<const Event> getNextEvent (void) override;
  };

}
