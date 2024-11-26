cmake_minimum_required(VERSION 3.28.3)

project(CaroGame VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

file(GLOB SRC_FILES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_executable(caro_game ${SRC_FILES})

include_directories(${PROJECT_SOURCE_DIR}/include)
