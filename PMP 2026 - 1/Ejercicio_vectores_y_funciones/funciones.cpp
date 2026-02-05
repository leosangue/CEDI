/// funciones.cpp
#include <vector>
#include<iostream>
#include "Empleado.hpp"
using namespace std;


void mostrarEmpleados(vector<Empleado> emps){
    for(auto e : emps){
        e.mostrarEmpleado();
    }
}

float calcularSalariosAnualesTotales(vector<Empleado> emps){
    float total = 0;
    for(auto e : emps){
        total += e.getSalarioAnual();
    }
    return total;
}
float calcularSalariosAnualesPorDepartamento(vector<Empleado> emps, string departamento){
    float total = 0;
    for(Empleado e : emps){
        if(e.departamento==departamento) total += e.getSalarioAnual();
    }
    return total;

}