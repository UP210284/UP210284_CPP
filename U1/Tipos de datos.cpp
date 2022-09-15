/* U1. Tipos de datos
Autor: Izhak Horacio Flores Triana
Fecha: 15/09/22
Descripción: Muestra los diferentes tipos de datos en C++
*/

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int entero = 156151561;
    float flotante = 3.454e10;
    double grande = 2.89465189486512;
    char caracter = '@';

    cout <<"Este programa muestra ls tipos de datos. \n";
    cout <<"El número entero es: "<<entero<< endl;
    cout <<"El tamaño del entero es: "<<sizeof(entero)<<" bytes"<<endl;
    cout <<"El número flotante es: "<<flotante<< endl;

    getchar();
    return 0;
}
