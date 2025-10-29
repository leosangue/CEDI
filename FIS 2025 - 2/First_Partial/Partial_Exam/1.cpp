//Leonardo Sandoval Guevara
//#22
//3C
//12/09/2025
#include<iostream>
using namespace std;

int main(){
    double a;
    char b;
    cout<<"Ingresa el peso del paquete en kilogramos: ";
    cin>>a;
    cout<<"Ingresa la zona de destino: ('N' para Norte, 'C' para Centro, 'S' para Sur): ";
    cin>>b;
    while(b!='N'&&b!='S'&&b!='C'){
        cout<<"Ingresa una zona correcta de destino: ('N' para Norte, 'C' para Centro, 'S' para Sur): ";
        cin>>b;
    }
    cout<<"El costo de envío a la zona "<<((b=='N')?"Norte":(b=='C')?"Centro":"Sur")<<" por el paquete de "<<a<<"kg es de $";
    if(b=='N'){
        if(a<=5){
            cout<<a*15.0<<endl;
        } else{
            cout<<a*12.0<<endl;
        }
    } else if(b=='C'){
        if(a<=5){
            cout<<a*10.0<<endl;
        } else{
            cout<<a*8.0<<endl;
        }
    } else {
        if(a<=5){
            cout<<a*18.0<<endl;
        } else{
            cout<<a*15.0<<endl;
        }
    }
    return 0;
}

