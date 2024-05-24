#include <stdio.h>

/* Paridad de un número.
El programa, al recibir como dato un número entero,
determina si es par o impar.
NUM: variable de tipo entero. */

int main(void)
{
    // Declara la variable para el número
    int NUM;
    // Solicita al usuario que ingrese un número
    printf("Ingrese un número: ");
    // Lee el valor ingresado y lo guarda en la variable NUM
    scanf("%d", &NUM);
    // Verifica si el número es igual a 0
    if (NUM == 0)
        // Si el número es 0, imprime "El número es 0"
        printf("\nEl número es 0");
    // Verifica si el número es par
    else if (NUM % 2 == 0)
        // Si el número es par, imprime "El número es par"
        printf("\nEl número es par");
    // Si el número no es par, entonces es impar
    else
        // Imprime "El número es impar"
        printf("\nEl número es impar");
}
