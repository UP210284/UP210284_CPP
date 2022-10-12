/*Autor: Izhak Horacio Flores Triana
ISC03A
Objetivo: definir la etapa de la persona

*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n=5;

    for(int i=0; i<=10; i++){
        if (i==6){
            break;//continue;

        }
        else{
            cout<<i<<endl;
        }
        cout<<"numero "<<i<<endl;
    }
    cout<<"Hecho"<<endl;
    return 0;
}
