
// #pragma once
#ifndef _THREAD_EX_
#define _THREAD_EX_ 
using namespace std;

class ThreadEx
{
private:
    /* data */
    unsigned int m_resource;
public:
    ThreadEx(unsigned int inputResource): m_resource(inputResource) {};
    ThreadEx() = default;
    ~ThreadEx() = default;
    static void job();
    void start();

    /**
     * @brief 
     * 
     * @param count 
     */
    void startByStdAsync();
    
    unsigned int& getResource() {return m_resource;};
};

#endif