#include <iostream>

#include <vector>
#include <array>
#include <deque>

#include <string>
#include <algorithm>

using namespace std;

void test_dequeu()
{
    deque<int> d1;

    d1.push_back(1);
    d1.push_back(2);
    d1.push_back(3);
    d1.push_front(-1);
    d1.push_front(-2);
    d1.push_front(-3);
    auto it = d1.begin() + 3;
    d1.insert(it, 99);

    cout << "deque size: " << d1.size() << endl;

    for (auto &x : d1)
        cout << x << " ";
    cout << endl;
}

void test_array()
{
    array<int, 5> arr1{1, 5, 3, 4, 2};
    array<string, 2> arr2 = {"Hello", "World"};

    sort(arr1.begin(), arr1.end());

    for (auto &x : arr1)
        cout << x << " ";

    cout << endl;

    for (auto &y : arr2)
        cout << y << " ";

    cout << endl;
}

void test_vector()
{

    std::vector<char> v1{'H', 'e', 'l', 'l', 'o', '\n'};
    v1.push_back('1');
    v1.push_back('2');
    v1.push_back('3');
    v1.push_back('\n');

    for (char x : v1)
        cout << x;
}

int main()
{
    // test_vector();
    test_dequeu();

    return 0;
}