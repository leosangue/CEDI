#include <iostream>
#include "rlutil.h"
using namespace std;
using namespace rlutil;

int grid[10][10]={
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,1,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    {0,1,0,1,0,1,0,1,0,1},
    };

void mostrarTablero(){
    for(int i=0;i<10;i++){
        for(int i2=0;i2<10;i2++){
            if(grid[i][i2]==0){
                setColor(WHITE);
                cout<<". ";
            }
            if(grid[i][i2]==1){
                setColor(RED);
                cout<<"X ";
            }

        }
        cout<<endl;
    }
}

int main(){
    mostrarTablero();
    while(true){
        if(kbhit()){
            int k = getkey();
            if(k== KEY_UP){

            }
            if(k== KEY_DOWN){

            }
            if(k== KEY_LEFT){

            }
            if(k== KEY_RIGHT){

            }
        }
        msleep(60);
    }
    return 0;
}
