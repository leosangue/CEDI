#include<iostream>
#include<string>
using namespace std;
class Materia {
    public:
    string nombre;
    string abreviacion;
    float calificacion;
    void mostrar(){
        cout<<"=============="<<endl<<"Abreviacion: "<<abreviacion<<endl<<"Nombre: "<<nombre<<endl<<"Calificacion: "<<calificacion<<endl;
        return ;
    }
};
Materia FIS = {"Fisica Intencional Sistemica","FIS",9.5};
Materia MATE = {"Matematicas","MRGA",8.5};
Materia APP;


int main(){
    APP.nombre="Aplicacion profesional";
    APP.abreviacion="APP";
    APP.calificacion=4.5;
    FIS.mostrar();
    MATE.mostrar();
    APP.mostrar();

    return 0;
}
