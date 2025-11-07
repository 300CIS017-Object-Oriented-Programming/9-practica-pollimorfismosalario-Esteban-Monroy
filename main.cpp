#include <iostream>
#include <iomanip>
#include "Nomina.h"
using  std::cout;

int main() {
    cout << "Sistema de Nomina \n";
    Nomina n;
    n.inicializarDatos();   // creo 1 junior, 1 senior, 1 lider, 1 tester tdo en el vector daod en nomina y dependiendo del llamdo establecido ya sea a junio a senior lider etc aplica su nomina mas el incremento

    n.procesar();           // muestra el salario calculado por cada empleado

    cout << fixed << setprecision(2);
    cout << "\nTotal a pagar: " << n.totalAPagar() << "\n";
    cout << "Proceso finalizado.\n";
    cout << "gracias por entrar al sistema de Nomina \n";
    return 0;
}
