#include<iostream>
#include "funciones.hpp"
#include<string>
#include "videojuego.hpp"
#include<vector>
using namespace std;

float calcularVentaTotal(vector<Videojuego> a){
    float suma=0.0f;
    for(auto b:a){
        suma+=b.getPrecioConIVA();
    }
    return suma;
}
void mostrarJuegosDeGenero(vector<Videojuego> a, string b){
    if(b==""){
        for(auto c:a){
            c.mostrarInfo();
        }
    } else{
        for(auto c:a){
            if(b==c.genero){
                c.mostrarInfo();
            }
        }
    }
}
vector<Videojuego> aplicarDescuentoGeneral(vector<Videojuego> &a,float b){
    for(int i=0;i<a.size();i++){
        a[i].setPrecioBase(a[i].getPrecioBase()*(1-(b/100)));
    }
    return a;

}
