
#include "tarea.hpp"
#include "funciones.hpp"

#include<iostream>
#include<vector>
#include<string>
using namespace std;

void mostrarTareas(vector<Tarea> a){
    cout<<"================Lista de Tareas==================="<<endl;
    for( auto b:a){
        b.mostrarTarea();
    }
    cout<<"=================================================="<<endl;
};
void mostrarResumen(vector<Tarea> a){
    int c=0,d=0;
    for( auto b:a){
        if(b.getCompletada()==true)c++; else d++;
    }
    cout<<"Tareas terminadas: "<< c<<endl;
    cout<<"Tareas pendientes: "<< d<< endl;
};
vector<Tarea> completarTodasLasTareas (vector<Tarea> &a){
    for(int i=0;i<a.size();i++){
        a[i].setCompletada(true);
    }
    return a;
}
