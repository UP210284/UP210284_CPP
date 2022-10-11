# Izhak Horacio Flores Triana 

# **Unidad 2**

<ol>
<li>Ejercicio 1_impuestos</li>
<li>Ejercicio 2_rendimiento</li>
<li>Ejercicio 3_sala de juegos</li>
<li>Ejercicio 4_pizzeria</li>
<li>Ejercicio 5_temperatura</li>
<li>Ejercicio 6_factura</li>
<li>Ejercicio 7_conversor</li>
</ol>

### Ejercicio 1
Muestra al usuario su impuesto a pagar dependiendo de su renta anual


<div align= "center">
<img src= "E1.png" />
</div>


```/*U2
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
```

### Ejercicio 2
Evalua el puntaje de los empleados de una empresa

<div align= "center">
<img src= "imagesu2/E2.png" />
</div>

```
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
```

### Ejercicio 3
Es una sala de juegos y dependiendo de la edad del usuario le dirá la cantidad a pagar por el acceso

<div align= "center">
<img src= "imagesu2/E3.png" />
</div>

```
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
```

### Ejercicio 4
Pregunta al usuario que tipo de pizza quiere y le da sus ingredientes después de seleccionarla

<div align= "center">
<img src= "imagesu2/E4.png" />
</div>


```
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
```

### Ejercicio 5
Pregunta al usuario 6 temperaturas, entrega el promedio, la máxima y la mínima

<div align= "center">
<img src= "imagesu2/E5.png" />
</div>

```
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
    printf("El promedio de las temperaturas es: %f", a/6 ," °C");
    printf("La temperatura minima es: %f ", min , " ºC");
    printf("La temperatura maxima es: %f ", max ," ºC");
    return 0;
}
```
### Ejercicio 6
Ingresa una cantidad indefinida de productos y entrega el costo final

<div align= "center">
<img src= "imagesu2/E6.png" />
</div>

```
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
```
### Ejercicio 7
Hace una conversión de binario a decimal

<div align= "center">
<img src= "imagesu2/E7.png" />
</div>


```
/* Autor: Izhak Horacio Flores Triana
ISC03A
Fecha: 07/10/22
Descripción: Se realiza una conversión de binario a decimal para enteros mayores a 0
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    string bin;
    int tam, s=0;
    printf("Ingresa el número binario a convertir \n");
    cin>>bin;

    tam=bin.size();
    for (int i = (tam-1); i >=0; i--)
    {
        if (bin[i]=='1')
        {
            s=s+ pow(2,((tam-1)-i));
        }
    }
    printf("El numero en decimal es: %d",s);

    return 0;
}
```