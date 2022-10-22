<p style="text-align:center;">
<img src="https://assets.pokemon.com/assets/cms2/img/pokedex/detail/003.png"
alt="drawing" width="250"/>
</p>

- [1. stack](#1-stack)
- [2. queue](#2-queue)
- [3. priority queue](#3-priority-queue)

# 1. stack

1. Describe
    * std::stack is container apdater which implements stack
    * Internally it use std::dequeu
    * LIFO: Last in, First out
    * Allow to push(insert) and pop(remove) only from top

2. Common Syntax and Usage
    * Init: 
        + `std::stack<T> my_stack`; 
        + `st::stack<T> my_stack(container)`;  // container: list, vector, deque
    * `empty()`: Check empty or not - O(1)
    * `size()`: Return size of stack - O(1)
    * `top()`: Return refernece (*iterator) to the top of stakk - O(1)
    * `push(e)`: Insert e to the top of stack - O(1)
    * `pop()`: Remote the last element (in top) - O(1)
 
```c++
void testStack()
{
    std::deque<int> d_queue{1,2,3,4,5};
    std::stack<int> s_stack(d_queue); // can init by container
    
    while(!s_stack.empty())
    {
        std::cout << s_stack.top() << " \n";
        s_stack.pop();

    }
}

```
---
# 2. queue

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

# 3. priority queue

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

