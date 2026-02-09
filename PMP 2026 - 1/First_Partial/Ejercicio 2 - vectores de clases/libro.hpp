#pragma once
#include <string>
using namespace std;

class Libro {
private:
    float precioBase;

public:
    string titulo;
    string autor;
    int paginas;

    // Constructores
    Libro();
    Libro(string t, string a, int p, float pre);

    // Métodos
    float getPrecioBase() const;
    void setPrecioBase(float p);
    float getPrecioFinal() const;
    void mostrarDetalles() const;
};