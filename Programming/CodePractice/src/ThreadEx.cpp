
#include <iostream>
#include <chrono>
#include <thread>
#include <future>

#include "ThreadEx.h"
using namespace std::chrono_literals; 

/* 
TODO : 
+ issue 1: can not pass paramenter to job 
    std::thread t1(&this->job, params);

 */

std::mutex g_mutex;

void ThreadEx::start()
{
    std::thread t1(&this->job);
    cout << __FUNCTION__ << std::this_thread::get_id() << ": Test: before" << "\n";
    t1.join();
    cout << __FUNCTION__ << std::this_thread::get_id() << ": Test: after" << "\n";
    return;
};

void ThreadEx::startByStdAsync()
{  
    // Launch job in new thread with mode asynchronous 
    std::future<void> ret_thread = std::async(std::launch::async
    , this->job);
    
    cout << __FUNCTION__ << std::this_thread::get_id()<< ": Test: before" << "\n";
    //Wait thread to be finish
    ret_thread.get();
    cout << __FUNCTION__ << std::this_thread::get_id()<< ": Test: after" << "\n";
};

void ThreadEx::job()
{
    std::unique_lock<std::mutex> lock(g_mutex);
    // auto count = this->getResource(); //Error:  may only be used inside a nonstatic member 
    auto count = 10;
    auto id = std::this_thread::get_id(); 
    std::cout << "\tThread id ->" << id << "\n"; 
    while (count --> 0 )

        // auto output = boost::format("Thread[%d]: Decrease counter: %d ")%id%count; 
        // cout << output.str() << "\n";
        cout <<"Thread: " << id << " Decrease counter " << count << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
}
