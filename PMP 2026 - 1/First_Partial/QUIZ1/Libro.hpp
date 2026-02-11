

#include<string>

using namespace std;

class Libro{
private:
    float precioBase;
public:
    string titulo;
    string autor;
    int paginas;
    Libro();
    Libro(float a, string b, string c, int d);
    float getPrecioBase();
    void setPrecioBase(float a);
    float getPrecioFinal();
    void mostrarDetalles();

};
