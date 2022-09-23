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

    return 0;
}