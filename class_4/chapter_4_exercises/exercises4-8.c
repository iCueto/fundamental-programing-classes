#include <stdio.h>

/* Función que calcula el valor absoluto de un número.
El programa define una función para calcular el valor absoluto de un número entero.
N: variable de tipo entero.
valor_absoluto: función que calcula el valor absoluto de un número. */

// Declaramos la función valor_absoluto
int valor_absoluto(int N)
{
    // Retornamos el valor absoluto del número
    return (N < 0) ? -N : N;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función valor_absoluto y almacenamos el resultado en la variable resultado
    int resultado = valor_absoluto(N);
    // Imprimimos el resultado
    printf("El valor absoluto de %d es: %d", N, resultado);
}
