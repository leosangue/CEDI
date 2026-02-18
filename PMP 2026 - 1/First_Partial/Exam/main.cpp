#include<iostream>
#include<vector>
#include<string>

#include"tarea.hpp"
#include"funciones.hpp"
using namespace std;


int main(){
    vector<Tarea> a;
    a.push_back({});
    a.push_back({"P.167 del libro de mate"});
    a.push_back({"Leer novela"});

    mostrarTareas(a);
    mostrarResumen(a);
    a= completarTodasLasTareas(a);
    mostrarTareas(a);
    mostrarResumen(a);
    return 0;
}
