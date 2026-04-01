cmake_minimum_required(VERSION 3.18.2)

project(GeisterCore LANGUAGES CXX)

set(PYBIND11_FINDPYTHON ON)
find_package(pybind11 CONFIG REQUIRED)

add_subdirectory(adapter)

pybind11_add_module(geistercore main.cpp)
target_link_libraries(geistercore PRIVATE adapter)

install(TARGETS geistercore DESTINATION .)