
add_library(adapter STATIC coreadapter.cpp)

target_link_libraries(adapter PRIVATE pybind11::module)