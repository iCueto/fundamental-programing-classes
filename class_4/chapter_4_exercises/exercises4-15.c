#include <stdio.h>

/* Función que multiplica dos matrices.
El programa define una función para multiplicar dos matrices.
matriz1, matriz2, resultado: matrices de tipo entero.
m, n, p: tamaños de las matrices.
multiplica_matrices: función que multiplica dos matrices. */

// Declaramos la función multiplica_matrices
void multiplica_matrices(int matriz1[][3], int matriz2[][3], int resultado[][3], int m, int n, int p)
{
    // Usamos un ciclo for anidado para multiplicar las matrices
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
        {
            // Inicializamos el elemento resultado[i][j] a 0
            resultado[i][j] = 0;
            // Calculamos el producto punto de la fila i de matriz1 y la columna j de matriz2
            for (int k = 0; k < n; k++)
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
        }
}

void main(void)
{
    // Declaramos las variables para los tamaños de las matrices
    int m = 3, n = 3, p = 3;
    // Declaramos las matrices y la matriz resultado
    int matriz1[3][3], matriz2[3][3], resultado[3][3];
    // Solicitamos al usuario que ingrese los elementos de la primera matriz
    printf("Ingrese los elementos de la primera matriz: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz1[i][j]);
    // Solicitamos al usuario que ingrese los elementos de la segunda matriz
    printf("Ingrese los elementos de la segunda matriz: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &matriz2[i][j]);
    // Llamamos a la función multiplica_matrices
    multiplica_matrices(matriz1, matriz2, resultado, m, n, p);
    // Imprimimos la matriz resultado
    printf("El producto de las matrices es: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
            printf("%d ", resultado[i][j]);
        printf("\n");
    }
}
