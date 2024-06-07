#include <stdio.h>

/* Calcula el perímetro de un círculo.
El programa, al recibir como dato el radio de un círculo,
calcula su perímetro.
RAD y PERIM: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para el radio y el perímetro
    float RAD, PERIM;
    // Solicitamos al usuario que ingrese el radio del círculo
    printf("Ingrese el radio del círculo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable RAD
    scanf("%f", &RAD);
    // Calculamos el perímetro del círculo
    PERIM = 2 * 3.1416 * RAD;
    // Imprimimos el valor del perímetro
    printf("El perímetro del círculo es: %.2f", PERIM);
}
