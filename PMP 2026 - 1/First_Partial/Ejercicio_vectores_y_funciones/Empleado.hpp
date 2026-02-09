///Empleado.hpp
#pragma once
#include <string>
using namespace std;

class Empleado
{
private:
    float salarioMensual;

public:
    string nombre;
    int edad;
    string departamento;

    Empleado();
    Empleado(float sM, string n, int e, string d);

    float getSalarioMensual();
    void setSalarioMensual(float sM);
    float getSalarioAnual();
    void mostrarEmpleado();
};
