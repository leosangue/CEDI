#include<iostream>
#include<string>
#include"Libro.hpp"



using namespace std;


int main(){
    Libro def;
    Libro HarryPotter(1000.0f,"Harry Potter y la Piedra Filosofal", "J.K. Rowling",300);
    def.titulo="Metamorfosis";
    def.autor="Kafka";
    def.paginas=100;
    def.setPrecioBase(2000.0f);
    def.mostrarDetalles();
    HarryPotter.mostrarDetalles();
    return 0;
}


