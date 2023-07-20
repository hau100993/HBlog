#include "UtilityModules.h"

void Timer::reset()
{
    m_beg = Clock::now();
}

double Timer::elapsed() const
{
    return std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
}



void Timer::testPrint()
{
    std::cout << "Call testPrint" << "\n";
}


{ me->family("love"); }