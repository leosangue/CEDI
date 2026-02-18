#include "tarea.hpp"
#include "funciones.hpp"

#include<iostream>
#include<vector>
#include<string>
using namespace std;

Tarea::Tarea(){
    completada=false;
    descripcion="NA";
}

Tarea::Tarea(string desc){
    descripcion=desc;
    completada=false;
}

bool Tarea::getCompletada(){
    return completada;
}

void Tarea::setCompletada(bool comp){
    completada=comp;
}

void Tarea::mostrarTarea(){
    cout<<"==================="<<endl<<"Descripcion de la tarea: "<<descripcion<<endl<<"Estado: ";
    cout<<(getCompletada()? "Completada":"Pendiente");
    cout<<endl<<"==================="<<endl;
}
