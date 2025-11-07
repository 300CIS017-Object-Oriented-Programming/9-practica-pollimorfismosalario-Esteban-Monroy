#ifndef NOMINA_H
#define NOMINA_H

#include <vector>
#include <memory>
#include <iostream>
#include <iomanip>
#include "Empleado.h"

class Nomina {
private:
    vector<unique_ptr<Empleado>> empleados;
public:
    void agregar(unique_ptr<Empleado> e);
    void inicializarDatos();         // creo datos de prueba
    void procesar() const;           // muestro salario calculado por empleado
    double totalAPagar() const;      // sumo ell total
};

#endif
