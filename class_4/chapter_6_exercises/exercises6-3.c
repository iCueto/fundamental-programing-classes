#include <stdio.h>

/* Multiplicación de dos números usando una función.
El programa define una función para multiplicar dos números enteros.
A y B: variables de tipo entero.
multiplicacion: función que multiplica dos números. */

// Declaramos la función multiplicacion
int multiplicacion(int A, int B)
{
    // Retornamos la multiplicación de A y B
    return A * B;
}

void main(void)
{
    // Declaramos las variables para los dos números
    int A, B;
    // Solicitamos al usuario que ingrese los dos números enteros
    printf("Ingrese dos números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A y B
    scanf("%d %d", &A, &B);
    // Llamamos a la función multiplicacion y almacenamos el resultado en la variable resultado
    int resultado = multiplicacion(A, B);
    // Imprimimos el resultado
    printf("La multiplicación de %d y %d es: %d", A, B, resultado);
}
