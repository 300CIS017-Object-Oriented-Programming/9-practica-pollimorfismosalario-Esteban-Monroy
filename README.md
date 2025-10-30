# polimorfismo - Ejercicio Salario de Empleados
Ejercicio que usa conceptos de polimorfismo en POO

## Enunciado
Diseña un sistema de gestión de nómina para una empresa de desarrollo de software que permita calcular el salario de diferentes tipos de empleados:  desarrolladores junior, desarrolladores senior, líderes técnicos y testers.

* Los desarrolladores junior ganan su salario base.
* Los desarrolladores senior reciben un bono del 20% sobre su salario base.
* Los líderes técnicos reciben un bono del 25% sobre su salario base.
* Los testers reciben un bono del 5% sobre su salario base

El sistema debe ser capaz de:
* Procesar la nómina de todos los empleados registrados, mostrando el salario calculado para cada uno. [ Por cuestión de pruebas cree un metodo "inicializarDatos" en los que cree empleados de todos los tipos al menos dos de cada tipo]. Use poliformismo 
* Calcular y mostrar el valor total a pagar a todos los empleados. Use polimorfismo

## Ejemplo
Para solucionar este ejercicio puede tomar como ejemplo lo desarrollado en https://github.com/300CIS017-Object-Oriented-Programming/solucionHerenciaFigurasGeometricas

## ⚙️ Requerimientos no funcionales

- La solución debe implementar relaciones de herencia de manera adecuada y explícita.
- Se debe aplicar polimorfismo mediante la sobrescritura de métodos, manteniendo las mismas firmas en la clase base y en las derivadas.
- Se recomienda incorporar un archivo `.gitignore` en el repositorio para excluir del repo carpetas de archivos de compilación como la carpeta cmake-build-debug y la .idea.
- Organice el proyecto en carpetas, en el ejemplo puede ver una estructura de directorios que podría seguir.
- Use un cmake parecido al del ejemplo pues le facilitará la gestión de nuevas clases

## 📦 Entregables

- Diagrama UML desarrollado con sintaxis **Mermaid**.
- Código fuente documentado y subido al repositorio de **GitHub Classroom** correspondiente.
- Se evaluará el trabajo en clase más que el producto final.

