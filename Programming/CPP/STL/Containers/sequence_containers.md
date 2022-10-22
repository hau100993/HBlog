<p style="text-align:center;">
<img src="https://assets.pokemon.com/assets/cms2/img/pokedex/detail/002.png"
alt="drawing" width="250"/>
</p>

- [1. Array](#1-array)
- [2. Vector](#2-vector)
- [3. deque (Double Ended Queu )](#3-deque-double-ended-queu-)
- [4. List](#4-list)
- [5. Forward_list](#5-forward_list)


# 1. Array

1. Describe

    * `std::array` container that encapsulates fixed size arrays

2. Common Syntax and Usage
*  `size()`;        // O(1): get size
*  `fill(10)`       // O(n): filling array with 10;
*  `at(5)`          // O(1): access the element at index 5
arr2[5]             // O(1): access the element at index 5
*  `size()`
*  `empty()`


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
# 2. Vector

1. Describe

    * `std::vector` are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container

2. Common Syntax and Usage
    * `push_back(x)`; // O(1): Insert to the end of vector
    * `pop_back()`;   // O(1): erase the last element
    * `font()`;       // O(1): get element at front
    * `back()`;       // O(1): get element at back
    * `clear()`;      // O(n): erase all elements
    * `size()`;       // O(1): get size
    * v[10];          // O(1): access the element at index 10

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

# 3. deque (Double Ended Queu )

1. Describe

    * `std::deque` is indexed sequence container (like vector)
    * Not like vector. It's allow fast insert at both : beginning and end
    * Elemet is not stored contigous. It's use individual fixed array.

2. Common Syntax and Usage
    * Init: `std::deuqe<T> my_queue`, `std::deuqe<T> my_queue{1,2,3,4,5}`, `std::deuqe<T> my_queue(other_deque)`:
    * `push_back(x); v.push_front()`  : // O(1): Insert to the end of vector
    * `pop_back(); pop_front()`   : // O(1): erase the last element
    * `font()`:       // O(1): get element at front
    * `back()`:      // O(1): get element at back
    * `clear()`:      // O(n): erase all elements
    * `size()`:       // O(1): get size
    * `v[10]`:        // O(1): access the element at index 10

```c++

include <deque>

/* 1. Declare Syntax  */
{
    //correct
    deque <int> v1;       // empty vector of int
    deque <int> v2(10);   // vector of int with 10 elements (all =  0)
    deque <int> v3(10, 5);// vector of int with 10 elements (all =  5)
    deque <char> v4{'H', 'e', 'l', 'l', 'o'}; // declare and init with value

    // wrong:
    deque <int> v4[10]; // an ARRAY of 10 vector type int !!!

}

/* 2. Copy Vector*/
{
    deque<char> v1{'H', 'e', 'l', 'l', 'o', '\n'};
    deque<char> v1_copy1(v1); // copy by constructor
    deque<char> v1_copy2 = v1; // copy by = operator
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

# 4. List

1. Describe
    * `std::list` is double-link list in C
    * sequence container , non-contiguous allocation 
    * Faster than `std::vector, std::deque, std::forward_list` when: insert, remove, moving position 
    * Not a sort container as default
  
2. Common Syntax and Usage
    * init : `std::list<T> my_list = {1,2,3,4}`
    * `front(), back()`: return value of head/tail 
    * `pust_front(e), push_back(e)`: add e to head or tail 
    * `pop_front(), pop_back()`: remove element at head/tail 
    * `empty()`: check if list is empty or not 
    * `size()`: return size of list 
    * `insert(pos_iter, value)`: insert value at a specific position 
    * `erase(pos_it)`: remove element at pos_iti position
    * `remove()`: remove ALL elements in the list
    * `sort()`: sort the list
    * `list_unique()`: remove duplicate
    * 


3. Code example 
   
```C++



```


# 5. Forward_list

1. Describe


2. Common Syntax and Usage

3. Code example 
   
```C++

```