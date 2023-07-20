#Config CMAKE info 

## Set the minimun required version of Cmake for this project
cmake_minimum_required(VERSION 3.0)

## Set the project name and version
project(MiniCodeProject VERSION 1.0)

# Config Compiler option
# Set any additional compiler or linker flags here
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build)
#===========================================================

# Config Source code and Libary 

## Add libray targets that are needed by executable target here
add_library(util_libary STATIC
        ./lib/Thread/ThreadEx.cpp
        ./lib/Utils/UtilityModules.cpp
        )


## Add the execute target 
add_executable(minicode main.cpp)

## Add any additional source files for the executable target here.
## For example:
## add_executable(example_program src/main.cpp src/utilities.cpp)


target_link_libraries(minicode PRIVATE util_libary)

#===========================================================

