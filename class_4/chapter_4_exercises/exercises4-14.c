#include <stdio.h>

/* Función que suma dos matrices.
El programa define una función para sumar dos matrices.
matriz1, matriz2, resultado: matrices de tipo entero.
m y n: tamaño de las matrices.
suma_matrices: función que suma dos matrices. */

// Declaramos la función suma_matrices
void suma_matrices(int matriz1[][3], int matriz2[][3], int resultado[][3], int m, int n)
{
    // Usamos un ciclo for anidado para sumar las matrices
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            // Sumamos los elementos correspondientes y los almacenamos en la matriz resultado
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
}

void main(void)
{
    // Declaramos las variables para el tamaño de las matrices
    int m = 3, n = 3;
    // Declaramos las matrices y la matriz resultado
    int matriz1[3][3], matriz2[3][3], resultado[3][3];
    // Solicitamos al usuario que ingrese los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz1[i][j]);
    // Solicitamos al usuario que ingrese los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matriz: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz2[i][j]);
    // Llamamos a la función suma_matrices
    suma_matrices(matriz1, matriz2, resultado, m, n);
    // Imprimimos la matriz resultado
    printf("La suma de las matrices es: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", resultado[i][j]);
        printf("\n");
    }
}
