#include <stdio.h>

/* Función que encuentra el número de ocurrencias de un elemento en un arreglo.
El programa define una función para encontrar el número de ocurrencias de un elemento en un arreglo.
arr: arreglo de tipo entero.
n: tamaño del arreglo.
elemento: elemento a buscar.
ocurrencias: función que encuentra el número de ocurrencias de un elemento en un arreglo. */

// Declaramos la función ocurrencias
int ocurrencias(int arr[], int n, int elemento)
{
    // Inicializamos el contador de ocurrencias a 0
    int contador = 0;
    // Usamos un ciclo for para contar las ocurrencias del elemento
    for (int i = 0; i < n; i++)
        // Verificamos si el elemento i es igual al elemento buscado
        if (arr[i] == elemento)
            // Si es igual, incrementamos el contador
            contador++;
    // Retornamos el contador
    return contador;
}

void main(void)
{
    // Declaramos las variables para el arreglo y su tamaño
    int n, elemento;
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
    // Solicitamos al usuario que ingrese el elemento a buscar
    printf("Ingrese el elemento a buscar: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable elemento
    scanf("%d", &elemento);
    // Llamamos a la función ocurrencias y almacenamos el resultado en la variable resultado
    int resultado = ocurrencias(arr, n, elemento);
    // Imprimimos el resultado
    printf("El elemento %d aparece %d veces en el arreglo", elemento, resultado);
}
