#include <stdio.h>

/* Suma de dos números usando una función.
El programa define una función para sumar dos números enteros.
A y B: variables de tipo entero.
suma: función que suma dos números. */

// Declaramos la función suma
int suma(int A, int B)
{
    // Retornamos la suma de A y B
    return A + B;
}

void main(void)
{
    // Declaramos las variables para los dos números
    int A, B;
    // Solicitamos al usuario que ingrese los dos números enteros
    printf("Ingrese dos números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A y B
    scanf("%d %d", &A, &B);
    // Llamamos a la función suma y almacenamos el resultado en la variable resultado
    int resultado = suma(A, B);
    // Imprimimos el resultado
    printf("La suma de %d y %d es: %d", A, B, resultado);
}
