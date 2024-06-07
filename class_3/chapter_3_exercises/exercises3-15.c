#include <stdio.h>

/* Suma de dígitos.
El programa, al recibir como dato un entero positivo, 
calcula la suma de sus dígitos.
NUM y SUM: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número y la suma de sus dígitos
    int NUM, SUM = 0;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo while para sumar los dígitos del número
    while (NUM > 0)
    {
        // Sumamos el último dígito de NUM a SUM
        SUM += NUM % 10;
        // Eliminamos el último dígito de NUM
        NUM /= 10;
    }
    // Imprimimos el resultado de la suma de los dígitos
    printf("\nLa suma de los dígitos es: %d", SUM);
}
