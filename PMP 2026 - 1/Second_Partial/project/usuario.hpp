#pragma once
#include <string>
#include <vector>
using namespace std;

class Publicacion;

class Usuario {
    private:
    int id;
    public:
    string nombre;
    int edad;
    string nacionalidad;
    vector<Usuario*> amigos;
    vector<Usuario*> usuariosBloqueados;
    vector<Publicacion*> publicaciones;

    public:
    Usuario(string n);
    Usuario(string n, int e);
    Usuario(string n, int e, string na);
    int getID();
    void mostrar();
    void mostrarAmigos();
    void mostrarPublicaciones();
    void crearPublicacion();
    void agregarAmigo(Usuario* a);
    Usuario* getAmigo(int id);
    Usuario* getAmigo(string nombre);
    void mostrarBloqueados();
    void agregarBloqueado(Usuario* u);
};

