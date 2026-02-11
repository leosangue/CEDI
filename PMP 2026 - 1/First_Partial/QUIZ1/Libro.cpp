#include<iostream>
#include"Libro.hpp"
Libro::Libro()
{
    precioBase=450.0f;
    autor="Desconocido";
    titulo="Desconocido";
    paginas =0;
}
Libro::Libro(float a, string b, string c, int d)
{
    precioBase=a;
    titulo=b;
    autor=c;
    paginas =d;
}

float Libro::getPrecioBase(){ return precioBase;}
void Libro::setPrecioBase(float a) {precioBase=a;}
float Libro::getPrecioFinal() {return precioBase*0.85f;} //Descuento del  15%
void Libro::mostrarDetalles() {
    cout<<"El libro a consultar es el siguiente:"<<endl<<"Titulo: "<<titulo<<endl<<"Autor: "<<autor<<endl<<"Numero de Paginas: "<<paginas<<endl<<"Precio Base: "<<precioBase<<endl<<"Precio Final: "<< getPrecioFinal()<<endl<<"=================="<<endl;
    return;
    }



