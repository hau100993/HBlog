

# Build by command 

```

cd D:\HauNguyen\Learning\Code\blog\Programming\CodePractice\src
g++ -o .\main.exe .\main.cpp .\Thread\ThreadEx.cpp -I.\Thread\

```


# Build by cmake

## Build project 

```
C:\Program Files\CMake\bin\cmake.EXE" --build d:/HauNguyen/Learning/Code/blog/build --config Debug --target all --

"C:\Program Files\CMake\bin\cmake.EXE" --no-warn-unused-cli -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_BUILD_TYPE:STRING=Debug -DCMAKE_C_COMPILER:FILEPATH=C:\msys64\mingw64\bin\gcc.exe -DCMAKE_CXX_COMPILER:FILEPATH=C:\msys64\mingw64\bin\g++.exe -SD:/HauNguyen/Learning/Code/blog/Programming/CodePractice -Bd:D:\HauNguyen\Learning\Code\blog\Programming\CodePractice\build -G Ninja

# or right click CMakeLits.txt and build all

```


```sh
cd D:\HauNguyen\Learning\Code\blog\Programming\CodePractice
mkdir -p build
cd build
cmake -DCMAKE_C_COMPILER=C:\msys64\mingw64\bin\gcc.exe -DCMAKE_CXX_COMPILER=C:\msys64\mingw64\bin\g++.exe .. 
make

```
