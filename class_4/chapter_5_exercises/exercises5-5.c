#include <stdio.h>

/* Suma de números pares.
El programa, al recibir como dato un número entero positivo,
calcula la suma de todos los números pares desde 2 hasta el número dado.
NUM y SUM: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número y la suma
    int NUM, SUM;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Inicializamos la suma a 0
    SUM = 0;
    // Usamos un ciclo for para sumar todos los números pares desde 2 hasta NUM
    for (int i = 2; i <= NUM; i += 2)
        // Sumamos el valor de i a SUM en cada iteración
        SUM += i;
    // Imprimimos el valor de la suma
    printf("La suma de los números pares es: %d", SUM);
}
