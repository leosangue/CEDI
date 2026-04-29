
#include "Medico.hpp"
#include <iostream>
using namespace std;

int Medico::calcularHonorario() {
    return aniosExperiencia * 500;
}

void Medico::mostrar() {
    cout << nombre << endl;
    cout << especialidad << endl;
    cout << aniosExperiencia << " anios de experiencia" << endl;
    cout << "Honorario: $" << calcularHonorario() << endl << endl;
}
