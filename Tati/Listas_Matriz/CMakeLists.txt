cmake_minimum_required(VERSION 3.13)
project(List)

set(CMAKE_CXX_STANDARD 14)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads)

add_subdirectory(lib/gogletest-master)

add_executable(List main.cpp List_def.h List.h Node.h Node_def.h Factory.cpp Factory.h Process.cpp Process.h Vehicle.cpp Vehicle.h)

target_link_libraries(List ${CMAKE_THREAD_LIBS_INIT})