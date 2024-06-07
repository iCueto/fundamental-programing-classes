#include <stdio.h>

/* Números amigos.
El programa, al recibir como datos dos enteros positivos, 
determina si son números amigos.
NUM1, NUM2: variables de tipo entero.
SUM1, SUM2: variables de tipo entero para almacenar las sumas de los divisores. */

void main(void)
{
    // Declaramos las variables para los dos números y las sumas de sus divisores
    int NUM1, NUM2, SUM1 = 0, SUM2 = 0;
    // Solicitamos al usuario que ingrese los dos números enteros positivos
    printf("Ingrese dos números enteros positivos: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables NUM1 y NUM2
    scanf("%d %d", &NUM1, &NUM2);
    // Usamos un ciclo for para encontrar y sumar los divisores propios de NUM1
    for (int i = 1; i < NUM1; i++)
    {
        // Verificamos si i es un divisor de NUM1
        if (NUM1 % i == 0)
            // Sumamos el divisor a SUM1
            SUM1 += i;
    }
    // Usamos un ciclo for para encontrar y sumar los divisores propios de NUM2
    for (int i = 1; i < NUM2; i++)
    {
        // Verificamos si i es un divisor de NUM2
        if (NUM2 % i == 0)
            // Sumamos el divisor a SUM2
            SUM2 += i;
    }
    // Verificamos si SUM1 es igual a NUM2 y SUM2 es igual a NUM1
    if (SUM1 == NUM2 && SUM2 == NUM1)
        // Si ambos son iguales, imprimimos que los números son amigos
        printf("\nLos números %d y %d son amigos", NUM1, NUM2);
    else
        // Si no son iguales, imprimimos que los números no son amigos
        printf("\nLos números %d y %d no son amigos", NUM1, NUM2);
}
