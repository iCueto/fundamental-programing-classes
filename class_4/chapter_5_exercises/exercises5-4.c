#include <stdio.h>

/* Números primos.
El programa, al recibir como dato un número entero positivo,
determina si el número es primo o no.
NUM y PRIMO: variables de tipo entero. */

void main(void)
{
    // Declaramos las variables para el número y la bandera primo
    int NUM, PRIMO;
    // Solicitamos al usuario que ingrese un número entero positivo
    printf("Ingrese un número entero positivo: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable NUM
    scanf("%d", &NUM);
    // Inicializamos la bandera PRIMO a 1 (suponemos que es primo)
    PRIMO = 1;
    // Usamos un ciclo for para verificar si el número es primo
    for (int i = 2; i <= NUM / 2; i++)
    {
        // Verificamos si el número es divisible por i
        if (NUM % i == 0)
        {
            // Si es divisible, no es primo y cambiamos la bandera a 0
            PRIMO = 0;
            // Salimos del ciclo
            break;
        }
    }
    // Verificamos el valor de la bandera PRIMO
    if (PRIMO && NUM > 1)
        // Si es primo, imprimimos el mensaje correspondiente
        printf("El número %d es primo", NUM);
    else
        // Si no es primo, imprimimos el mensaje correspondiente
        printf("El número %d no es primo", NUM);
}
