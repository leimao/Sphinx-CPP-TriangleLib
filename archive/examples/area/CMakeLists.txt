cmake_minimum_required(VERSION 3.10.0)

project(TRIANGLE_EXAMPLE_AREA VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

find_path(TRIANGLE_INCLUDE_DIRS triangle.h HINTS ${CMAKE_SOURCE_DIR}/include)

message(${TRIANGLE_INCLUDE_DIRS})

add_executable(area area.cpp)
target_include_directories(area PUBLIC ${TRIANGLE_INCLUDE_DIRS})
target_link_libraries(area triangle)
