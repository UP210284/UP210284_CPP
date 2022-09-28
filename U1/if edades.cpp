/*Autor: Izhak Horacio Flores Triana
ISC03A
Objetivo: definir la etapa de la persona

[1..150] validacion
[1..30] 1ra edad
[31..60] 2da edad
[61..90] 3ra edad
[91...] horas extras
*/

#include <iostream>

using namespace std;
int main()
{
    int a;
    printf("Ingresa la edad: ");

    scanf("%d", &a);

    if (a >= 1 && a <= 150)
    {
        if (a <= 30)
        {
            printf("primera edad");
        }
        else if (a >= 31 && a <= 60)
        {
            printf("segunda edad");
        }
        else if (a >= 61 && a <= 90)
        {
            printf("Tercera edad");
        }
        else
            printf("Horas extra");
    }
    else
        printf("Edad no valida");

    getchar();
    return 0;
}