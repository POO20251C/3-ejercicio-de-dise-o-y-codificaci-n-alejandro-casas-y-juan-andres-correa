cmake_minimum_required(VERSION 3.30)
project(TrabajoGruposAlejandrito1)

set(CMAKE_CXX_STANDARD 20)

add_executable(TrabajoGruposAlejandrito1 main.cpp
                    src/Producto.cpp
                    src/Producto.h
                    src/Compra.cpp
                    src/Compra.h
                    src/Cliente.cpp
                    src/Cliente.h)
