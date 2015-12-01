#ifndef RESTONCE_COMMAND_H
#define RESTONCE_COMMAND_H

namespace restonce {

class Command
{
public:
    virtual ~Command() = default;
    virtual void execute() =0;
};

} // namespace restonce

#endif // RESTONCE_COMMAND_H
