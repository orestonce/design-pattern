#include "TurnOffFan.h"

namespace restonce {

TurnOffFan::TurnOffFan(Fan &fan)
    : m_fan(fan)
{
}

void TurnOffFan::execute ()
{
    m_fan.turnOff ();
}

} // namespace restonce
