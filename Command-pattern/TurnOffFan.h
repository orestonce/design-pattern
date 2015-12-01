#ifndef RESTONCE_TURNOFFFAN_H
#define RESTONCE_TURNOFFFAN_H

#include "Fan.h"
#include "Command.h"

namespace restonce {

class TurnOffFan
        : public Command
{
public:
    TurnOffFan(Fan& fan);
    virtual void execute () override final;
private:
    Fan& m_fan;
};

} // namespace restonce

#endif // RESTONCE_TURNOFFFAN_H
