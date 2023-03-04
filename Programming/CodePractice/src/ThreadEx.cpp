
#include <iostream>
#include <chrono>
#include <thread>
// #include <boost/format.hpp>

#include "ThreadEx.h"
using namespace std::chrono_literals; 

// ThreadEx::ThreadEx(/* args */)
// {
// }

// ThreadEx::~ThreadEx()
// {
// }

void ThreadEx::start(int count)
{
    std::thread t1(this->job, count);
    // std::thread t2(this->job, count+10);

    t1.join();
    // t2.join(); 
};


void ThreadEx::startByStdAsync(int count)
{

};

void ThreadEx::job(int& count)
{
    auto id = std::this_thread::get_id(); 
    std::cout << "Start thread id::" << id << "\n"; 
    while (count --> 0 )

        // auto output = boost::format("Thread[%d]: Decrease counter: %d ")%id%count; 
        // cout << output.str() << "\n";
        cout <<"Thread: " << id << " Decrease counter " << count << "\n";
        std::this_thread::sleep_for(1s);
}
