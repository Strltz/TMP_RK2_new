cmake_minimum_required(VERSION 3.10)

project(TMP_RK2_new)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

file(GLOB SOURCES "src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

enable_testing()
add_subdirectory(test)
