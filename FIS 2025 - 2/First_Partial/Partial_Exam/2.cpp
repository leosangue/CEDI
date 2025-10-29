//Leonardo Sandoval Guevara
//#22
//3C
//12/09/2025
#include<iostream>
#include<algorithm>
#include <array>
using namespace std;

int main(){
    array<int,3> a{0,0,0};
    cout<<"Ingrese la longitud del lado 1: ";
    cin>>a[0];
    cout<<"Ingrese la longitud del lado 2: ";
    cin>>a[1];
    cout<<"Ingrese la longitud del lado 3: ";
    cin>>a[2];

    sort(a.begin(), a.end());
    if(a[0]+a[1]>a[2]){
        cout<<"Se puede crear un triángulo con los lados que introdujo.";
    } else cout<<"No se puede crear un triángulo con los lados que introdujo.";
    return 0;
}

