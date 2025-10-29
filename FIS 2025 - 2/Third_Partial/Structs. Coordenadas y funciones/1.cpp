#include<iostream>
#include<cmath>
using namespace std;

struct Coordenada{
double x;
double y;



};

double distancia(Coordenada a, Coordenada b){
    return sqrt(((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y)));
}
void mostrarFuncion(Coordenada a, Coordenada b){
    double m = (a.y-b.y)/(a.x-b.x);
    double ba= a.y-((a.x)*m);
    cout<< m<<"x+"<<ba<<endl;
}
int main(){
    Coordenada uno{8.0,2.0};
    Coordenada dos{1.0,10.0};
    double distance = distancia(uno,dos);
    cout<<"La distancia entre ("<<uno.x<<","<<uno.y<<") y ("<<dos.x<<","<<dos.y<<") es "<<distance<<endl;
    cout<<"La funcion formada es ";
    mostrarFuncion(uno,dos);
    return 0;
}
