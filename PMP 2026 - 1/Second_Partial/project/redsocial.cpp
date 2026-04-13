#include <iostream>
#include "publicacion.hpp"
#include "redsocial.hpp"
#include <cstdlib>
#include "usuario.hpp"

using namespace std;
//Constructor por Nombre solamente
RedSocial::RedSocial(string n)
    : nombre(n), numeroDeUsuarios(0), numeroDePublicaciones(0) {}
/*ESO ES LO MISMO QUE HACER:
RedSocial::RedSocial(string n) {
    nombre = n;
    numeroDeUsuarios = 0;
    numeroDePublicaciones = 0;
}
*/

//Constructor por Nombre y vector de usuarios
RedSocial::RedSocial(string n, vector<Usuario*> u)
    : usuarios(u), nombre(n), numeroDeUsuarios(u.size()), numeroDePublicaciones(0) {}

//Destructor, donde borra todos los usuarios y publicaciones
RedSocial::~RedSocial() {
    borrarPublicaciones();

    for (int i = 0; i < usuarios.size(); i++) {
        delete usuarios[i];
    }
    usuarios.clear();
    numeroDeUsuarios = 0;
}

//Agregar un puntero Usuario al vector de usuario existente
void RedSocial::agregarUsuario(Usuario* a) {
    if (a == nullptr) {
        return;
    }

    usuarios.push_back(a);
    numeroDeUsuarios = usuarios.size();
}


//Mostrar todos los usuarios de la red social
void RedSocial::mostrarUsuarios() {
    for (int i = 0; i < usuarios.size(); i++) {
        if (usuarios[i] != nullptr) {
            usuarios[i]->mostrar();
        }
        cout << "---------" << endl;
    }
}



//Mostrar todas las publicaciones de la red social
void RedSocial::mostrarPublicaciones() {
    for (int i = 0; i < usuarios.size(); i++) {
        if (usuarios[i] != nullptr) {
            usuarios[i]->mostrarPublicaciones();
        }
        cout << "---------" << endl;
    }
}

//obtener un puntero Usuario por su ID
Usuario* RedSocial::getUsuario(int id) {
    for (int i = 0; i < usuarios.size(); i++) {
        if (usuarios[i] != nullptr && usuarios[i]->getID() == id) {
            return usuarios[i];
        }
    }

    cout << "No existe un usuario con el id " << id << "." << endl;
    return nullptr;
}
//obtener un puntero Usuario por su nombre
Usuario* RedSocial::getUsuario(string nombreBuscado) {
    for (int i = 0; i < usuarios.size(); i++) {
        if (usuarios[i] != nullptr && usuarios[i]->nombre == nombreBuscado) {
            return usuarios[i];
        }
    }

    cout << "No existe un usuario con el nombre " << nombreBuscado << "." << endl;
    return nullptr;
}


//Funcion extra: Borra todas las publicaciones de la red social
void RedSocial::borrarPublicaciones() {
    for (int i = 0; i < usuarios.size(); i++) {
        if (usuarios[i] != nullptr) {
            for (int j = 0; j < usuarios[i]->publicaciones.size(); j++) {
                delete usuarios[i]->publicaciones[j];
            }
            usuarios[i]->publicaciones.clear();
        }
    }

    publicaciones.clear();
    numeroDePublicaciones = 0;
}

