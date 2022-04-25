<p style="text-align:center;">
<img src="https://assets.pokemon.com/assets/cms2/img/pokedex/detail/005.png"
alt="drawing" width="250"/>
</p>

- [1. unordered_set](#1-unordered_set)
- [2. unordered_multiset](#2-unordered_multiset)
- [3. unordered_map](#3-unordered_map)
- [4. unordered_multimap](#4-unordered_multimap)

# 1. unordered_set

1. Describe

    *Container that encapsulates fixed size arrays.*

2. Common Syntax and Usage

```c++
include <array>


/* 1. Declare Syntax  */

array<int, 5> arr1 {1,3,5,2,4};  //double-brace require
array<char, 5> arr2 = {'h', 'e', 'l', 'l', 'o'};


/* 3. Importance functions */
arr2.size();        // O(1): get size
arr2.fill(10)       // O(n): filling array with 10;
arr2.at(5)          // O(1): access the element at index 5
arr2[5]             // O(1): access the element at index 5
arr2.size()
arr2.empty()


```
---
# 2. unordered_multiset

1. Describe

    *Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container*

2. Common Syntax and Usage

```c++

include <vector>

/* 1. Declare Syntax  */
{
    //correct
    vector <int> v1;       // empty vector of int
    vector <int> v2(10);   // vector of int with 10 elements (all =  0)
    vector <int> v3(10, 5);// vector of int with 10 elements (all =  5)
    vector <char> v4{'H', 'e', 'l', 'l', 'o'}; // declare and init with value

    // wrong:
    vector <int> v4[10]; // an ARRAY of 10 vector type int !!!

}

/* 2. Copy Vector*/
{
    vector<char> v1{'H', 'e', 'l', 'l', 'o', '\n'};
    vector<char> v1_copy1(v1); // copy by constructor
    vector<char> v1_copy2 = v1; // copy by = operator
}


/* 3. Importance functions */
{
    v.push_back(x); // O(1): Insert to the end of vector
    v.pop_back();   // O(1): erase the last element
    v.font();       // O(1): get element at front
    v.back();       // O(1): get element at back
    v.clear();      // O(n): erase all elements
    v.size();       // O(1): get size
    v[10];          // O(1): access the element at index 10
}


/* 4. Iterator */

    for (auto i : v1)
    {
        cout << i<< " ";
    }


/* 5. Advance */

    // sort
    sort(v1.begin(), v2.end());

```
---

# 3. unordered_map

1. Describe

    1. std::deque allow fast insert at both : beginning and end . **Note: std::vector only allow to insert at end !!**
    2.

2. Common Syntax and Usage

```c++

include <vector>

/* 1. Declare Syntax  */
{
    //correct
    vector <int> v1;       // empty vector of int
    vector <int> v2(10);   // vector of int with 10 elements (all =  0)
    vector <int> v3(10, 5);// vector of int with 10 elements (all =  5)
    vector <char> v4{'H', 'e', 'l', 'l', 'o'}; // declare and init with value

    // wrong:
    vector <int> v4[10]; // an ARRAY of 10 vector type int !!!

}

/* 2. Copy Vector*/
{
    vector<char> v1{'H', 'e', 'l', 'l', 'o', '\n'};
    vector<char> v1_copy1(v1); // copy by constructor
    vector<char> v1_copy2 = v1; // copy by = operator
}


/* 3. Importance functions */
{
    v.push_back(x); v.push_front()  ; // O(1): Insert to the end of vector
    v.pop_back();   v.pop_front()   ; // O(1): erase the last element
    v.font();       // O(1): get element at front
    v.back();       // O(1): get element at back
    v.clear();      // O(n): erase all elements
    v.size();       // O(1): get size
    v[10];          // O(1): access the element at index 10
}


/* 4. Iterator */

    for (auto i : v1)
    {
        cout << i<< " ";
    }


/* 5. Advance */

    // sort
    sort(v1.begin(), v2.end());

```

# 4. unordered_multimap