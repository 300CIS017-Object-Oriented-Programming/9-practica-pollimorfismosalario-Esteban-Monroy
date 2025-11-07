#ifndef TESTER_H
#define TESTER_H

#include "Empleado.h"

class Tester : public Empleado {
public:
    Tester(string n, double s) : Empleado(std::move(n), s) {}
    double calcularSalario() const override {
        return salarioBase * 1.05; // +5%
    }
};

#endif
