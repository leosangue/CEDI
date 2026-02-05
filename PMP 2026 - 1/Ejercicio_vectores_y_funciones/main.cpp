///main.cpp
#include <iostream>
#include <vector>
using namespace std;
#include "Empleado.hpp"
#include "funciones.hpp"

Empleado lista[5];
vector<Empleado> emps;
vector<int> numeros;
vector<string> palabras;

int main()
{
    /*
    // son equivalentes para constructor vac�o
    Empleado e1 ;
    Empleado e = {};

    // son equivalentes para constructor completo
    Empleado e2 = {30000, "Mario", 31, "Docencia"};
    Empleado e3(30000, "Mario", 31, "Docencia");

    e1.mostrarEmpleado();
    cout << endl;
    e1.nombre = "Carlos";
    e1.edad = 31;
    e1.departamento = "RRHH";
    e1.setSalarioMensual(10000);

    e1.mostrarEmpleado();
    cout << endl;
    e2.mostrarEmpleado();
    */

    ///Acceder al tama�o de un vector.
    cout << emps.size() << endl;

    ///Agregar un elemento a un vector.
    Empleado e;
    e.departamento="cp";
    emps.push_back(e);
    
    emps.push_back({});
    emps.push_back({1543,"Mario", 31, "Profe"});

    cout << emps.size() << endl;

    mostrarEmpleados(emps);
    cout<<calcularSalariosAnualesPorDepartamento(emps, "Profe");

    ///Elimina todos los elementos del vector
    emps.clear();

    cout << emps.size() << endl;
    return 0;
}
