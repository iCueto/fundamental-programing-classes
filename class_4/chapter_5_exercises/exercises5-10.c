#include <stdio.h>

/* Calcula el área de un círculo.
El programa, al recibir como dato el radio de un círculo,
calcula su área.
RAD y AREA: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para el radio y el área
    float RAD, AREA;
    // Solicitamos al usuario que ingrese el radio del círculo
    printf("Ingrese el radio del círculo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable RAD
    scanf("%f", &RAD);
    // Calculamos el área del círculo
    AREA = 3.1416 * RAD * RAD;
    // Imprimimos el valor del área
    printf("El área del círculo es: %.2f", AREA);
}
