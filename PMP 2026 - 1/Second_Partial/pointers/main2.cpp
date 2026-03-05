#include<iostream>
using namespace std;
void duplicarNumero(int* x){
    if(x!=nullptr){
        *x*=2;
    }
}
int main(){
    int a=4;
    int *x=&a;
    duplicarNumero(x);
    cout<<*x<<endl;

    int* p = nullptr;
    p=new int;
    *p=10;
    delete p;
    p=nullptr;

    int* pArray = new int[5];
    for(int i=0;i<5;i++){
        *(pArray+i)=i;
        cout<<*(pArray+i)<<endl;
    }
    delete[] pArray;
    pArray=nullptr;

    return 0;
}