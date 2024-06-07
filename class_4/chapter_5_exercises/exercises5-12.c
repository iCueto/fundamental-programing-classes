#include <stdio.h>

/* Calcula el área de un rectángulo.
El programa, al recibir como datos la base y la altura de un rectángulo,
calcula su área.
BASE, ALT y AREA: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para la base, la altura y el área
    float BASE, ALT, AREA;
    // Solicitamos al usuario que ingrese la base y la altura del rectángulo
    printf("Ingrese la base y la altura del rectángulo: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables BASE y ALT
    scanf("%f %f", &BASE, &ALT);
    // Calculamos el área del rectángulo
    AREA = BASE * ALT;
    // Imprimimos el valor del área
    printf("El área del rectángulo es: %.2f", AREA);
}
