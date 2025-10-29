#include<iostream>
using namespace std;

int main(){
    long long a; double b;
    cout<<"Calculadora de peso en Kg de carne para una carne asada."<<endl;
    cout<<"Ingrese la cantidad de personas invitadas: "<<endl;
    cin>>a;
    cout<<endl<<"Ingrese el peso en gramos de la carne estimada por persona: "<<endl;
    cin>>b;
    cout<<endl<<"Necesitarás comprar "<<(a*b)/1000<<" kg de carne para "<<a<<" invitados.";
    return 0;
}
