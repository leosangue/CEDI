#include "funciones.hpp"
#include "libro.hpp"
#include <iostream>
#include<string>
#include<vector>
using namespace std;

float calcularValorTotal(vector<Libro> b){
    float c=0;
    for(auto a:b){
        c+=a.getPrecioFinal();
    }
    return c;
}

void mostrarLibrosDeAutor(vector<Libro> b,string c){
    for(auto a:b){
        if(a.autor==c) a.mostrarDetalles();
    }
}
vector<Libro> ajustarPreciosPorInflacion(vector<Libro> b, float c){
    for(auto &a: b){
        a.setPrecioBase(a.getPrecioBase()*(1+(c/100)));
    }
    return b;
}