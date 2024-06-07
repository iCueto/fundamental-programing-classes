#include <stdio.h>

/* Función que encuentra el mínimo de los elementos de un arreglo.
El programa define una función para encontrar el mínimo de los elementos de un arreglo.
arr: arreglo de tipo entero.
n: tamaño del arreglo.
minimo_arreglo: función que encuentra el mínimo de los elementos de un arreglo. */

// Declaramos la función minimo_arreglo
int minimo_arreglo(int arr[], int n)
{
    // Inicializamos el mínimo al primer elemento del arreglo
    int minimo = arr[0];
    // Usamos un ciclo for para encontrar el mínimo
    for (int i = 1; i < n; i++)
        // Verificamos si el elemento i es menor que el mínimo actual
        if (arr[i] < minimo)
            // Si es menor, actualizamos el mínimo
            minimo = arr[i];
    // Retornamos el mínimo
    return minimo;
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
    // Llamamos a la función minimo_arreglo y almacenamos el resultado en la variable resultado
    int resultado = minimo_arreglo(arr, n);
    // Imprimimos el resultado
    printf("El mínimo de los elementos del arreglo es: %d", resultado);
}
