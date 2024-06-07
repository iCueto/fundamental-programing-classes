#include <stdio.h>

/* MCD de dos números usando una función.
El programa define una función para calcular el máximo común divisor (MCD) de dos números enteros.
A y B: variables de tipo entero.
mcd: función que calcula el MCD de dos números. */

// Declaramos la función mcd
int mcd(int A, int B)
{
    // Usamos el algoritmo de Euclides para calcular el MCD
    while (B != 0)
    {
        int temp = B;
        B = A % B;
        A = temp;
    }
    // Retornamos el MCD
    return A;
}

void main(void)
{
    // Declaramos las variables para los dos números
    int A, B;
    // Solicitamos al usuario que ingrese los dos números enteros
    printf("Ingrese dos números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A y B
    scanf("%d %d", &A, &B);
    // Llamamos a la función mcd y almacenamos el resultado en la variable resultado
    int resultado = mcd(A, B);
    // Imprimimos el resultado
    printf("El MCD de %d y %d es: %d", A, B, resultado);
}
