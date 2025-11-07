#ifndef DESARROLLADOR_SENIOR_H
#define DESARROLLADOR_SENIOR_H

#include "Empleado.h"

class DesarrolladorSenior : public Empleado {
public:
    DesarrolladorSenior(string n, double s) : Empleado(std::move(n), s) {}
    double calcularSalario() const override {
        return salarioBase * 1.20; // +20%
    }
};

#endif
