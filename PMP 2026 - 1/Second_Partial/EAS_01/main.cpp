#include<iostream>
using namespace std;

void capturarPrecios(float* a, int b){
    if(a!=nullptr){
        for(int i=0;i<b;i++){
            cout<<"Ingrese el precio #"<<i+1<<":";
            cin>>*(a+i);
        }
    }
}
void mostrarPrecios(float* a, int b){
    if(a!=nullptr){
        for(int i=0;i<b;i++){
            cout<<"Precio #"<<i+1<<": $"<< a[i]<<endl;
        }
    }
}
float calcularPromedio(float* a, int b){
    if(a!=nullptr){
        float c;
        for(int i=0;i<b;i++){
            c+=*(a+i);
        }
        return c/b;
    }
}
int main(){
    cout<<"Cantidad de usuarios que deseas registrar: "; int b; cin>>b;
    float *c=nullptr;
    c= new float[b];
    capturarPrecios(c,b);
    mostrarPrecios(c,b);
    cout<<"El promedio de los "<< b<<" precios es: $"<<calcularPromedio(c,b);

    delete[] c;
    c=nullptr;
    return 0;
}
/*
1. ¿Qué almacena exactamente una variable de tipo apuntador a un float?
- Una variable de tipo apuntador a un float almacena la dirección de memoria en la que este float está ubicado.
2. ¿Cómo se le llama a la acción de obtener el valor que está guardado en una dirección de memoria? (*ptr)
- Desreferenciar
3. Si el programa termina y olvidaste escribir la línea delete[] ptr ¿Qué sucede con esa memoria RAM que solicitaste?
- Si se omite la línea delete[], ahora el apuntador estará "existiendo" dentro de la memoria RAM a pesar de que el programa ya haya acabado. Al repetir esto muchas veces, se puede llenar la memoria (stack overflow).
4. ¿Qué significa que un apuntador tenga el valor nullptr?
- Significa que no apunta a nada, es nulo.
5. Si quisieras obtener la dirección de memoria de una variable común (int x, por ejemplo) para guardarla en un apuntador, ¿qué operador tendrías que usar (* o &)?
- &
6. ¿Cuál es la diferencia entre arreglo[i] y *(arreglo + i)?
- En la primera opción, estamos accediendo al elemento i del arreglo "arreglo, y en la segunda, estamos sumando i a la dirección de memoria de arreglo, y se desreferencia la dirección resultante. (Es igual)
*/

