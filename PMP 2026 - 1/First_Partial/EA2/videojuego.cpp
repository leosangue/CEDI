#include "Videojuego.hpp"
#include <iostream>
using namespace std;

Videojuego::Videojuego()
{
    titulo = "Nuevo Juego";
    genero = "Sin clasificar";
    precioBase = 100.0f;
}

Videojuego::Videojuego(string t, string g, float p)
{
    titulo = t;
    genero = g;
    precioBase = p;
}

float Videojuego::getPrecioBase()
{
    return precioBase;
}

void Videojuego::setPrecioBase(float p)
{
    if (p > 0)
    {
        precioBase = p;
    }
}

float Videojuego::getPrecioConIVA()
{
    return precioBase * 1.16f;
}

void Videojuego::mostrarInfo()
{
    cout << "[" << genero << "] " << titulo << endl;
    cout << "Base: $" << precioBase << endl;
    cout << "Con IVA: $" << getPrecioConIVA() << endl;
}
