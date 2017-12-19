cmake_minimum_required(VERSION 3.0)
project(test_project_test)

link_directories(
  "C:/Program Files/googletest-distribution/lib"
  "C:/Program Files/googletest-distribution/bin"
)

include_directories(
  ${CMAKE_SOURCE_DIR}/include
  ${CMAKE_SOURCE_DIR}/src
  "C:/Program Files/googletest-distribution/include"
)

set(${PROJECT_NAME}_headers
)

set(${PROJECT_NAME}_sources
  src/GTest_main.cpp
  src/test_simple.cpp
)

add_executable(${PROJECT_NAME}
  ${${PROJECT_NAME}_sources}
  ${${PROJECT_NAME}_headers}
  ${${CMAKE_PROJECT_NAME}_sources}
  ${${CMAKE_PROJECT_NAME}_headers}
)

target_link_libraries(${PROJECT_NAME} gtest)

