#include <stdio.h>

/* Función que encuentra el máximo de cada fila de una matriz.
El programa define una función para encontrar el máximo de cada fila de una matriz.
matriz: matriz de tipo entero.
maximos: arreglo de tipo entero para almacenar los máximos.
m, n: tamaño de la matriz.
maximos_filas: función que encuentra el máximo de cada fila de una matriz. */

// Declaramos la función maximos_filas
void maximos_filas(int matriz[][3], int maximos[], int m, int n)
{
    // Usamos un ciclo for para recorrer cada fila
    for (int i = 0; i < m; i++)
    {
        // Inicializamos el máximo al primer elemento de la fila
        maximos[i] = matriz[i][0];
        // Usamos un ciclo for para encontrar el máximo de la fila
        for (int j = 1; j < n; j++)
            // Verificamos si el elemento es mayor que el máximo actual
            if (matriz[i][j] > maximos[i])
                // Si es mayor, actualizamos el máximo
                maximos[i] = matriz[i][j];
    }
}

void main(void)
{
    // Declaramos las variables para el tamaño de la matriz
    int m = 3, n = 3;
    // Declaramos la matriz y el arreglo de máximos
    int matriz[3][3], maximos[3];
    // Solicitamos al usuario que ingrese los elementos de la matriz
    printf("Ingrese los elementos de la matriz: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
    // Llamamos a la función maximos_filas
    maximos_filas(matriz, maximos, m, n);
    // Imprimimos los máximos de cada fila
    printf("Los máximos de cada fila son: ");
    for (int i = 0; i < m; i++)
        printf("%d ", maximos[i]);
}
