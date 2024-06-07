#include <stdio.h>

/* Tabla de multiplicar.
El programa, al recibir como dato un entero positivo, 
imprime la tabla de multiplicar del número dado.
NUM: variable de tipo entero. */

void main(void)
{
    // Declaramos la variable para el número
    int NUM;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo for para imprimir la tabla de multiplicar
    for (int i = 1; i <= 10; i++)
        // Imprimimos el resultado de NUM multiplicado por i
        printf("\n%d * %d = %d", NUM, i, NUM * i);
}
