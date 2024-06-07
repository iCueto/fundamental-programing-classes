#include <stdio.h>

/* Números perfectos.
El programa, al recibir como dato un entero positivo, 
determina si el número es perfecto o no.
NUM: variable de tipo entero. */

void main(void)
{
    // Declaramos la variable para el número y la suma de sus divisores
    int NUM, SUM = 0;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo for para encontrar y sumar los divisores propios de NUM
    for (int i = 1; i < NUM; i++)
    {
        // Verificamos si i es un divisor de NUM
        if (NUM % i == 0)
            // Sumamos el divisor a SUM
            SUM += i;
    }
    // Verificamos si SUM es igual a NUM
    if (SUM == NUM)
        // Si SUM es igual a NUM, imprimimos que el número es perfecto
        printf("\nEl número %d es perfecto", NUM);
    else
        // Si SUM no es igual a NUM, imprimimos que el número no es perfecto
        printf("\nEl número %d no es perfecto", NUM);
}
