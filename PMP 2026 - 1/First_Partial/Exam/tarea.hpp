#pragma once
#include<string>
using namespace std;
class Tarea
{
private:
    bool completada;
public:

    string descripcion;
    Tarea();
    Tarea(string desc);

    bool getCompletada();
    void setCompletada(bool comp);
    void mostrarTarea();
};
