

# Print Debug 

## Print by boost 

```c++
#include <iostream>
#include <boost/format.hpp>

int main() {
    int year = 2023;
    std::string month = "March";
    double pi = 3.14159265;

    // Format a string using boost::format
    std::string formatted_str = boost::str(boost::format("Today is %s %d, and the value of pi is approximately %.2f") % month % year % pi);

    // Print the formatted string
    std::cout << formatted_str << std::endl;

    auto tmpLog = boost::str(boost::format(" %s %d" %));


```



# 