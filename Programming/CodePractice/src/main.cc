#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <string>
#include <algorithm>
#include "ThreadEx.h"

using namespace std;

int main()
{
    ThreadEx newJob;
    std::cout << "Input value: " << "\n";
    unsigned int count = 10;
    // std::cin >> count;
    newJob.start(count);

    std::cout << "Got: " << count << "\n";

    // std::cin.get(); // waiting to press ENTER
    
}