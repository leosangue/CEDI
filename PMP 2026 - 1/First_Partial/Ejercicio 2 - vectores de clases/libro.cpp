#include "libro.hpp"
#include <iostream>
using namespace std;

// Constructor vacío: Valores por defecto según requerimientos
Libro::Libro() {
    titulo = "Título Genérico";
    autor = "Desconocido";
    paginas = 0;
    precioBase = 450.0f;
}

// Constructor completo
Libro::Libro(string t, string a, int p, float pre) {
    titulo = t;
    autor = a;
    paginas = p;
    precioBase = pre;
}

float Libro::getPrecioBase() const {
    return precioBase;
}

void Libro::setPrecioBase(float p) {
    precioBase = p;
}

// Cálculo de precio final con descuento (10% de descuento elegido)
float Libro::getPrecioFinal() const {
    float descuento = 0.10f;
    return precioBase * (1.0f - descuento);
}

void Libro::mostrarDetalles() const {
    cout << "-----------------------------------------" << endl;
    cout << "El libro a consultar es el siguiente:" << endl;
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Páginas: " << paginas << endl;
    cout << "Precio Base: $" << precioBase << endl;
    cout << "Precio Final (con descuento): $" << getPrecioFinal() << endl;
    cout << "-----------------------------------------" << endl;
}
