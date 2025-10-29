#include<iostream>
using namespace std;

int main(){
    int a; cout<<"Ingrese el numero: "; cin>>a;
    while(true){
        cout<<a<<endl;
        if(a%2==0)a/=2; else a++;
        if(a==1) return 0;
    }
    return 0;
}
