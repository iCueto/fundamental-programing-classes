#include <stdio.h>

/* Función que calcula el promedio de los elementos de un arreglo.
El programa define una función para calcular el promedio de los elementos de un arreglo.
arr: arreglo de tipo entero.
n: tamaño del arreglo.
promedio_arreglo: función que calcula el promedio de los elementos de un arreglo. */

// Declaramos la función promedio_arreglo
float promedio_arreglo(int arr[], int n)
{
    // Inicializamos la variable suma a 0
    int suma = 0;
    // Usamos un ciclo for para sumar los elementos del arreglo
    for (int i = 0; i < n; i++)
        // Sumamos el elemento i a suma en cada iteración
        suma += arr[i];
    // Retornamos el promedio dividiendo la suma entre el tamaño del arreglo
    return (float)suma / n;
}

void main(void)
{
    // Declaramos las variables para el arreglo y su tamaño
    int n;
    // Solicitamos al usuario que ingrese el tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable n
    scanf("%d", &n);
    // Declaramos el arreglo de tamaño n
    int arr[n];
    // Solicitamos al usuario que ingrese los elementos del arreglo
    printf("Ingrese los elementos del arreglo: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en el arreglo
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    // Llamamos a la función promedio_arreglo y almacenamos el resultado en la variable resultado
    float resultado = promedio_arreglo(arr, n);
    // Imprimimos el resultado
    printf("El promedio de los elementos del arreglo es: %.2f", resultado);
}
