#pragma once
#include <string>
#include "animal.hpp"
using namespace std;

class Perro : public Animal{
    public:
        string raza;

        Perro(string n, int e): Animal(n, "Perro", e){}

        void ladrar();
};