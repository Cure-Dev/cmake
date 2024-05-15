cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(lit VERSION 0.0.0)

set(GMP_INCLUDE_DIR "deps/gmp/include")
set(GMP_LIBRARY_DIR "deps/gmp/bin")

include_directories(${GMP_INCLUDE_DIR})
find_library(GMP_LIBRARY NAMES gmp PATHS ${GMP_LIBRARY_DIR})
find_library(GMPXX_LIBRARY NAMES gmpxx PATHS ${GMP_LIBRARY_DIR})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${GMP_LIBRARY})
target_link_libraries(${PROJECT_NAME} ${GMPXX_LIBRARY})

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
