
#include "UtilityModules.hpp"


void Timer::reset()
{
    m_beg = Clock::now();
}

double Timer::elapsed() const
{
    return std::chrono::duration_cast<Second>(Clock::now() - m_beg).count();
}


void OtherFunction::TestVoice()
{
    // Initialize the Festival speech engine
    festival_initialize(1, 210000);
    
    // Convert the text to speech
    const char* text = "Hello, this is ChatGPT speaking!";
    festival_say_text(text);
    
    // Clean up the Festival speech engine
    festival_wait_for_spooler();
    festival_finalize();
    return 0;
};
