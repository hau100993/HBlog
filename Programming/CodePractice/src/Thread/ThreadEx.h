
#pragma once

using namespace std;

class ThreadEx
{
private:
    /* data */
public:
    ThreadEx(/* args */);
    ~ThreadEx();
    static void run(int& count);
    void start(int count);
};


