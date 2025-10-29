#include <iostream>
using namespace std;

string nombres[100] = {"Mario", "Carlos"};
string telefonos[100] = {"1111111111", "2222222222"};
int tam = 2;
int a;
void mostrarContactos();
void agregarContacto();
void editarid();
void editarnombre();
void eliminarContacto();
void eliminarContactoPorNombre();
void eliminarContactoPorTelefono();
void intercambiarContactos();

int main()
{

    while (a != 9){
        cout<<"==================================="<<endl;
        cout<<"Elige una de las siguientes opciones:"<<endl;
        cout<<"1. Mostrar Contactos"<<endl;
        cout<<"2. Agregar Contacto"<<endl;
        cout<<"3. Editar Contacto (por ID)"<<endl;
        cout<<"4. Editar Contacto por Nombre"<<endl;
        cout<<"5. Eliminar Contacto (por ID)"<<endl;
        cout<<"6. Eliminar Contacto por Nombre"<<endl;
        cout<<"7. Eliminar Contacto por Teléfono"<<endl;
        cout<<"8. Intercambiar contactos"<<endl;
        cout<<"9. Salir"<<endl;
        cout<<"==================================="<<endl;
        cin >> a;

        system("cls");
        switch(a){
            case 1: mostrarContactos(); break;
            case 2: agregarContacto(); break;
            case 3: editarid(); break;
            case 4: editarnombre(); break;
            case 5: eliminarContacto(); break;
            case 6: eliminarContactoPorNombre(); break;
            case 7: eliminarContactoPorTelefono(); break;
            case 8: intercambiarContactos(); break;
            case 9: cout<<"Saliendo..."<<endl; break;
            default: cout<<"Introduce una opción válida (1-9)."<<endl; break;
        }
    }

    return 0;
}

void mostrarContactos()
{
    cout<<"==================================="<<endl;
    if(tam==0){
        cout<<"No hay contactos guardados."<<endl;
        return;
    }
    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". " << nombres[i] << " - " << telefonos[i] << endl;
    }
    return;
}

void agregarContacto()
{
    cout << "===================================" << endl;
    cout << "Ingresa el nombre del nuevo contacto: ";
    string name;
    cin >> name;
    cout << "Ingresa el telefono del nuevo contacto: ";
    string tel;
    cin >> tel;
    int id;
    cout << "Ingresa la posición (ID) donde quieres agregar el contacto (1 a " << tam+1 << "): ";
    cin >> id;
    if(id < 1 || id > tam + 1) {
        cout << "ID inválido. Se agregará al final." << endl;
        id = tam + 1;
    }
    int index = id - 1;
    for(int i = tam; i > index; i--){
        nombres[i] = nombres[i - 1];
        telefonos[i] = telefonos[i - 1];
    }
    nombres[index] = name;
    telefonos[index] = tel;

    tam++;
    cout << "Contacto agregado correctamente." << endl;
    cout << "===================================" << endl;
}

void editarid()
{
    system("cls");
    mostrarContactos();
    cout<<"==================================="<<endl;
    cout<<"Ingresa el id del contacto que quieres editar: ";
    int id; cin>> id;
    if(id < 1 || id > tam){
        cout<<"ID inválido."<<endl;
        return;
    }
    cout<<"Ingresa el nuevo nombre del contacto: ";
    string name; cin>>name;
    cout<<"Ingresa el nuevo telefono del contacto: ";
    string tel; cin>>tel;
    nombres[id-1]=name;
    telefonos[id-1]=tel;
    cout<<"Contacto editado correctamente."<<endl;
    cout<<"==================================="<<endl;
}
void editarnombre(){
    system("cls");
    mostrarContactos();
    cout<<"==================================="<<endl;
    cout<<"Ingresa el nombre del contacto que quieres editar: ";
    string nameog;
    cin >> nameog;

    bool encontrado = false;
    for(int i = 0; i < tam; i++){
        if(nombres[i] == nameog){
            cout<<"Ingresa el nuevo nombre del contacto: ";
            string name; cin >> name;
            cout<<"Ingresa el nuevo telefono del contacto: ";
            string tel; cin >> tel;
            nombres[i]=name;
            telefonos[i]=tel;
            cout<<"Contacto editado correctamente."<<endl;
            encontrado = true;
            break;
        }
    }
    if(!encontrado){
        cout<<"No se encontró un contacto con ese nombre."<<endl;
    }
    cout<<"==================================="<<endl;
}

