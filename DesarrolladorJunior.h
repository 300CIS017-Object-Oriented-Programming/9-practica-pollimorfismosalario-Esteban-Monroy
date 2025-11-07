#ifndef DESARROLLADOR_JUNIOR_H
#define DESARROLLADOR_JUNIOR_H

#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(string n, double s) : Empleado(std::move(n), s) {}
    double calcularSalario() const override {
        return salarioBase; // sin bono
    }
};

#endif
