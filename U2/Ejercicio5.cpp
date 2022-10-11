/* Autor: Izhak Horacio Flores Triana
ISC03A
Fecha: 07/10/22
Descripción: Pregunta 6 temperaturas y entrega el promedio, maxima y minima
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float t, a=0, max=-100, min=100;
    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese la temperatura %d:", i+1);
        cin>>t;
        a=a+t;
        if (min>t)
        {
            min=t;
        }
        if (max<t)
        {
            max=t;
        }
    }
    printf("El promedio de las temperaturas es: %f", a/6 ," °C\n");
    printf("La temperatura minima es: %f ", min , " ºC\n");
    printf("La temperatura maxima es: %f ", max ," ºC\n");
    return 0;
}