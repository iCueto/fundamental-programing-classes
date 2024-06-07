#include <stdio.h>

/* Cuadrado de números.
El programa, al recibir como dato un entero positivo, 
calcula el cuadrado de todos los números desde 1 hasta el número dado.
NUM: variable de tipo entero. */

void main(void)
{
    // Declaramos la variable para el número
    int NUM;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo for para calcular el cuadrado de todos los números desde 1 hasta NUM
    for (int i = 1; i <= NUM; i++)
        // Imprimimos el cuadrado de i en cada iteración
        printf("\nEl cuadrado de %d es: %d", i, i * i);
}
