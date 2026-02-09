#include "libro.hpp"
#include "funciones.hpp"
#include <iostream>

int main() {

    Libro libro1("Cien años de soledad","Gabriel García Marquez", 471, 520.0f);
    Libro libro2("Pedro Páramo", "Juan Rulfo", 132, 350.0f); // Constructor completo

    vector<Libro> a;
    a.push_back(libro1);
    a.push_back(libro2);

    cout<<"La suma de los precios de todos los libros: "<<calcularValorTotal(a)<<endl;
    string autor = "Gabriel García Marquez";
    cout<<"Los libros del autor "<< autor<<": "<<endl;mostrarLibrosDeAutor(a,autor);cout<<endl;
    float inf=50;
    a=ajustarPreciosPorInflacion(a,inf);
    cout<<"Lista de todos los libros despues de ser ajustados por el "<<inf<<"% de Inflación: "<<endl;
    for(auto b:a){
        b.mostrarDetalles();
    }


    return 0;
}