#include <stdio.h>

/* Función que verifica si un número es par.
El programa define una función para verificar si un número entero es par.
N: variable de tipo entero.
es_par: función que verifica si un número es par. */

// Declaramos la función es_par
int es_par(int N)
{
    // Retornamos 1 si el número es par, de lo contrario retornamos 0
    return N % 2 == 0;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función es_par y almacenamos el resultado en la variable resultado
    int resultado = es_par(N);
    // Verificamos el resultado y mostramos el mensaje correspondiente
    if (resultado)
        // Si el resultado es 1, el número es par
        printf("El número %d es par", N);
    else
        // Si el resultado es 0, el número no es par
        printf("El número %d no es par", N);
}
