/*
U2
Autor: Izhak Horacio Flores Triana
ISC03A
27/09/2022
Problema: mostrar a usuario el impuesto que le corresponde por su renta anual
<$10000 = impuesto de 5%
10000 - 20000 impuesto del 15%
20000 - 35000 impuesto del 20%
35000 - 60000 impuesto del 30%
más de 60000 impuesto del 45%
*/

#include <iostream>

using namespace std;

int main()
{
    int a;

    printf("Introduduce tu pago de renta ");
    scanf ("%d", &a);

    if (a > 0)
    {
        if (a <= 10000)
        {
            printf("Impuesto del 5%");
        }
        else if (a > 10000 && a <= 20000)
        {
            printf("Impuesto del 15%");
        }
        else if (a > 20000 && a <= 35000)
        {
            printf("Impuesto del 20%");
        }
        else if (a > 35000 && a <= 60000)
        {
             printf("Impuesto del 30%");
        }
        else
            printf("Impuesto del 45%");
    }
    else
        printf("Cantidad no válida, adiós");

    getchar();

    return 0;
}
