cmake_minimum_required(VERSION 3.26)
project(obligatorio-p4)

set(CMAKE_CXX_STANDARD 17)

add_executable(obligatorio-p4 main.cpp
        Bruja.cpp
        Bruja.h
        Hechizo.cpp
        Hechizo.h
        Suprema.cpp
        Suprema.h
        Comun.cpp
        Comun.h
        Especial.cpp
        Especial.h
        Fecha.cpp
        Fecha.h
        DiccioBrujas.cpp
        DiccioBrujas.h
        SecHechizo.cpp
        SecHechizo.h)
