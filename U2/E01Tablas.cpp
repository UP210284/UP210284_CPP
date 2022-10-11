/* Autor: Izhak Horacio Flores Triana
ISC03A U2
Fecha: 04/10/22
Descripción: 
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n=5;
    int x=0;
    int y=10;
    int r;
  
    for(int i=1; i<=10; i++)
    {
        r=n*i;
        cout <<n<< " X " << i<< "= " << r<< endl;
    }

    for(int i=10; i>=1; i--)
    {
        r=n*i;
        cout <<n<< " X " << i<< "= " << r<< endl;
    }

    while (x<= 10)
    {
    
        int r=n*x;
        printf("%d \n", r);
        x++;
    
    }
    
    while (y>0)
    {
    
        int r=n*y;
        printf("while \n %d \n", r);
        y--;
    }

    do
    {
        r=n*x;
        
        x=x+1;       
    }
    while (x<110);
    printf("do while \n %d \n", r); 

    return 0;
}