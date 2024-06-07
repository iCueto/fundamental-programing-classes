#include <stdio.h>

/* Promedio de tres números.
El programa, al recibir como datos tres números enteros,
calcula su promedio.
NUM1, NUM2, NUM3 y PROM: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para los tres números y el promedio
    int NUM1, NUM2, NUM3, PROM;
    // Solicitamos al usuario que ingrese los tres números
    printf("Ingrese tres números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables NUM1, NUM2 y NUM3
    scanf("%d %d %d", &NUM1, &NUM2, &NUM3);
    // Calculamos el promedio de los tres números
    PROM = (NUM1 + NUM2 + NUM3) / 3;
    // Imprimimos el valor del promedio
    printf("El promedio es: %d", PROM);
}
