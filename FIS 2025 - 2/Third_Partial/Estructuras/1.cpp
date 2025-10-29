#include <iostream>
using namespace std;


struct Rectangulo {
    float ancho;
    float largo;


    float area() {
        return ancho * largo;
    }


    float perimetro(){
        return 2.0f * (ancho + largo);
    }
};

int main() {

    Rectangulo r;

    r.ancho = 5.0f;
    r.largo = 3.0f;


    float a = r.area();
    float p = r.perimetro();

    cout << "Rectángulo:" << endl;
    cout << "Ancho = " << r.ancho << endl;
    cout << "Largo = " << r.largo << endl;
    cout << "Área = " << a << endl;
    cout << "Perímetro = " << p << endl;

    return 0;
}
