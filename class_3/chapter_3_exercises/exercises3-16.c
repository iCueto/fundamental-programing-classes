#include <stdio.h>

/* Número de Fibonacci iterativo.
El programa, al recibir como dato un entero positivo, 
calcula el término N de la serie de Fibonacci de forma iterativa.
N: variable de tipo entero.
A y B: variables de tipo entero para almacenar los términos de la serie. */

void main(void)
{
    // Declaramos las variables para el número de términos y los términos de la serie
    int N, A = 0, B = 1, TEMP;
    // Solicitamos al usuario que ingrese el término deseado
    printf("Ingrese el término deseado: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Verificamos si N es 0
    if (N == 0)
        // Si N es 0, imprimimos el término correspondiente
        printf("\n%d", A);
    else
    {
        // Usamos un ciclo for para calcular los términos de la serie hasta N
        for (int i = 2; i <= N; i++)
        {
            // Calculamos el siguiente término de la serie
            TEMP = A + B;
            // Actualizamos los valores de A y B
            A = B;
            B = TEMP;
        }
        // Imprimimos el término correspondiente
        printf("\n%d", B);
    }
}
