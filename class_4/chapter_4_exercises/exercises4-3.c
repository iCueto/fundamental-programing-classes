#include <stdio.h>

/* Función que calcula el factorial de un número.
El programa define una función para calcular el factorial de un número entero.
N: variable de tipo entero.
factorial: función que calcula el factorial de un número. */

// Declaramos la función factorial
int factorial(int N)
{
    // Inicializamos el resultado a 1
    int resultado = 1;
    // Usamos un ciclo for para calcular el factorial
    for (int i = 1; i <= N; i++)
        // Multiplicamos el resultado por i en cada iteración
        resultado *= i;
    // Retornamos el resultado
    return resultado;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función factorial y almacenamos el resultado en la variable resultado
    int resultado = factorial(N);
    // Imprimimos el resultado
    printf("El factorial de %d es: %d", N, resultado);
}
