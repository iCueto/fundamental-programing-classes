#include <stdio.h>

/* Calcula el perímetro de un rectángulo.
El programa, al recibir como datos la base y la altura de un rectángulo,
calcula su perímetro.
BASE, ALT y PERIM: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para la base, la altura y el perímetro
    float BASE, ALT, PERIM;
    // Solicitamos al usuario que ingrese la base y la altura del rectángulo
    printf("Ingrese la base y la altura del rectángulo: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables BASE y ALT
    scanf("%f %f", &BASE, &ALT);
    // Calculamos el perímetro del rectángulo
    PERIM = 2 * (BASE + ALT);
    // Imprimimos el valor del perímetro
    printf("El perímetro del rectángulo es: %.2f", PERIM);
}
