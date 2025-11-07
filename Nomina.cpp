#include "Nomina.h"
#include "DesarrolladorJunior.h"
#include "DesarrolladorSenior.h"
#include "LiderTecnico.h"
#include "Tester.h"

void Nomina::agregar(unique_ptr<Empleado> e) {
    empleados.push_back(std::move(e));
}

void Nomina::inicializarDatos() {
    // al menos uno de cada tipo
    agregar(make_unique<DesarrolladorJunior>("Ana (Junior)", 3'000'000));
    agregar(make_unique<DesarrolladorSenior>("Luis (Senior)", 5'000'000));
    agregar(make_unique<LiderTecnico>("Carla (Lider Tecnico)", 6'000'000));
    agregar(make_unique<Tester>("Pedro (Tester)", 3'200'000));
    agregar(make_unique<DesarrolladorJunior>("Juan (Junior)", 3'000'000));
    agregar(make_unique<LiderTecnico>("Esteban Monroy (lider tecnico)", 6'000'000));
}

void Nomina::procesar() const {
    cout << fixed << setprecision(2);
    cout << "\n== Nomina detallada ==\n";
    for (const auto& e : empleados) {
        cout << " - " << e->getNombre()
             << " | base: " << e->getSalarioBase()
             << " | a pagar: " << e->calcularSalario()   // POLIMORFISMO
             << "\n";
    }
}

double Nomina::totalAPagar() const {
    double total = 0.0;
    for (const auto& e : empleados)
        total += e->calcularSalario();                   // POLIMORFISMO
    return total;
}
