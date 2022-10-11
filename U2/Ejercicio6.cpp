/* Autor: Izhak Horacio Flores Triana
ISC03A
Fecha: 07/10/22
Descripción: Se ingresa cierta cantidad de productos, su precio y se calcula el precio total
*/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a=0;
    float p=0, b=0;
    do
    {
        printf("Ingrese la cantidad de productos (ingresa 0 para terminar)\n");
        cin>>a;
        printf("Ingrese el precio del producto\n");
        cin>>p;
        b= b + p*a;
    } while (a!=0);
    
    printf("El total a pagar es: $%f\n", b);
    
    return 0;
}