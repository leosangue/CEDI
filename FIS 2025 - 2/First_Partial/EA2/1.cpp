#include<iostream>
using namespace std;


int main(){
    int a,b;
    cout<<"Introduzca la cantidad de dulces disponibles: ";
    cin>>a;
    cout<<"Introduzca la cantidad de estudiantes: ";
    cin>>b;
    cout<<"Le tocarian "<<a/b<<" dulces a cada uno, y sobran "<<a%b<<".";

    return 0;
}
