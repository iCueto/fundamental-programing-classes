#include <stdio.h>

/* Número mayor.
El programa, al recibir como datos tres números enteros,
determina cuál es el mayor.
NUM1, NUM2, NUM3: variables de tipo entero. */

int main(void)
{
    // Declara las variables para los tres números
    int NUM1, NUM2, NUM3;
    // Solicita al usuario que ingrese los tres números
    printf("Ingrese tres números: ");
    // Lee los valores ingresados por el usuario y los guarda en las variables correspondientes
    scanf("%d %d %d", &NUM1, &NUM2, &NUM3);
    // Verifica si el primer número es mayor que los otros dos
    if (NUM1 > NUM2 && NUM1 > NUM3)
        // Si el primer número es el mayor, imprime su valor
        printf("\nEl número mayor es: %d", NUM1);
    // Verificamos si el segundo número es mayor que los otros dos
    else if (NUM2 > NUM1 && NUM2 > NUM3)
        // Si el segundo número es el mayor, imprime su valor
        printf("\nEl número mayor es: %d", NUM2);
    // Si ninguna de las condiciones anteriores se cumple, el tercer número es el mayor
    else
        // imprime el valor del tercer número
        printf("\nEl número mayor es: %d", NUM3);
}
