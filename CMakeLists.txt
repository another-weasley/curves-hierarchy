cmake_minimum_required(VERSION 3.5)

set (PROJECT curves-hierarchy)
project (${PROJECT})

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


set (HEADERS
        point3d.hpp
        curve.hpp
        circle.hpp
        ellipse.hpp
        helix.hpp)
set (SOURCES
        point3d.cpp
        circle.cpp
        ellipse.cpp
        helix.cpp
        main.cpp)

add_executable(${PROJECT} ${HEADERS} ${SOURCES})
