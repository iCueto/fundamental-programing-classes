#include <stdio.h>

/* Factorial de un número.
El programa, al recibir como dato un número entero positivo,
calcula su factorial.
NUM y FACT: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número y el factorial
    int NUM, FACT;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Inicializamos el factorial a 1
    FACT = 1;
    // Usamos un ciclo for para calcular el factorial
    for (int i = 1; i <= NUM; i++)
        // Multiplicamos el factorial por i en cada iteración
        FACT *= i;
    // Imprimimos el valor del factorial
    printf("El factorial de %d es: %d", NUM, FACT);
}
