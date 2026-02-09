///Empleado.cpp
#include "Empleado.hpp"
#include <iostream>
using namespace std;

Empleado::Empleado()
{
    salarioMensual = 15000.f;
    nombre = "Jose";
    edad = 20;
    departamento = "Finanzas";
}

Empleado::Empleado(float sM, string n, int e, string d)
{
    salarioMensual = sM;
    nombre = n;
    edad = e;
    departamento = d;
}

float Empleado::getSalarioMensual()
{
    return salarioMensual;
}

void Empleado::setSalarioMensual(float sM){
    salarioMensual = sM;
    return;
}
float Empleado::getSalarioAnual(){
    return salarioMensual * 12;
}
void Empleado::mostrarEmpleado(){
    cout << "Nombre: " << nombre<< endl;
    cout << "Edad: " << edad<< endl;
    cout << "Departamento: " << departamento<< endl;
    cout << "Salario mensual: " << salarioMensual<< endl;
    cout << "Salario anual: " << getSalarioAnual()<< endl;
    return;
}

