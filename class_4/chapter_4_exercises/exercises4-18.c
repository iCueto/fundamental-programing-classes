#include <stdio.h>

/* Función que encuentra el mínimo de cada columna de una matriz.
El programa define una función para encontrar el mínimo de cada columna de una matriz.
matriz: matriz de tipo entero.
minimos: arreglo de tipo entero para almacenar los mínimos.
m, n: tamaño de la matriz.
minimos_columnas: función que encuentra el mínimo de cada columna de una matriz. */

// Declaramos la función minimos_columnas
void minimos_columnas(int matriz[][3], int minimos[], int m, int n)
{
    // Usamos un ciclo for para recorrer cada columna
    for (int j = 0; j < n; j++)
    {
        // Inicializamos el mínimo al primer elemento de la columna
        minimos[j] = matriz[0][j];
        // Usamos un ciclo for para encontrar el mínimo de la columna
        for (int i = 1; i < m; i++)
            // Verificamos si el elemento es menor que el mínimo actual
            if (matriz[i][j] < minimos[j])
                // Si es menor, actualizamos el mínimo
                minimos[j] = matriz[i][j];
    }
}

void main(void)
{
    // Declaramos las variables para el tamaño de la matriz
    int m = 3, n = 3;
    // Declaramos la matriz y el arreglo de mínimos
    int matriz[3][3], minimos[3];
    // Solicitamos al usuario que ingrese los elementos de la matriz
    printf("Ingrese los elementos de la matriz: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
    // Llamamos a la función minimos_columnas
    minimos_columnas(matriz, minimos, m, n);
    // Imprimimos los mínimos de cada columna
    printf("Los mínimos de cada columna son: ");
    for (int j = 0; j < n; j++)
        printf("%d ", minimos[j]);
}
