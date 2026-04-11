#pragma once
#include <string>
#include <vector>

class Publicacion;
class Usuario;

using namespace std;


class RedSocial {

private:

    vector<Usuario*> usuarios;
    vector<Publicacion*> publicaciones;

public:

    string nombre;
    int numeroDeUsuarios;
    int numeroDePublicaciones;

public:
    RedSocial(string n);
    RedSocial(string n, vector<Usuario*> u);
    ~RedSocial();
    void agregarUsuario(Usuario* a);
    void mostrarUsuarios();
    void mostrarPublicaciones();
    Usuario* getUsuario(int id);
    Usuario* getUsuario(string nombre);
    void borrarPublicaciones();
};
