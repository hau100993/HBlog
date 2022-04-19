# 1. Vector 

1. Describe

    Dynamic array   

2. Declare Syntax 

```c++

include <vector>

//correct
std::vector <int> v1;       // empty vector of int
std::vector <int> v2(10);   // vector of int with 10 elements (all =  0) 
std::vector <int> v3(10, 5);// vector of int with 10 elements (all =  5) 

// wrong:
std::vector <int> v4[10]; // an ARRAY of 10 vector type int !!!

```

1. Importance functions

```c++
v.push_back(x); // O(1): Insert to the end of vector
v.pop_back();   // O(1): erase the last element 
v.clear();      // O(n): erase all elements 
v.size();       // O(1): get size
v[10];          // access the element at index 10

```