#ifndef RESTONCE_TURNONFAN_H
#define RESTONCE_TURNONFAN_H

#include "Fan.h"
#include "Command.h"

namespace restonce {

class TurnOnFan
        : public Command
{
public:
    TurnOnFan(Fan& fan, int to);
    virtual void execute () override final;
private:
    Fan& m_fan;
    int m_to;
};

} // namespace restonce

#endif // RESTONCE_TURNONFAN_H
