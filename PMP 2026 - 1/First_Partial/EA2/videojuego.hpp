#pragma once
#include <string>
using namespace std;

class Videojuego
{
private:
    float precioBase;

public:
    string titulo;
    string genero;

    Videojuego();
    Videojuego(string t, string g, float p);

    float getPrecioBase();
    void setPrecioBase(float p);
    float getPrecioConIVA();
    void mostrarInfo();
};
