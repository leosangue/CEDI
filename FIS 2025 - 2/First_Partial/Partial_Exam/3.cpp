//Leonardo Sandoval Guevara
//#22
//3C
//12/09/2025
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Introduce la cantidad de cambio: "; cin>>a;cout<<endl<<"El cambio es: "<<endl;
    cout<<a/10<<" moneda(s) de $10."<<endl;
    a-=10*(a/10);
    cout<<a/5<<" moneda(s) de $5."<<endl;
    a-=5*(a/5);
    cout<<a<<" moneda(s) de $1."<<endl;

    return 0;
}

