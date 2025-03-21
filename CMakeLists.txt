cmake_minimum_required(VERSION 3.10)
project(CessnaController)
set(CMAKE_CXX_COMPILER "/usr/bin/g++-11")

find_package(ignition-math6 REQUIRED)
find_package(gazebo REQUIRED)
find_package(TBB REQUIRED)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${GAZEBO_INCLUDE_DIRS}
    ${ignition-math6_INCLUDE_DIRS}
    ${TBB_INCLUDE_DIRS}
    )

add_subdirectory(src)
