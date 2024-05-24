#include <stdio.h>

/* Número positivo o negativo.
El programa, al recibir como dato un número entero,
determina si es positivo, negativo o cero.
NUM: variable de tipo entero. */

int main(void)
{
    // Declara la variable para el número
    int NUM;
    // Solicita al usuario que ingrese un número
    printf("Ingrese un número: ");
    // Lee el valor ingresado por el usuario y lo guarda en la variable NUM
    scanf("%d", &NUM);
    // Verifica si el número es mayor a 0
    if (NUM > 0)
        // Si el número es mayor a 0, imprime "El número es positivo"
        printf("\nEl número es positivo");
    // Verifica si el número es menor a 0
    else if (NUM < 0)
        // Si el número es menor a 0, imprime "El número es negativo"
        printf("\nEl número es negativo");
    // Si ninguna de las condiciones anteriores se cumple, el número es 0
    else
        // imprime "El número es cero"
        printf("\nEl número es cero");
}
