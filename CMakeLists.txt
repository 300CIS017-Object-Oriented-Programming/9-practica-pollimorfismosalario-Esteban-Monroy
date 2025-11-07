cmake_minimum_required(VERSION 4.0)
project(9_practica_pollimorfismosalario_Esteban_Monroy)

set(CMAKE_CXX_STANDARD 20)

add_executable(9_practica_pollimorfismosalario_Esteban_Monroy main.cpp
        Empleado.cpp
        Empleado.h
        DesarrolladorJunior.cpp
        DesarrolladorJunior.h
        DesarrolladorSenior.cpp
        DesarrolladorSenior.h
        LiderTecnico.cpp
        LiderTecnico.h
        Tester.cpp
        Tester.h
        Nomina.cpp
        Nomina.h)
