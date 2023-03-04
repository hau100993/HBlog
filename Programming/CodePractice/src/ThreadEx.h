
// #pragma once
#ifndef _THREAD_EX_
#define _THREAD_EX_ 
using namespace std;

class ThreadEx
{
private:
    /* data */
public:
    ThreadEx() = default;
    ~ThreadEx() = default;
    static void job(int& count);
    void start(int count);

    /**
     * @brief 
     * 
     * @param count 
     */
    void startByStdAsync(int count);
};

#endif