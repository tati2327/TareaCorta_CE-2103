cmake_minimum_required(VERSION 3.13)
project(TareaCorta2)

set(CMAKE_CXX_STANDARD 14)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads)

add_executable(TareaCorta2 main.cpp Factory.cpp Factory.h List.h List_def.h Node.h Node_def.h Vehicle.cpp Vehicle.h Process.cpp Process.h)

target_link_libraries(TareaCorta2 ${CMAKE_THREAD_LIBS_INIT})