#include <iostream>
#include "publicacion.hpp"
#include "usuario.hpp"

using namespace std;

//globaliza una variable para asignar ids unicos a las publicaciones
namespace {
int nextPublicacionId = 1;
}

//Constructor de Publicacion, dandole id unico, autor, fecha y contenido
Publicacion::Publicacion(Usuario* u, string f, string c)
	: id(nextPublicacionId++), autor(u), fecha(f), contenido(c) {}

//Funcion para obtener el id de la publicacion
int Publicacion::getID() {
	return id;
}


//Imprime los datos de la publicacion
void Publicacion::mostrarPublicacion() {
	cout << "Publicacion #" << id << "\n";
	cout << "Fecha: " << fecha << "\n";
	if (autor != nullptr) {
		cout << "Autor: " << autor->nombre << "\n";
	}
	cout << "Contenido: " << contenido << "\n";
}