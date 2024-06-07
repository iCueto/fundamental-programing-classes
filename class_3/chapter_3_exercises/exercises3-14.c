#include <stdio.h>

/* Serie de Fibonacci recursiva.
El programa, al recibir como dato un entero positivo, 
calcula los primeros N términos de la serie de Fibonacci usando recursión.
N: variable de tipo entero.
Fibonacci: función recursiva para calcular el término N de la serie. */

// Declaramos la función recursiva Fibonacci
int Fibonacci(int N)
{
    // Verificamos si N es 0 o 1
    if (N == 0 || N == 1)
        // Si N es 0 o 1, retornamos N
        return N;
    else
        // Si N es mayor a 1, retornamos la suma de los dos términos anteriores
        return Fibonacci(N - 1) + Fibonacci(N - 2);
}

void main(void)
{
    // Declaramos la variable para el número de términos
    int N;
    // Solicitamos al usuario que ingrese el número de términos
    printf("Ingrese el número de términos: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Usamos un ciclo for para imprimir los términos de la serie
    for (int i = 0; i < N; i++)
        // Imprimimos el término i de la serie
        printf("\n%d", Fibonacci(i));
}
