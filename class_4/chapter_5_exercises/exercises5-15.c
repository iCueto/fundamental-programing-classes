#include <stdio.h>

/* Calcula el perímetro de un triángulo.
El programa, al recibir como datos los tres lados de un triángulo,
calcula su perímetro.
LADO1, LADO2, LADO3 y PERIM: variables de tipo real. */

void main(void)
{
    // Declaramos las variables para los tres lados y el perímetro
    float LADO1, LADO2, LADO3, PERIM;
    // Solicitamos al usuario que ingrese los tres lados del triángulo
    printf("Ingrese los tres lados del triángulo: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables LADO1, LADO2 y LADO3
    scanf("%f %f %f", &LADO1, &LADO2, &LADO3);
    // Calculamos el perímetro del triángulo
    PERIM = LADO1 + LADO2 + LADO3;
    // Imprimimos el valor del perímetro
    printf("El perímetro del triángulo es: %.2f", PERIM);
}
