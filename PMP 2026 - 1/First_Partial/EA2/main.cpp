#include<iostream>
#include "funciones.hpp"
#include "videojuego.hpp"
using namespace std;


int main()
{
    vector<Videojuego> a;
    a.push_back({});
    a.push_back({"Factorio","Automatización",400});
    a.push_back({"Age Of Empires 2: DE","Estrategia",179});
    for(auto b:a)
    {
        b.mostrarInfo();
    }
    cout<<endl<<"El valor de la venta total es de "<< calcularVentaTotal(a)<< " dolares."<<endl<<endl;
    cout<<"Ingrese un porcentaje de descuento (1-100): ";
    float b;
    cin>>b;
    a=aplicarDescuentoGeneral(a,b);
    for(auto b:a)
    {
        b.mostrarInfo();
    }


    return 0;
}
