* Adapter Design Example (by ChatGPT):

```c++
#include <iostream>

// Legacy Server
class LegacyServer {
public:
    double operation(int input) {
        return static_cast<double>(input) / 10.0;
    }
};

// Modern Adapter
class GenericAdapter {
public:
    std::string operation(const std::string& input) {
        double inputAsDouble = std::stod(input);
        double outputAsDouble = operation(inputAsDouble);
        return std::to_string(outputAsDouble);
    }

    virtual double operation(double input) = 0;
};

// Adapter that adapts the legacy server to the modern server
class AdapterWithLegacy : public GenericAdapter {
public:
    double operation(double input) override {
        return legacy_.operation(static_cast<int>(input * 10.0));
    }

private:
    LegacyServer legacy_;
    // LegacyServer1 legacy_;
    // LegacyServer2 legacy_;
    
};

// Example usage
int main() {
    GenericAdapter* adapter = new AdapterWithLegacy();

    std::string input = "3.5";
    std::string output = adapter->operation(input);
    std::cout << "Converted value is: " << output << std::endl;

    delete adapter;
    return 0;
}
```