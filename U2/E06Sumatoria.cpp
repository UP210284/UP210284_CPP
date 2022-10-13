/*Autor: Izhak Horacio Flores Triana
ISC03A
Objetivo: hacer una sumatoria del 1 al 10
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
