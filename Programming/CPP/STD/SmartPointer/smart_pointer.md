# Smart Pointer
## Overview
### std::unique_ptr
 - auto call destructor when out scope, call not share

 ```c++
std::unique_ptr<Entity> pEntity1(new Entity(20));
std::unique_ptr<Entity> pEntity2 = std::make_unique<Entity>(20));
 ```

### std::unique_ptr
* auto call destructor when out scope, can share to other as reference. counter will increase. 

```c++

std::shared_ptr<Entity> copy_shared; 
std::shared_ptr<Entity> sharedpEntity = std::make_shared<Entity>("sharedpointer");
copy_shared = sharedpEntity ; // at this time, ref counter is increase 1
```
* std::weak_ptr
- do not increase ref counter, usefull to check validity of the data by calling expired() or lock().

```c++
std::shared_ptr<Entity> sharedpEntity = std::make_shared<Entity>("sharedpointer");
std::weak_ptr<Entity> weakpEntity = sharedpEntity;
```

## Example


