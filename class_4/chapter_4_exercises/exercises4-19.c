#include <stdio.h>

/* Función que calcula la diagonal principal de una matriz cuadrada.
El programa define una función para calcular la diagonal principal de una matriz cuadrada.
matriz: matriz de tipo entero.
diagonal: arreglo de tipo entero para almacenar la diagonal.
n: tamaño de la matriz.
diagonal_principal: función que calcula la diagonal principal de una matriz cuadrada. */

// Declaramos la función diagonal_principal
void diagonal_principal(int matriz[][3], int diagonal[], int n)
{
    // Usamos un ciclo for para recorrer la diagonal principal
    for (int i = 0; i < n; i++)
        // Asignamos el elemento diagonal[i] al valor de matriz[i][i]
        diagonal[i] = matriz[i][i];
}

void main(void)
{
    // Declaramos las variables para el tamaño de la matriz
    int n = 3;
    // Declaramos la matriz y el arreglo de la diagonal
    int matriz[3][3], diagonal[3];
    // Solicitamos al usuario que ingrese los elementos de la matriz
    printf("Ingrese los elementos de la matriz: ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matriz[i][j]);
    // Llamamos a la función diagonal_principal
    diagonal_principal(matriz, diagonal, n);
    // Imprimimos la diagonal principal
    printf("La diagonal principal es: ");
    for (int i = 0; i < n; i++)
        printf("%d ", diagonal[i]);
}
