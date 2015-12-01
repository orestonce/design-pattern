#ifndef RESTONCE_INVOKER_H
#define RESTONCE_INVOKER_H

#include "Command.h"
#include <memory>
#include <list>

namespace restonce {

class Invoker
{
public:
    void submit(std::shared_ptr<Command> commnad);
};

} // namespace restonce

#endif // RESTONCE_INVOKER_H
