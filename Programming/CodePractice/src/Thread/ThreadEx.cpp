
#include <iostream>
#include <thread>
#include "ThreadEx.h"

using namespace std;

ThreadEx::ThreadEx(/* args */)
{
}

ThreadEx::~ThreadEx()
{
}

void ThreadEx::start(int count)
{
    std::thread t1(run, count);

    t1.join(); 
};

void ThreadEx::run(int& count)
{
    // while (count --> 0 )
    cout << "Count_" << count << "endl";
    
}
