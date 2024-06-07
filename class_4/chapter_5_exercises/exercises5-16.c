#include <stdio.h>

/* Suma de los elementos de un arreglo.
El programa, al recibir como datos los elementos de un arreglo,
calcula la suma de todos sus elementos.
ARR y SUM: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el arreglo y la suma
    int ARR[100], N, SUM;
    // Solicitamos al usuario que ingrese el número de elementos del arreglo
    printf("Ingrese el número de elementos del arreglo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Solicitamos al usuario que ingrese los elementos del arreglo
    printf("Ingrese los elementos del arreglo: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en el arreglo ARR
    for (int i = 0; i < N; i++)
        scanf("%d", &ARR[i]);
    // Inicializamos la suma a 0
    SUM = 0;
    // Usamos un ciclo for para sumar todos los elementos del arreglo
    for (int i = 0; i < N; i++)
        // Sumamos el valor del elemento i a SUM en cada iteración
        SUM += ARR[i];
    // Imprimimos el valor de la suma
    printf("La suma de los elementos del arreglo es: %d", SUM);
}
