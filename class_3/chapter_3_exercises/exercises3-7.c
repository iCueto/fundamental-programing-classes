#include <stdio.h>

/* Serie de Fibonacci.
El programa, al recibir como dato un entero positivo, 
calcula los primeros N términos de la serie de Fibonacci.
N: variable de tipo entero.
A y B: variables de tipo entero para almacenar los términos de la serie. */

void main(void)
{
    // Declaramos las variables para el número de términos y los términos de la serie
    int N, A, B, TEMP;
    // Solicitamos al usuario que ingrese el número de términos
    printf("Ingrese el número de términos: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Inicializamos los primeros dos términos de la serie
    A = 0;
    B = 1;
    // Imprimimos los primeros dos términos
    printf("\n%d", A);
    printf("\n%d", B);
    // Usamos un ciclo for para calcular los términos restantes de la serie
    for (int i = 3; i <= N; i++)
    {
        // Calculamos el siguiente término de la serie
        TEMP = A + B;
        // Imprimimos el siguiente término
        printf("\n%d", TEMP);
        // Actualizamos los valores de A y B
        A = B;
        B = TEMP;
    }
}
