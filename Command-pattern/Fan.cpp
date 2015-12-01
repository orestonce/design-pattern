#include "Fan.h"
#include <iostream>

namespace restonce {

void Fan::turnOn(int to)
{
    if ( m_level == 0 || to != m_level ) {
        m_level = to;
        std::cout << "打开风扇 " << to << std::endl;
    } else {
        std::cout << "风扇已打开到"<< m_level << "，无变化 !" << std::endl;
    }
}

void Fan::turnOff()
{
    if ( m_level != 0 ) {
        m_level = 0;
        std::cout << "关闭风扇 !" << std::endl;
    } else {
        std::cout << "风扇已关闭，无变化 !" << std::endl;
    }
}

} // namespace restonce
