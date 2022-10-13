/*Autor: Izhak Horacio Flores Triana
ISC03A
Objetivo: hacer factorial de 10
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a=1, b=1;

    while(a<=10)
    {
        b=b*a;
        a++;
    }
    printf("La el factorial de 10 es %d", b);
    
    return 0;
}