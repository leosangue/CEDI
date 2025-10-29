#include<iostream>
using namespace std;


int main(){
    float a,b;
    cout<<"Introduzca la cantidad de minutos de la llamada: ";
    cin>>a;
    cout<<"El total a pagar por la llamada de "<<a<<" minutos es de $"<<((a<=5)?a:(a<=8)?(5.0+((a-5)*0.8)):((a<=10)?(7.4+((a-8)*0.5)):(8.4+((a-10)*(0.3)))));
    return 0;
}
