#include <stdio.h>

/* Factorial.
El programa, al recibir como dato un entero positivo, 
calcula el factorial del número.
NUM y FACT: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número y el factorial
    int NUM, FACT;
    // Inicializamos el factorial a 1
    FACT = 1;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo for para calcular el factorial
    for (int i = 1; i <= NUM; i++)
        // Multiplicamos FACT por i en cada iteración
        FACT *= i;
    // Imprimimos el resultado del factorial
    printf("\nEl factorial es: %d", FACT);
}
