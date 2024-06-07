#include <stdio.h>

/* Inversión de un número usando una función.
El programa define una función para invertir los dígitos de un número entero.
N: variable de tipo entero.
invertir: función que invierte los dígitos de un número. */

// Declaramos la función invertir
int invertir(int N)
{
    // Inicializamos el número invertido a 0
    int invertido = 0;
    // Usamos un ciclo while para invertir los dígitos del número
    while (N > 0)
    {
        // Multiplicamos el número invertido por 10 y sumamos el último dígito de N
        invertido = invertido * 10 + N % 10;
        // Eliminamos el último dígito del número
        N /= 10;
    }
    // Retornamos el número invertido
    return invertido;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función invertir y almacenamos el resultado en la variable resultado
    int resultado = invertir(N);
    // Imprimimos el resultado
    printf("El número invertido de %d es: %d", N, resultado);
}
