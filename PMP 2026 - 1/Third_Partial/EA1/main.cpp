
#include<bits/stdc++.h>
#include"Medico.hpp"
#include"Pediatra.hpp"
#include"Cirujano.hpp"
using namespace std;


int main(){
    vector<Medico*> personal;
    Medico* Pablo = new Medico();
    Medico* Sebas = new Cirujano("Sebastian","Cirujano",10,20);
    Medico* Ruth = new Pediatra("Ruth","Pediatra",20,50);

    personal.push_back(Pablo);
    personal.push_back(Sebas);
    personal.push_back(Ruth );

    for(auto a: personal){
           // cout<<"p";
        a->mostrar();
        delete a;
    }



    return 0;
}
