#ifndef LIDER_TECNICO_H
#define LIDER_TECNICO_H

#include "Empleado.h"

class LiderTecnico : public Empleado {
public:
    LiderTecnico(string n, double s) : Empleado(std::move(n), s) {}
    double calcularSalario() const override {
        return salarioBase * 1.25; // +25%
    }
};

#endif
