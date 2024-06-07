#include <stdio.h>

/* Función que calcula el cubo de un número.
El programa define una función para calcular el cubo de un número entero.
N: variable de tipo entero.
cubo: función que calcula el cubo de un número. */

// Declaramos la función cubo
int cubo(int N)
{
    // Retornamos el cubo del número
    return N * N * N;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función cubo y almacenamos el resultado en la variable resultado
    int resultado = cubo(N);
    // Imprimimos el resultado
    printf("El cubo de %d es: %d", N, resultado);
}
