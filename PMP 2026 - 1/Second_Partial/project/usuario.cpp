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
        // Remover de bloqueados si está ahí
        for (size_t i = 0; i < usuariosBloqueados.size(); ++i) {
            if (usuariosBloqueados[i] == a) {
                usuariosBloqueados.erase(usuariosBloqueados.begin() + i);
                break;
            }
        }
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

    //muestra todos los usuarios bloqueados
    void Usuario::mostrarBloqueados(){
        if (usuariosBloqueados.empty()) {
            cout << "No tienes usuarios bloqueados." << endl;
            return;
        }
        for(size_t i = 0; i < usuariosBloqueados.size(); i++){
            cout << "- " << usuariosBloqueados[i]->nombre << " (ID: " << usuariosBloqueados[i]->getID() << ")" << endl;
        }
    }

    //agregar usuario a bloqueados
    void Usuario::agregarBloqueado(Usuario* u){
        if (u == nullptr || u == this) return;
        // Verificar si ya está bloqueado
        for (Usuario*& bloqueado : usuariosBloqueados) {
            if (bloqueado == u) return;
        }
        usuariosBloqueados.push_back(u);
        // Quizás remover de amigos si es amigo
        for (size_t i = 0; i < amigos.size(); ++i) {
            if (amigos[i] == u) {
                amigos.erase(amigos.begin() + i);
                break;
            }
        }
    }



