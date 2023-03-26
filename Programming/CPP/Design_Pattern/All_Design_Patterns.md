<p style="text-align:center;">
<img src="https://assets.pokemon.com/assets/cms2/img/pokedex/full/133.png" alt="drawing" width="300"/>
</p>

- [1. Creation](#1-creation)
  - [1. Singleton](#1-singleton)
  - [2. Factory](#2-factory)
  - [3. Builder](#3-builder)
- [2. Structural Design Patterns](#2-structural-design-patterns)
  - [1. Adapter (aka Wrapper pattern)](#1-adapter-aka-wrapper-pattern)
  - [2. Facade](#2-facade)
  - [3. Composite](#3-composite)
- [3. Behavioral Design Patterns](#3-behavioral-design-patterns)
  - [1. Observer](#1-observer)
  - [2. State](#2-state)
  - [3. Chain of Responsibility](#3-chain-of-responsibility)
- [4. Reference:](#4-reference)


# 1. Creation 

## 1. Singleton 

* **Problem:**

Resource management 

* **Solution:**

class has only one instance, while providing a global access point to this instance


* **Code Example:**
[singleton example ](Examples/singleton_example.md)


* **Note**: 

  Multiple Threads safe 
    + Mutex 
    + Static instance 

## 2. Factory

* **Problem:**
  
  many types: application types, platform types, database type 
  each type need to define each class 


* **Solution:**

  Create abstract interface for all types =>
  Use factory class to create only needed class by type
  easy to extend => create new type + new derived class 

* **Code Example:**
  [factory design example](Examples/factory_example.md)

* Note:

  Abstract factory design as an advance factory design
  [Abstract factory design example](Examples/astract_factory.md.md)


## 3. Builder 

* **Problem:**

  An object which has many options for constructor 

* **Solution:**

  Break down complex object into small. Each product type has its own methods

  Create IBuilder class: which define all common methods. 
  
  Create derived class: BuilderTypeA, BuilderTypeB 
  
  Create Director class: define the logic how to build a specific product

* **Code Example:**
[builder example](Examples/builder_example.md)


# 2. Structural Design Patterns
## 1. Adapter (aka Wrapper pattern)

  allows objects with incompatible interfaces to collaborate

* **Problem:**

  changing will effect all code 

* **Solution:**

  Create a wrapper class/adapter class to convert interface class A to interface of class B 

  Client just need to know the adapter API, does not care about the backend logic 


* **Code Example:**
[adapter example](Examples/adapter_example.md)

## 2. Facade 

  Provides a unified interface to a set of interfaces in a subsystem, simplifying the usage and reducing the dependencies of the client code on the subsystem
  As enhanced adapter pattern

* **Problem:**
  Client code need to know/use a lof of methods and logic in back-end code

* **Solution:**

  Create a wrapper class which have only simple API for Client 
  All logics will be handled transparency inside 

* **Code Example:**
[facade example](Examples/facade_example.md)


## 3. Composite 

  Compose objects into a tree-like structure and then work with that structure as if it were a single object

* **Problem:**


* **Solution:**



* **Code Example:**
[composite example](Examples/composite_example.md)


# 3. Behavioral Design Patterns 

## 1. Observer

  Maintain a list of its dependents (observers) and notify them automatically when any state changes occur

* **Problem:**


* **Solution:**

  Define a subscription mechanism to notify multiple objects about any events that happen to the object they’re observing

  Pub/Sub mechanism, Callback function 

* **Code Example:**


## 2. State 

* **Problem:**


* **Solution:**



* **Code Example:**


## 3. Chain of Responsibility 

* **Problem:**


* **Solution:**



* **Code Example:**


* Note:


# 4. Reference:

1. [Design Patterns #1](https://cppdeveloper.com/design-patterns/design-patterns-1-design-patterns-la-gi/)

1. [Design Patterns #2](https://refactoring.guru/design-patterns)


2. [Images diagram sheet](https://substackcdn.com/image/fetch/w_1456,c_limit,f_webp,q_auto:good,fl_progressive:steep/https%3A%2F%2Fbucketeer-e05bbc84-baa3-437e-9518-adb32be77984.s3.amazonaws.com%2Fpublic%2Fimages%2Fd70dd65e-c070-44e8-87aa-91b3c91b7cd1_1226x1610.png)

<div style="display: inline-block;">
  <img src="https://substackcdn.com/image/fetch/w_1456,c_limit,f_webp,q_auto:good,fl_progressive:steep/https%3A%2F%2Fbucketeer-e05bbc84-baa3-437e-9518-adb32be77984.s3.amazonaws.com%2Fpublic%2Fimages%2Fd70dd65e-c070-44e8-87aa-91b3c91b7cd1_1226x1610.png" alt="Image 1" width="400"/>
</div>
<div style="display: inline-block;">
  <img src="https://external-preview.redd.it/anV4wrD1cIUslqSH6pGo1RTpLkiji-T_sCkQ3cgY1Eo.jpg?auto=webp&v=enabled&s=219bebde9ef85b02bdb689d5f0a9c1eca69873d8" alt="Image 2" width="400"/>
</div>
