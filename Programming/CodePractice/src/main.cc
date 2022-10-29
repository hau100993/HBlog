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
    newJob.start(10);
}