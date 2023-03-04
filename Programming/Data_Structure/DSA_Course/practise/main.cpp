#include "iostream"
#include "Circle.h"

using namespace std;

int main()
{
    unsigned int input; 
    cout << "Input Radius (in Cm): ";
    cin >> input;
    cout << "Get Radius (in Cm): " <<  input <<"\n";

    Circle circle1(input);
    Utility obj; 
    cout << "Circle area: " << obj.calculateArea(circle1) << "\n";

    return 0;
}