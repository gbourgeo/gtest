cmake_minimum_required(VERSION 3.0)
project(test_project)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(${PROJECT_NAME}_headers
  ${CMAKE_SOURCE_DIR}/include/Character.hh
)

set(${PROJECT_NAME}_sources
  ${CMAKE_SOURCE_DIR}/src/Character.cpp
)

add_subdirectory(unit_tests)

include_directories(include src)

add_library(${PROJECT_NAME} ${${PROJECT_NAME}_sources} ${${PROJECT_NAME}_headers})
