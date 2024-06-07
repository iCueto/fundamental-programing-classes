#include <stdio.h>

/* Promedio de los elementos de un arreglo.
El programa, al recibir como datos los elementos de un arreglo,
calcula el promedio de todos sus elementos.
ARR y PROM: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el arreglo y el promedio
    int ARR[100], N;
    float PROM;
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
    int SUM = 0;
    // Usamos un ciclo for para sumar todos los elementos del arreglo
    for (int i = 0; i < N; i++)
        // Sumamos el valor del elemento i a SUM en cada iteración
        SUM += ARR[i];
    // Calculamos el promedio dividiendo la suma entre el número de elementos
    PROM = (float)SUM / N;
    // Imprimimos el valor del promedio
    printf("El promedio de los elementos del arreglo es: %.2f", PROM);
}
