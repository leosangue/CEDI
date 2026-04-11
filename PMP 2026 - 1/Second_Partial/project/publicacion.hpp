#pragma once
#include <string>

class Usuario;

using namespace std;


class Publicacion{
    private:
        int id;    
    public:
        Usuario* autor;
        string fecha;
        string contenido;
        Publicacion(Usuario* u, string f, string c);
        int getID();
        void mostrarPublicacion();
};
