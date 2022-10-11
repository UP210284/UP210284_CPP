/*Autor: Izhak Horacio Flores Triana
ISC03A
Objetivo: Muestra e uso de ciclos*/

#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    int suma = 0, par=0, impar=0;

    for (int i = 1; i <= n; i++)
    {
        
            printf("Contador %d \n", i);
        
        suma = suma + i;
        if(i%2==0)
        {
            par=par+i;
        }
        else
        {
            impar=impar+i;
        }
    }
    printf("La suma de %d numeros es de: %d\n", n, suma);
    printf("La suma de los pares es: %d\n", par);
    printf("La suma de los impares es: %d\n", impar);

    return 0;
}