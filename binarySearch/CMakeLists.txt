#指定cmake最低版本要求
cmake_minimum_required(VERSION 3.10)

#设置项目名称和使用的语言
project(myBinarySearch CXX)

#设置CXX标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g3 -O0 -ggdb")
set(CMAKE_BUILD_TYPE Debug)

#添加可执行文件
add_executable(myBinarySearch main.cpp binarySearch.cpp)

#包含头文件目录
target_include_directories(myBinarySearch PUBLIC .)
