cmake_minimum_required(VERSION 3.10.0)

project(TRIANGLE_LIB VERSION 0.0.1 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_BUILD_TYPE RelWithDebInfo)

find_path(TRIANGLE_INCLUDE_DIRS triangle.h HINTS ${CMAKE_SOURCE_DIR}/include)

add_library(triangle SHARED triangle.cpp)
target_include_directories(triangle PUBLIC ${TRIANGLE_INCLUDE_DIRS})
