cmake_minimum_required(VERSION 3.21)
project(rcache)

set(CMAKE_CXX_STANDARD 14)

add_executable(rcache main.cpp src/mm.cpp src/mm.h src/mem_unit.cpp src/mem_unit.h src/const.h src/cell.cpp src/cell.h src/index.cpp src/index.h src/cache_manager.cpp src/cache_manager.h src/cell_manager.cpp src/cell_manager.h)
