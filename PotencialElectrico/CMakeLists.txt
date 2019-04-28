cmake_minimum_required(VERSION 3.8)
project(PotencialElectrico)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Carga.cpp Carga.h simulador.cpp simulador.h test.cpp)
add_executable(PotencialElectrico ${SOURCE_FILES})