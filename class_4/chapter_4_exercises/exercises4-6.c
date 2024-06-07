#include <stdio.h>

/* Función que calcula el mínimo de dos números.
El programa define una función para calcular el mínimo de dos números enteros.
A y B: variables de tipo entero.
minimo: función que calcula el mínimo de dos números. */

// Declaramos la función minimo
int minimo(int A, int B)
{
    // Retornamos el menor de los dos números
    return (A < B) ? A : B;
}

void main(void)
{
    // Declaramos las variables para los dos números
    int A, B;
    // Solicitamos al usuario que ingrese los dos números enteros
    printf("Ingrese dos números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A y B
    scanf("%d %d", &A, &B);
    // Llamamos a la función minimo y almacenamos el resultado en la variable resultado
    int resultado = minimo(A, B);
    // Imprimimos el resultado
    printf("El mínimo de %d y %d es: %d", A, B, resultado);
}
