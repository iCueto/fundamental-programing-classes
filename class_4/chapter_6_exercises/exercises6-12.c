#include <stdio.h>

/* Número primo usando una función.
El programa define una función para verificar si un número entero es primo.
N: variable de tipo entero.
es_primo: función que verifica si un número es primo. */

// Declaramos la función es_primo
int es_primo(int N)
{
    // Verificamos si el número es menor que 2
    if (N < 2)
        // Si es menor que 2, no es primo
        return 0;
    // Usamos un ciclo for para verificar si el número es primo
    for (int i = 2; i <= N / 2; i++)
    {
        // Verificamos si el número es divisible por i
        if (N % i == 0)
            // Si es divisible, no es primo
            return 0;
    }
    // Si no encontramos divisores, el número es primo
    return 1;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función es_primo y almacenamos el resultado en la variable resultado
    int resultado = es_primo(N);
    // Verificamos el resultado y mostramos el mensaje correspondiente
    if (resultado)
        // Si el resultado es 1, el número es primo
        printf("El número %d es primo", N);
    else
        // Si el resultado es 0, el número no es primo
        printf("El número %d no es primo", N);
}
