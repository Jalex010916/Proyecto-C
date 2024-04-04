cmake_minimum_required(VERSION 3.27)
project(Facultad)

set(CMAKE_CXX_STANDARD 17)

add_executable(Facultad main.cpp
        Estudiante.cpp
        Interface/Estudiante.h
        Trabajador.cpp
        Interface/Trabajador.h
        Profesor.cpp
        Interface/Profesor.h
        Secretaria.cpp
        Interface/Secretaria.h
)
