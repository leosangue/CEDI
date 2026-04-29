

#pragma once
#include <string>
#include"Medico.hpp"
using namespace std;

class Pediatra : public Medico {
    public:
    int pacientesMes;
    Pediatra(string n, string e, int a, int p): Medico(n,e,a), pacientesMes(p) {}
    virtual int calcularHonorario();
};
