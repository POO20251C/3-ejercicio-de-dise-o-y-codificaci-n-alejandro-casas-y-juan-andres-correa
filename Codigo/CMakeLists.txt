cmake_minimum_required(VERSION 3.30)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 main.cpp
        src/Producto.cpp
        src/Producto.h
        src/Compra.cpp
        src/Compra.h
        src/Client.cpp
        src/Client.h
        src/Tienda.cpp
        src/Tienda.h)
