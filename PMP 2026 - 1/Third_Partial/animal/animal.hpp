#pragma once
#include <string>

using namespace std;

class Animal{
    public:
        string nombre;
        string especie;
        int edad;
        
        Animal();
        Animal(string nombre, string especie, int edad);

        void mostrar();
        void comer();
        void dormir();

};