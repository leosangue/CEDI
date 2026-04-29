#include "animal.hpp"
#include <iostream>

using namespace std;

Animal::Animal(){
    nombre = "Desconocido";
    especie = "Desconocida";
    edad = 0;
};
Animal::Animal(string n, string e, int ed){
    nombre = n;
    especie = e;
    edad = ed;
}

void Animal::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "Especie: " << especie << endl;
    cout << "Edad: " << edad << endl<<endl;
}
void Animal::comer(){
    cout <<  "nom nom nom" << endl;
}
void Animal::dormir(){
    cout << "zzz"<< endl;
}

