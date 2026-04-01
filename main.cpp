#include "adapter\coreadapter.cpp"
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(geistercore, m) {
    m.doc() = "ガイスターのコアライブラリ";
    m.def("hello", &hello, "テスト用");
}