
#pragma once
#include<bits/stdc++.h>
#include "Medico.hpp"
using namespace std;


class Cirujano : public Medico {
    public:
    int cirugiasMes;
    Cirujano(string n, string e, int a, int c): Medico(n,e,a), cirugiasMes(c) {}
    virtual int calcularHonorario();
    //Perro(string n, int e, string d) : Animal(n,"Perro",e),Domestico(d,0) {}
};
