#include<iostream>
#include<vector>
#include <climits>

using namespace std;

struct Estadisticas{
    int puntosAnotados;
    int asistencias;
};
struct Jugador{
    string nombre;
    int numeroCamiseta;
    Estadisticas stats;
};
Jugador Equipo[5] = {
    {"Mateo", 23, {18, 5}},
    {"Bruno", 7, {12, 3}},
    {"Lucas", 67, {67, 67}},
    {"Nico", 11, {9, 2}},
    {"Tomas", 34, {21, 6}}
};

void mostrarEquipo(){
    for(int i=0;i<5;i++){
        cout<<i+1<<". "<<Equipo[i].nombre<<" - Numero de camiseta: "<<Equipo[i].numeroCamiseta<<" - Puntos Anotados: "<<Equipo[i].stats.puntosAnotados<<" - Asistencias: "<<Equipo[i].stats.asistencias<<endl;
    }
}
int calcularPuntosTotales(){
    int sum;
    for(int i=0;i<5;i++){
        sum+=Equipo[i].stats.puntosAnotados;
    }
    return sum;
}
void mostrarJugadorMasValioso(){
    int pro=0;
    float maximo=0;
    for(int i=0;i<5;i++){
        if(Equipo[i].stats.puntosAnotados+(Equipo[i].stats.asistencias*0.5f)>maximo){
            maximo=Equipo[i].stats.puntosAnotados+(Equipo[i].stats.asistencias*0.5f);
            pro=i;
        }
    }
    cout<<"El jugador mas valioso es: "<<pro+1<<". "<<Equipo[pro].nombre<<" - Calificacion: "<<maximo<<endl;
}
void mostrarJugadorMenosValioso(){
    int noob=0;
    float minimo=INT_MAX;
    for(int i=0;i<5;i++){
        if(Equipo[i].stats.puntosAnotados+(Equipo[i].stats.asistencias*0.5f)<minimo){
            minimo=Equipo[i].stats.puntosAnotados+(Equipo[i].stats.asistencias*0.5f);
            noob=i;
        }
    }
    cout<<"El jugador menos valioso es: "<<noob+1<<". "<<Equipo[noob].nombre<<" - Calificacion: "<<minimo<<endl;
}
void promedioPuntosAnotados(){
    float sum=0;
    for(int i=0;i<5;i++){
        sum+=Equipo[i].stats.puntosAnotados;
        //sum+=Equipo[i].stats.asistencias*0.5f;
    }
    cout<<"El promedio de los puntos anotados es: "<<sum/5.0f<<endl;
}
void promedioAsistencias(){
    float sum=0;
    for(int i=0;i<5;i++){
        //sum+=Equipo[i].stats.puntosAnotados;
        sum+=Equipo[i].stats.asistenciasx;
    }
    cout<<"El promedio de asistencias es: "<<sum/5.0f<<endl;
}
int main(){
    promedioAsistencias();
    promedioPuntosAnotados();
}

