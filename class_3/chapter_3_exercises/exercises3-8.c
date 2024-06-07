#include <stdio.h>

/* Conversión de decimal a binario.
El programa, al recibir como dato un entero positivo, 
calcula su representación en binario.
NUM y BIN: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número y su representación en binario
    int NUM, BIN[32], INDEX = 0;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo while para calcular la representación en binario
    while (NUM > 0)
    {
        // Almacenamos el residuo de NUM dividido por 2 en el arreglo BIN
        BIN[INDEX] = NUM % 2;
        // Dividimos NUM entre 2
        NUM /= 2;
        // Incrementamos el índice
        INDEX++;
    }
    // Imprimimos la representación en binario en orden inverso
    printf("\nLa representación binaria es: ");
    for (int i = INDEX - 1; i >= 0; i--)
        printf("%d", BIN[i]);
}
