#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <string>
#include <algorithm>
#include <chrono>

#pragma once

using namespace std;

class Timer
{
private:
    // Type aliases to make accessing nested type easier
    using Clock = std::chrono::steady_clock;
    using Second = std::chrono::duration<double, std::ratio<1> >;
    std::chrono::time_point<Clock> m_beg{ Clock::now() };

public:

    Timer() = default;
    void reset();
    double elapsed() const;

    void testPrint();
};
