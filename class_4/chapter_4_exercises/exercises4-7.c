#include <stdio.h>

/* Función que calcula el promedio de dos números.
El programa define una función para calcular el promedio de dos números enteros.
A y B: variables de tipo entero.
promedio: función que calcula el promedio de dos números. */

// Declaramos la función promedio
float promedio(int A, int B)
{
    // Retornamos el promedio de los dos números
    return (A + B) / 2.0;
}

void main(void)
{
    // Declaramos las variables para los dos números
    int A, B;
    // Solicitamos al usuario que ingrese los dos números enteros
    printf("Ingrese dos números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A y B
    scanf("%d %d", &A, &B);
    // Llamamos a la función promedio y almacenamos el resultado en la variable resultado
    float resultado = promedio(A, B);
    // Imprimimos el resultado
    printf("El promedio de %d y %d es: %.2f", A, B, resultado);
}
