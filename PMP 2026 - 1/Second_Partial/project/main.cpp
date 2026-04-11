#include <iostream>
#include <limits>
#include <vector>
#include "usuario.hpp"
#include "publicacion.hpp"
#include "redsocial.hpp"
using namespace std;
int leerEntero() {
    int valor;
    while (!(cin >> valor)) { //mientras que valor no sea nulo
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //sirve para limpiar el buffer de entrada y evitar que el programa se quede atrapado en un bucle infinito si el usuario ingresa algo que no es un numero
        cout << "Entrada invalida. Intenta de nuevo: ";
    }
    return valor;
}
//funcion del menu USUARIO (no principal)
void mostrarMenuUsuario(RedSocial& red, Usuario* usuarioActual) {
    if (usuarioActual == nullptr) {
        return;
    }
    while (true) {
        cout << "\n===== PERFIL DE USUARIO =====" << endl;
        usuarioActual->mostrar();
        cout << "1. Ver lista de amigos" << endl;
        cout << "2. Ver publicaciones" << endl;
        cout << "3. Crear publicacion" << endl;
        cout << "4. Entrar a perfil de amigo" << endl;
        cout << "5. Agregar un nuevo amigo" << endl;
        cout << "6. Ver usuarios bloqueados" << endl;
        cout << "7. Bloquear usuario" << endl;
        cout << "8. Salir" << endl;
        cout << "Selecciona una opcion: ";
        int opcionUsuario = leerEntero();
        switch (opcionUsuario) {
            //ver amigos
            case 1:
                cout << "\n===== AMIGOS =====" << endl;
                usuarioActual->mostrarAmigos();
                break;
            //ver publicaciones
            case 2:
                cout << "\n===== PUBLICACIONES DEL USUARIO =====" << endl;
                usuarioActual->mostrarPublicaciones();
                break;
            //crear una nueva publicacion para el usuario actual
            case 3:
                cout << "\n===== CREAR PUBLICACION =====" << endl;
                usuarioActual->crearPublicacion();
                break;
            //entrar al perfil de un amigo
            case 4: {
                cout << "\n===== AMIGOS =====" << endl;
                usuarioActual->mostrarAmigos();
                cout << "Ingresa el ID del amigo: ";
                int idAmigo = leerEntero();
                
                Usuario* amigoSeleccionado = usuarioActual->getAmigo(idAmigo);
                mostrarMenuUsuario(red, amigoSeleccionado);
                break;
            }
            //agregar amigo
            case 5: {
                cout << "\n===== USUARIOS DISPONIBLES =====" << endl;
                red.mostrarUsuarios();
                cout << "Ingresa el ID del usuario a agregar como amigo: ";
                int idNuevoAmigo = leerEntero();
                
                Usuario* nuevoAmigo = red.getUsuario(idNuevoAmigo);
                if (nuevoAmigo == nullptr) {
                    break;
                }
                if (nuevoAmigo == usuarioActual) {
                    cout << "No puedes agregarte a ti mismo." << endl;
                    break;
                }
                bool yaEsAmigo = false;
                for (size_t i = 0; i < usuarioActual->amigos.size(); i++) {
                    if (usuarioActual->amigos[i] != nullptr && usuarioActual->amigos[i]->getID() == idNuevoAmigo) {
                        yaEsAmigo = true;
                        break;
                    }
                }
                if (yaEsAmigo) {
                    cout << "Ese usuario ya es tu amigo." << endl;
                    break;
                }
                usuarioActual->agregarAmigo(nuevoAmigo);
                cout << "Amigo agregado correctamente." << endl;
                break;
            }
            //ver usuarios bloqueados
            case 6:
                cout << "\n===== USUARIOS BLOQUEADOS =====" << endl;
                usuarioActual->mostrarBloqueados();
                break;
            //bloquear usuario
            case 7: {
                cout << "\n===== USUARIOS DISPONIBLES PARA BLOQUEAR =====" << endl;
                red.mostrarUsuarios();
                cout << "Ingresa el ID del usuario a bloquear: ";
                int idBloquear = leerEntero();
                
                Usuario* usuarioBloquear = red.getUsuario(idBloquear);
                if (usuarioBloquear == nullptr) {
                    break;
                }
                if (usuarioBloquear == usuarioActual) {
                    cout << "No puedes bloquearte a ti mismo." << endl;
                    break;
                }
                bool yaBloqueado = false;
                for (size_t i = 0; i < usuarioActual->usuariosBloqueados.size(); i++) {
                    if (usuarioActual->usuariosBloqueados[i] != nullptr && usuarioActual->usuariosBloqueados[i]->getID() == idBloquear) {
                        yaBloqueado = true;
                        break;
                    }
                }
                if (yaBloqueado) {
                    cout << "Ese usuario ya está bloqueado." << endl;
                    break;
                }
                usuarioActual->agregarBloqueado(usuarioBloquear);
                cout << "Usuario bloqueado correctamente." << endl;
                break;
            }
            //regresar al menu principal
            case 8:
                return;
            default:
                cout << "Opcion invalida." << endl;
                break;
        }
    }
}
int main()
{
    //crear red social con un nombre namas
    RedSocial red("Gramo Instantaneo");
    //crear usuarios (solamente los punteros)
    Usuario* leo = new Usuario("Leo", 67, "Mexico");
    Usuario* mariano = new Usuario("Mariano", 20, "Mexico");
    Usuario* carlos = new Usuario("Carlos", 25, "Mexico");
    leo->agregarAmigo(mariano);
    leo->agregarBloqueado(carlos);
    //crear publicaciones  (solamente los punteros) y agregarlas a los usuarios 
    Publicacion* p1 = new Publicacion(leo, "2026-03-25", "Primera Publicacion");
    Publicacion* p2 = new Publicacion(mariano, "2026-03-25", "Segunda Publicacion");
    leo->publicaciones.push_back(p1);
    mariano->publicaciones.push_back(p2);
    //agregar los usuarios a la red social
    red.agregarUsuario(leo);
    red.agregarUsuario(mariano);
    red.agregarUsuario(carlos);
    //ciclo principal del programa
    while (true) {
        cout << "\n===== BIENVENIDO A " << red.nombre << " =====" << endl;
        cout << "1. Ver lista de usuarios" << endl;
        cout << "2. Ver lista de publicaciones" << endl;
        cout << "3. Entrar a un perfil de usuario" << endl;
        cout << "4. Agregar un nuevo usuario" << endl;
        cout << "5. Salir" << endl;
        cout << "Selecciona una opcion: ";
        int opcionPrincipal = leerEntero();
        
        switch (opcionPrincipal) {
            case 1:
                cout << "\n===== LISTA DE USUARIOS =====" << endl;
                red.mostrarUsuarios();
                break;
            case 2:
                cout << "\n===== LISTA DE PUBLICACIONES =====" << endl;
                red.mostrarPublicaciones();
                break;
            //entrar al perfil de alguien
            case 3: {
                cout << "Ingresa el ID del usuario: ";
                int idUsuario = leerEntero();
                
                Usuario* usuario = red.getUsuario(idUsuario);
                if (usuario != nullptr) {
                    mostrarMenuUsuario(red, usuario);
                }
                break;
            }
            //agregar un nuevo usuario a la red social
            case 4: {
                string nombre;
                int edad;
                string nacionalidad;
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar buffer
                cout << "Nombre: ";
                getline(cin, nombre);
                cout << "Edad: ";
                edad = leerEntero();
                
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar buffer
                cout << "Nacionalidad: ";
                getline(cin, nacionalidad);
                Usuario* nuevoUsuario = new Usuario(nombre, edad, nacionalidad);
                red.agregarUsuario(nuevoUsuario);
                cout << "Usuario agregado correctamente con ID " << nuevoUsuario->getID() << "." << endl;
                break;
            }
            //apagar el programa
            case 5:
                return 0;
            default:
                cout << "Opcion invalida." << endl;
                break;
        }
    }
    return 0;
}
