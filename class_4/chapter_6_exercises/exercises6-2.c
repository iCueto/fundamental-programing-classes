#include <stdio.h>

/* Resta de dos números usando una función.
El programa define una función para restar dos números enteros.
A y B: variables de tipo entero.
resta: función que resta dos números. */

// Declaramos la función resta
int resta(int A, int B)
{
    // Retornamos la resta de A y B
    return A - B;
}

void main(void)
{
    // Declaramos las variables para los dos números
    int A, B;
    // Solicitamos al usuario que ingrese los dos números enteros
    printf("Ingrese dos números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A y B
    scanf("%d %d", &A, &B);
    // Llamamos a la función resta y almacenamos el resultado en la variable resultado
    int resultado = resta(A, B);
    // Imprimimos el resultado
    printf("La resta de %d y %d es: %d", A, B, resultado);
}
