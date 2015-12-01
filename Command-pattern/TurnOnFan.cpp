#include "TurnOnFan.h"

namespace restonce {

TurnOnFan::TurnOnFan(Fan &fan, int to)
    : m_fan(fan), m_to(to)
{

}

void TurnOnFan::execute ()
{
    m_fan.turnOn (m_to);
}

} // namespace restonce
