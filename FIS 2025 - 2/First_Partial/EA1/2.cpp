#include<iostream>
using namespace std;

int main(){
    long long a;
    cout<<"Calculadora de boleto de precio para cine local"<<endl;
    cout<<"Ingrese su edad: ";
    cin>>a;
    bool f= (a<=12);
    if(f){
        cout<<"El precio de tu boleto es de $60";
    } else cout<<"El precio de tu boleto es de $90";

    return 0;
}
