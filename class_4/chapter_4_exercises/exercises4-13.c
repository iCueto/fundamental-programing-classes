#include <stdio.h>

/* Función que invierte los elementos de un arreglo.
El programa define una función para invertir los elementos de un arreglo.
arr: arreglo de tipo entero.
n: tamaño del arreglo.
invertir_arreglo: función que invierte los elementos de un arreglo. */

// Declaramos la función invertir_arreglo
void invertir_arreglo(int arr[], int n)
{
    // Usamos un ciclo for para invertir el arreglo
    for (int i = 0; i < n / 2; i++)
    {
        // Intercambiamos los elementos arr[i] y arr[n-i-1]
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
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
    // Llamamos a la función invertir_arreglo
    invertir_arreglo(arr, n);
    // Imprimimos el arreglo invertido
    printf("El arreglo invertido es: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
