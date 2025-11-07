#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {
protected: // atributos portejidos part que sea capz de heredarse para los diferentes tipos de junior senior etc
    string nombre;
    double salarioBase;
public:
    Empleado(string n, double s) : nombre(std::move(n)), salarioBase(s) {}
    virtual ~Empleado() = default;

    string getNombre() const { return nombre; }
    double getSalarioBase() const { return salarioBase; }

    // Metodo abstracto: obliga a las hijas a implementar su cálculo.
    virtual double calcularSalario() const = 0;
};

#endif
