cmake_minimum_required(VERSION 3.22.0)
project(homework_11_03)
include_directories(ClassLeaver)


add_executable(homework_11_03 cppm-homeworks_11_03.cpp)
target_link_libraries(homework_11_03 leaver)
add_subdirectory(ClassLeaver)