void eliminarContacto()
{
    system("cls");
    mostrarContactos();
    cout << "===================================" << endl;
    cout << "Ingresa el ID del contacto que quieres eliminar: ";
    int id;
    cin >> id;
    if (id < 1 || id > tam) {
        cout << "ID inválido." << endl;
        cout << "===================================" << endl;
        return;
    }
    int index = id - 1;
    for (int i = index; i < tam - 1; i++) {
        nombres[i] = nombres[i + 1];
        telefonos[i] = telefonos[i + 1];
    }
    tam--;
    nombres[tam]="";
    telefonos[tam]="";

    cout << "Contacto eliminado correctamente." << endl;
    cout << "===================================" << endl;
}


void eliminarContactoPorNombre()
{
    system("cls");
    mostrarContactos();
    cout << "===================================" << endl;
    cout << "Ingresa el nombre del contacto que quieres eliminar: ";
    string name;
    cin >> name;
    if (name=="") {
        cout << "Nombre invalido." << endl;
        return;
    }
    bool encontrado=false;
    for (int i = 0; i < tam; i++) {
        if(name==nombres[i]){
            for (int i2 = i; i2 < tam - 1; i2++) {
                nombres[i2] = nombres[i2 + 1];
                telefonos[i2] = telefonos[i2 + 1];
            }
            tam--;
            nombres[tam]="";
            telefonos[tam]="";
            encontrado=true;
        }
    }
    if (!encontrado){
        cout << "No hay algun contacto con ese nombre." << endl;
        cout << "===================================" << endl;
        return;
    }
    cout << "Contacto eliminado correctamente." << endl;
    cout << "===================================" << endl;
}

void eliminarContactoPorTelefono()

{
    system("cls");
    mostrarContactos();
    cout << "===================================" << endl;
    cout << "Ingresa el telefono del contacto que quieres eliminar: ";
    string tel;
    cin >> tel;
    if (tel=="") {
        cout << "Telefono invalido." << endl;
        return;
    }
    bool encontrado=false;
    for (int i = 0; i < tam; i++) {
        if(tel==telefonos[i]){
            for (int i2 = i; i2 < tam - 1; i2++) {
                nombres[i2] = nombres[i2 + 1];
                telefonos[i2] = telefonos[i2 + 1];
            }
            tam--;
            nombres[tam]="";
            telefonos[tam]="";
            encontrado=true;
        }
    }
    if (!encontrado){
        cout << "No hay algun contacto con ese telefono." << endl;
        cout << "===================================" << endl;
        return;
    }
    cout << "Contacto eliminado correctamente." << endl;
    cout << "===================================" << endl;
}
void intercambiarContactos(){
    mostrarContactos();
    cout << "===================================" << endl;
    cout << "Ingresa el id del primer contacto a intercambiar: ";
    int id1; cin>>id1;
    cout << "Ingresa el id del segundo contacto a intercambiar: ";
    int id2; cin>>id2;
    if(id1<1||id1>tam||id2<1||id2>tam||id1==id2){
        cout<<"Los ids ingresados son invalidos. Intenta de Nuevo."<<endl;
        return;
    }
    string temp[2]={nombres[id1-1],telefonos[id1-1]};
    nombres[id1-1]=nombres[id2-1];
    telefonos[id1-1]=telefonos[id2-1];
    nombres[id2-1]=temp[0];
    telefonos[id1-1]=temp[1];
    cout << "===================================" << endl;
    cout << "Contactos intercambiados correctamente"<<endl;

}
