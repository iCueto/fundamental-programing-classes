#include <stdio.h>

/* Función que calcula el cuadrado de un número.
El programa define una función para calcular el cuadrado de un número entero.
N: variable de tipo entero.
cuadrado: función que calcula el cuadrado de un número. */

// Declaramos la función cuadrado
int cuadrado(int N)
{
    // Retornamos el cuadrado del número
    return N * N;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función cuadrado y almacenamos el resultado en la variable resultado
    int resultado = cuadrado(N);
    // Imprimimos el resultado
    printf("El cuadrado de %d es: %d", N, resultado);
}
