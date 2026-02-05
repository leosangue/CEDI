/// funciones.hpp
#pragma once
#include <vector>
#include "Empleado.hpp"
using namespace std;


void mostrarEmpleados(vector<Empleado> emps);
float calcularSalariosAnualesTotales(vector<Empleado> emps);
float calcularSalariosAnualesPorDepartamento(vector<Empleado> emps, string departamento);