#include "Invoker.h"

namespace restonce {

void Invoker::submit (std::shared_ptr<Command> commnad)
{
    commnad->execute ();
}

} // namespace restonce
