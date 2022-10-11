/* Autor: Izhak Horacio Flores Triana
ISC03A
Fecha: 07/10/22
Descripción: Se realiza una conversión de binario a decimal para enteros mayores a 0
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    string bin;
    int tam, s=0;
    printf("Ingresa el número binario a convertir \n");
    cin>>bin;

    tam=bin.size();
    for (int i = (tam-1); i >=0; i--)
    {
        if (bin[i]=='1')
        {
            s=s+ pow(2,((tam-1)-i));
        }
    }
    printf("El numero en decimal es: %d",s);

    return 0;
}