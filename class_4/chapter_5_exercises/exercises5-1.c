#include <stdio.h>
#include <math.h>

/* Calcula la hipotenusa.
El programa, al recibir como datos las longitudes de los catetos de un triángulo rectángulo,
calcula la hipotenusa del mismo.
CAT1, CAT2 y HIP: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para los catetos y la hipotenusa
    float CAT1, CAT2, HIP;
    // Solicitamos al usuario que ingrese las longitudes de los catetos
    printf("Ingrese las longitudes de los catetos: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables CAT1 y CAT2
    scanf("%f %f", &CAT1, &CAT2);
    // Calculamos la hipotenusa usando el teorema de Pitágoras
    HIP = sqrt(CAT1 * CAT1 + CAT2 * CAT2);
    // Imprimimos el valor de la hipotenusa
    printf("La hipotenusa es: %.2f", HIP);
}
