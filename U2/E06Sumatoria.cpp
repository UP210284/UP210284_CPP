/*Autor: Izhak Horacio Flores Triana
ISC03A
Objetivo: hacer una sumatoria, el 7 es para obtener el factorial, el 8 es para resolver una ecuacion cuadratia
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=1, b=0;

    while(a<=10)
    {
        b=b+a;
        a++;
    }
    printf("La suma es %d", b);
    
    return 0;
}
