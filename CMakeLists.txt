cmake_minimum_required(VERSION 3.0)

project(exercises)

add_executable(exercises AreaTriangulo.cpp)

install(TARGETS exercises RUNTIME DESTINATION bin)
