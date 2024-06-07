#include <stdio.h>

/* Suma de factoriales.
El programa, al recibir como dato un entero positivo, 
calcula la suma de los factoriales de todos los números desde 1 hasta el número dado.
NUM, FACT y SUM: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número, el factorial y la suma
    int NUM, FACT, SUM;
    // Inicializamos la suma a 0
    SUM = 0;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Usamos un ciclo for para calcular la suma de los factoriales
    for (int i = 1; i <= NUM; i++)
    {
        // Inicializamos el factorial a 1 para cada número
        FACT = 1;
        // Calculamos el factorial de i
        for (int j = 1; j <= i; j++)
            FACT *= j;
        // Sumamos el factorial de i a SUM
        SUM += FACT;
    }
    // Imprimimos el resultado de la suma de los factoriales
    printf("\nLa suma de los factoriales es: %d", SUM);
}
