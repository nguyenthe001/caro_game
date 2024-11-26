cmake_minimum_required(VERSION 3.28.3)

project(CaroGame VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)

add_executable(caro_game src/main.cpp src/CaroApp.cpp src/Controller.cpp src/ChessBoard.cpp src/BOT.cpp src/Player.cpp src/Referee.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)
