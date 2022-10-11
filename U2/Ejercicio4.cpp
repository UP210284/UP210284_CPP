/* Autor: Izhak Horacio Flores Triana
ISC03A
Fecha: 07/10/22
Descripción: Preguntar al usuario si quiere una pizza vegetariana o no y mostrar sus ingredientes
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;

    printf("¿De cuál pizza quieres?\n Presiona 1 si quieres vegetariana \n Presiona 2 si no quieres vegetariana\n");
    cin >> a;
    switch (a)
    {
    case 1:

        printf("Elije un ingrediente presionando un número: \n 1: Pimiento \n 2: Tofu \n");
        cin >> b;

        switch (b)
        {
        case 1:
            printf("Tu pizza es vegetariana y lleva: mozzarela, tomate y pimiento\n");
            break;
        case 2:
            printf("Tu pizza es vegetariana y lleva: mozzarela, tomate y tofu\n");
            break;
        default:
            printf("Elección incorrecta, adiós");
            break;
        }
    break;
    case 2:
        printf("Elije un ingrediente: \n 1: Peperoni \n 2: Jamón \n 3: Salmón");
        cin >> b;

        switch (b)
        {
        case 1:
            printf("Tu pizza no es vegetariana y lleva: mozzarela, tomate y peperoni\n");
            break;
        case 2:
            printf("Tu pizza no es vegetariana y lleva: mozzarela, tomate y jamón\n");
            break;
        case 3:
            printf("Tu pizza no es vegetariana y lleva: mozzarela, tomate y salmón\n");
            break;    
        default:
            printf("Elección incorrecta, adiós");
            break;
        }
    break;
    default:
            printf("Elección incorrecta, adiós");
            break;    
    }

    return 0;
}
