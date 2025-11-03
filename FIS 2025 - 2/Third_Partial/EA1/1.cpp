#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;
struct Calificaciones {
    float parcial1;
    float parcial2;
};
struct Alumno {
    string nombre;
    string matricula;
    Calificaciones califs;
};
void mostrarAlumno(Alumno a);
float calcularPromedio(Calificaciones c);
void mostrarGrupo();
void agregarAlumno();
Alumno grupo[25]={{"Leo","19225",{5,9}},{"Erik","15090",{6,7}},{"Ruth","99999",{10,10}}};
int tam =3;
int main(){
    mostrarGrupo();
    agregarAlumno();
    mostrarGrupo();
    return 0;

}
void mostrarAlumno(Alumno a){
    cout<<"Nombre: "<<a.nombre<<"\nMatricula: "<<a.matricula<<"\nCalificaciones: \n Parcial 1: "<<fixed<<setprecision(1)<<a.califs.parcial1<<"\n Parcial 2: "<<a.califs.parcial2<<endl;
}
float calcularPromedio(Calificaciones c){
    return (c.parcial1+c.parcial2)/2.0f;
}
void mostrarGrupo(){
    for(int i=0;i<tam;i++){
        cout<<i+1<<". "<<endl;
        mostrarAlumno(grupo[i]);
    }
}
void agregarAlumno(){
    cout<<"Ingrese el nombre del nuevo alumno:";
    string n; cin>>n;
    cout<<"Ingrese la matricula del nuevo alumno:";
    string m; cin>>m;
    cout<<"Ingrese la calificacion del parcial 1 del nuevo alumno:";
    float c1; cin>>c1;
    cout<<"Ingrese la calificacion del parcial 2 del nuevo alumno:";
    float c2; cin>>c2;
    grupo[tam]={n,m,{c1,c2}};
    tam++;
}
