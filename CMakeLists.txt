cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(lit VERSION 0.0.0)

#set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
#set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
#set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)

set(GMP_INCLUDE_DIR "${PROJECT_SOURCE_DIR}/deps/gmp/include")
set(GMP_LIBRARY_DIR "${PROJECT_SOURCE_DIR}/deps/gmp/lib")

if (${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    find_file(GMP_LIBRARY libgmp.dll ${GMP_LIBRARY_DIR})
    find_file(GMPXX_LIBRARY libgmpxx.dll ${GMP_LIBRARY_DIR})
else ()
    find_library(GMP_LIBRARY gmp ${GMP_LIBRARY_DIR})
    find_library(GMPXX_LIBRARY gmpxx ${GMP_LIBRARY_DIR})
endif()

include_directories(${GMP_INCLUDE_DIR})

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} ${GMP_LIBRARY})
target_link_libraries(${PROJECT_NAME} ${GMPXX_LIBRARY})

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
