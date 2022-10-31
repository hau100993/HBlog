# Smart Pointer

## 1. std::unique_ptr
auto call destructor when out scope, can not share

### Syntax: 
  
 ```c++
std::unique_ptr<Entity> pEntity1(new Entity(20));
std::unique_ptr<Entity> pEntity2 = std::make_unique<Entity>(20));


```

### Usefull Coding Note: 

* Change void* ptr <==> unique_ptr

```C++
// change ownership to another ptr
std::unique_ptr<Entity> pEntity2(pEntity2.release(())


// change void* to unique_ptr

auto p_to_int = new int; 
void* p_to_void = static_cat<void*>(p_to_int);

auto smart_p_to_int =  std::unique_ptr<int>(p_to_void);

// TODO: need to test
// change  with dymanic cast
auto smart_p_to_int =  std::unique_ptr<int>(dymanic_cast<int*>(p_to_void.release()))



```






## 2. std::weak_ptr
- do not increase ref counter, usefull to check validity of the data by calling expired() or lock().

```c++
std::shared_ptr<Entity> sharedpEntity = std::make_shared<Entity>("sharedpointer");
std::weak_ptr<Entity> weakpEntity = sharedpEntity;
```
## Example



## 3. std::shared_ptr

```
std::shared_ptr<Entity> copy_shared; 
std::shared_ptr<Entity> sharedpEntity = std::make_shared<Entity>("sharedpointer");
copy_shared = sharedpEntity ; // at this time, ref counter is increase 1

```