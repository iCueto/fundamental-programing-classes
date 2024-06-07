#include <stdio.h>

/* Función que calcula la transpuesta de una matriz.
El programa define una función para calcular la transpuesta de una matriz.
matriz, transpuesta: matrices de tipo entero.
m, n: tamaño de la matriz.
transpuesta_matriz: función que calcula la transpuesta de una matriz. */

// Declaramos la función transpuesta_matriz
void transpuesta_matriz(int matriz[][3], int transpuesta[][3], int m, int n)
{
    // Usamos un ciclo for anidado para calcular la transpuesta
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            // Asignamos el elemento transpuesta[j][i] al valor de matriz[i][j]
            transpuesta[j][i] = matriz[i][j];
}

void main(void)
{
    // Declaramos las variables para el tamaño de la matriz
    int m = 3, n = 3;
    // Declaramos la matriz y su transpuesta
    int matriz[3][3], transpuesta[3][3];
    // Solicitamos al usuario que ingrese los elementos de la matriz
    printf("Ingrese los elementos de la matriz: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
    // Llamamos a la función transpuesta_matriz
    transpuesta_matriz(matriz, transpuesta, m, n);
    // Imprimimos la matriz transpuesta
    printf("La transpuesta de la matriz es: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%d ", transpuesta[i][j]);
        printf("\n");
    }
}
