#include <iostream>
#include "usuario.hpp"
#include "publicacion.hpp"
using namespace std;
//globaliza una variable para asignar ids unicos
namespace {
int nextUsuarioId = 1;
}
    //3 constructores, solo nombre, nombre y edad, y nombre edad y nacionalidad
    Usuario::Usuario(string n){
    id = nextUsuarioId++;
    nombre = n;
    edad = 0;
    nacionalidad = "N/A";
    }
    Usuario::Usuario(string n, int e){
    id = nextUsuarioId++;
    nombre = n;
    edad = e;
    nacionalidad = "N/A";
    }
    Usuario::Usuario(string n, int e, string na){
    id = nextUsuarioId++;
    nombre = n;
    edad = e;
    nacionalidad = na;
    }
    //agregar a ambos usuarios a la lista de amigos del otro
    void Usuario::agregarAmigo(Usuario* a){
        amigos.push_back(a);
        a->amigos.push_back(this);
};
    int Usuario::getID(){
    return id;
    }
    void Usuario::mostrar(){
    cout << "Nombre: " << nombre << endl;
    cout << "ID: " << getID() << endl;
    cout << "Edad: " << edad << endl;
    cout << "Nacionalidad: " << nacionalidad << endl;
    }
    //muestra todos los amigos del usuario
    void Usuario::mostrarAmigos(){
    for(size_t i = 0; i < amigos.size(); i++){
        cout << "- " << amigos[i]->nombre << " (ID: " << amigos[i]->getID() << ")" << endl;
    }
    }
    //Muestra todas las publicaciones del usuario
    void Usuario::mostrarPublicaciones(){
   for(size_t i = 0; i < publicaciones.size(); i++){
        publicaciones[i]->mostrarPublicacion();
    }
    }
    //Funcion visual para crear una publicacion
    void Usuario::crearPublicacion(){
        string fechaNueva;
        string contenidoNuevo;
        cout << "Fecha (ej. 2026-03-25): ";
        getline(cin >> ws, fechaNueva); //usamos getline en vez de cin para permitir espacios en la fecha, y ws para limpiar cualquier espacio en blanco
        cout << "Contenido: ";
        getline(cin, contenidoNuevo);
        publicaciones.push_back(new Publicacion(this, fechaNueva, contenidoNuevo));
        //agregar la publicacion al vector con push back
    }
    //buscar amigo de usuario por ID
    Usuario* Usuario::getAmigo(int idBuscado){
        for (size_t i = 0; i < amigos.size(); i++) {
            if (amigos[i] != nullptr && amigos[i]->getID() == idBuscado) {
                return amigos[i];
            }
        }
        cout << "No existe un amigo con el id " << idBuscado << "." << endl;
        return nullptr;
    }
    //buscar amigo de usuario por NOMBRE
    Usuario* Usuario::getAmigo(string nombreBuscado){
        for (size_t i = 0; i < amigos.size(); i++) {
            if (amigos[i] != nullptr && amigos[i]->nombre == nombreBuscado) {
                return amigos[i];
            }
        }
        cout << "No existe un amigo con el nombre " << nombreBuscado << "." << endl;
        return nullptr;
    }
