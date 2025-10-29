#include <iostream>
using namespace std;

string nombres[100] = {"Mario", "Carlos"};
string telefonos[100] = {"1111111111", "2222222222"};
int tam = 2;

void mostrarContactos();
void agregarContacto(string nom, string tel);
void eliminarContacto(int num);
void eliminarContactoPorNombre(string nom);
void eliminarContactoPorTelefono(string tel);

int main()
{

    mostrarContactos();
    cout << endl;
    agregarContacto("Esteban", "3333333333");
    mostrarContactos();
    cout << endl;
    eliminarContacto(1);
    mostrarContactos();
    cout << endl;
    eliminarContactoPorNombre("Esteban");
    mostrarContactos();
    cout << endl;
    eliminarContactoPorTelefono("2222222222");
    mostrarContactos();
    cout << endl;
    agregarContacto("Esteban", "3333333333");
    mostrarContactos();

    return 0;
}

void mostrarContactos()
{
    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". " << nombres[i] << " - " << telefonos[i] << endl;
    }
    return;
}

void agregarContacto(string nom, string tel)
{
    int escribiren;
    for(int i=0;i<=tam;i++){
        if(nombres[i]==""&&telefonos[i]==""){
            escribiren=i;
            break;
        }
    }
    nombres[escribiren]=nom;
    telefonos[escribiren]=tel;
    if(escribiren==tam)tam++;
    return;
}

void eliminarContacto(int num)
{
    nombres[num-1]="";
    telefonos[num-1]="";
    return;
}

void eliminarContactoPorNombre(string nom)
{
    for(int i=0;i<tam;i++){
        if(nombres[i]==nom){
            nombres[i]="";
            telefonos[i]="";
            break;
        }
    }
    return;
}

void eliminarContactoPorTelefono(string tel)
{
    for(int i=0;i<tam;i++){
        if(telefonos[i]==tel){
            nombres[i]="";
            telefonos[i]="";
            break;
        }
    }
    return;

}
