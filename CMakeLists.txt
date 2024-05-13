cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lit VERSION 0.0.0)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} gmp)
target_link_libraries(${PROJECT_NAME} gmpxx)

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
