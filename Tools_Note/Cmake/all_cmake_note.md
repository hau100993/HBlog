


# Basic and useful Syntax

## Simple Project 

* Adding an Executable Target:
    ```cmake
    add_executable(MyApp ${SOURCES} ${HEADERS})
    ``` 


* Creating a Library
    ```cmake
    add_library(MyLib SHARED ${SOURCES} ${HEADERS})

    ``` 
* Installing Executables and Libraries
    ```cmake
    install(TARGETS MyApp DESTINATION bin)
    install(TARGETS MyLib DESTINATION lib)
    install(FILES ${HEADERS} DESTINATION include)

    ``` 

* Find system packages: 
  - The `find_library` command scans the system's default library paths to locate the library with the specified name. If it finds the library, it sets the GMock variable to the full path of the library file. You can then use this variable to link the library to your target, for
 
    ```cmake
    find_library(GMock NAME gmock)

    # Link the gmock library to your target
    target_link_libraries(MyApp PRIVATE ${GMock})

    ```

* Add External Libraries to the app
  - Use `target_include_directories` to point to Libraries header file 
  - Use `target_link_libraries` to point to the SHARED or STATIC library 
  
  Example: 
  ```cmake
    # Set the include directory for lib_example1 (if needed)
    target_include_directories(MyApp PRIVATE /dir1/build/example1/include)

    # Link the static library lib_example1 to your app
    target_link_libraries(MyApp PRIVATE /dir1/build/example1/lib_example1.a)
  ```


  - The use of both target_include_directories(... PRIVATE ...) and target_include_directories(... PUBLIC ...) in CMake provides a way to control how header file directories are propagated to the targets that depend on the current target. It allows you to manage header file visibility and usage across different parts of your CMake project.


## Add External Project as Lib: 


* `ExternalProject_Add`

  The ExternalProject_Add command is used to download, configure, build, and install external projects during the CMake build process.

  ```cmake
  
  
  ```

* `ExternalProject_Get_Property`
  
  In CMake, ExternalProject_Get_Property is a function used to retrieve properties of an external project that is managed by the ExternalProject_Add command. The ExternalProject_Add command is used to download, configure, build, and install external projects during the CMake build process.

  ```sh
  ExternalProject_Get_Property(<project_name> <property_name> <variable>)

  ```



---
# Build 



```cmake
# Build whole project
cd <project>
mkdir -p target/build 

cmake -S .  -B target/build

## Build whole project 
cmake --build target/build --parallel -j$(nproc) 


# Build sub dir
## CMakeList.txt is located /path/to/your/project
cmake /path/to/your/project --parallel -j$(nproc)

## Build only sub binary sub_binary1
cmake --build target/build --parallel -j$(nproc) --target sub_binary1 

```