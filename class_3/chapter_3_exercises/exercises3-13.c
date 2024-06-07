#include <stdio.h>

/* Sucesión de Collatz.
El programa, al recibir como dato un entero positivo, 
calcula la sucesión de Collatz.
NUM: variable de tipo entero. */

void main(void)
{
    // Declaramos la variable para el número
    int NUM;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Imprimimos el número inicial
    printf("\n%d", NUM);
    // Usamos un ciclo while para calcular la sucesión de Collatz
    while (NUM != 1)
    {
        // Verificamos si el número es par
        if (NUM % 2 == 0)
            // Si el número es par, lo dividimos entre 2
            NUM /= 2;
        else
            // Si el número es impar, lo multiplicamos por 3 y le sumamos 1
            NUM = NUM * 3 + 1;
        // Imprimimos el siguiente término de la sucesión
        printf("\n%d", NUM);
    }
}
