cmake_minimum_required(VERSION 3.12)
project(MyCrashpadApp)

add_subdirectory(crashpad)

add_executable(my_app src/main.cpp)
target_link_libraries(my_app PRIVATE crashpad_client)

