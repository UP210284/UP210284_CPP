/* Autor: Izhak Horacio Flores Triana
ISC03A
Fecha: 07/10/22
Descripción: Evaluación de los empleados de una empresa
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float a, b; //puntaje, acumulador del varo
    float c=2400;
    printf("introduce tu puntaje\n");
    cin>>a;
    

    if(a<0.4)
    {
        printf("Nivel inaceptable, tu dinero es: %f", c);
    }
    else if (a>=0.4&&a<0.6)
    {
        b=(0.4*c)+c;
        printf("Nivel aceptable, tu dinero es: %f", b);
    }
    else if (a>0.6)
    {
        b=(0.6*c)+c;
        printf("Nivel meritorio, tu dinero es: %f", b);
    }
    return 0;
}
