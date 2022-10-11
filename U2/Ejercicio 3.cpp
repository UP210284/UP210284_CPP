/* Autor: Izhak Horacio Flores Triana
ISC03A
Fecha: 07/10/22
Descripción: Una empresa tiene salas de juegos para todas las edades y quiere calcular de forma automática
el precio a cobrar a los clientes por entrar. Si el cluente es menor de 4 años, entra gratis, >4&&<18 paga 5
>18 paga $10 
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a; //edad

    printf("¿Cuál es tu edad?\n");
    cin>>a;

    if(a<4)
    {
        printf("Entras gratis");
    }
    else if (a>4&&a<18)
    {
        printf("Pagas $5");
    }
    else
    {
        printf("Pagas $10");
    }
    
    return 0;
}
