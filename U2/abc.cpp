/*Autor: Izhak Horacio Flores Triana
ISC03A
28/09/2022
Problema: Imprimir abecedario*/
#include <iostream>

using namespace std;

int main()
{
    char letra = 'A';
    char m = 'a';
    //int x = 1;
    //int y = 10;

    for (int i = 0; i < 26; i++)
    {
        cout << letra << "\n";
        letra = letra + 1;
    }
    for (int b = 0; b < 26; b++)
    {
        cout << m << "\n";
        m = m + 1;
    }
    for (int c = 1; c <= 10; c++)
    {
        cout << c << "\n";
        // x = x + 1;
    }
    for (int d = 10; d > 0; d--)
    {
        cout << d << "\n";
        // x = x - 1;
    }

    return 0;
}
