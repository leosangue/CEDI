#include <iostream>
#include "animal.hpp"
#include "perro.hpp"
using namespace std;

int main(){
    Animal* a1 = new Animal();
    Animal* a2 = new Animal("Firulais", "Perro", 5);
    Animal* a3 = new Animal("Sebas", "Gato", 67);

    a1->mostrar();
    a2->mostrar();
    a3->mostrar();

    a1->comer();
    a2->comer();

    a1->dormir();
    a2->dormir();


    Perro* p1 = new Perro("Rex", 3);
    p1->mostrar();
    p1->ladrar();


    delete a1;
    delete a2;
    delete a3;

    return 0;
}