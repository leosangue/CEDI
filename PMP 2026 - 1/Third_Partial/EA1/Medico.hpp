
#pragma once
#include <string>
using namespace std;

class Medico {
public:
    string nombre;
    string especialidad;
    int aniosExperiencia;

    Medico() : nombre("Juan Garcia"), especialidad("General"), aniosExperiencia(1) {}
    Medico(string n, string e, int a) : nombre(n), especialidad(e), aniosExperiencia(a) {}

    virtual int calcularHonorario();
    void mostrar();
};
