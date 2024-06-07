#include <stdio.h>

/* Calcula el área de un triángulo.
El programa, al recibir como datos la base y la altura de un triángulo,
calcula su área.
BASE, ALT y AREA: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para la base, la altura y el área
    float BASE, ALT, AREA;
    // Solicitamos al usuario que ingrese la base y la altura del triángulo
    printf("Ingrese la base y la altura del triángulo: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables BASE y ALT
    scanf("%f %f", &BASE, &ALT);
    // Calculamos el área del triángulo
    AREA = (BASE * ALT) / 2;
    // Imprimimos el valor del área
    printf("El área del triángulo es: %.2f", AREA);
}
