#include <stdio.h>

/* Suma de números.
El programa, al recibir como dato un entero positivo, 
calcula la suma de todos los enteros desde 1 hasta el número dado.
NUM y SUM: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número y la suma
    int NUM, SUM;
    // Inicializamos la suma a 0
    SUM = 0;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo for para sumar todos los números desde 1 hasta NUM
    for (int i = 1; i <= NUM; i++)
        // Sumamos el valor de i a SUM en cada iteración
        SUM += i;
    // Imprimimos el resultado de la suma
    printf("\nLa suma es: %d", SUM);
}
