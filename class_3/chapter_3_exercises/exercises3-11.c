#include <stdio.h>

/* Promedio de calificaciones.
El programa, al recibir como dato un entero positivo N y N calificaciones,
calcula el promedio de las calificaciones.
N y SUM: variables de tipo entero.
CAL: variable de tipo real. */

void main(void)
{
    // Declaramos las variables para el número de calificaciones y la suma de calificaciones
    int N, SUM = 0;
    // Declaramos la variable para la calificación
    float CAL;
    // Solicitamos al usuario que ingrese el número de calificaciones
    printf("Ingrese el número de calificaciones: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Usamos un ciclo for para leer y sumar las calificaciones
    for (int i = 1; i <= N; i++)
    {
        // Solicitamos al usuario que ingrese una calificación
        printf("Ingrese la calificación %d: ", i);
        // Leemos el valor ingresado por el usuario y lo almacenamos en la variable CAL
        scanf("%f", &CAL);
        // Sumamos la calificación a SUM
        SUM += CAL;
    }
    // Calculamos el promedio dividiendo SUM entre N
    float PROM = (float)SUM / N;
    // Imprimimos el promedio de las calificaciones
    printf("\nEl promedio es: %.2f", PROM);
}
