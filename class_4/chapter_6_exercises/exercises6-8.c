#include <stdio.h>

/* MCM de dos números usando una función.
El programa define una función para calcular el mínimo común múltiplo (MCM) de dos números enteros.
A y B: variables de tipo entero.
mcm: función que calcula el MCM de dos números. */

// Declaramos la función mcd para calcular el MCD
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

// Declaramos la función mcm para calcular el MCM
int mcm(int A, int B)
{
    // Retornamos el MCM usando la relación MCM(A, B) = (A * B) / MCD(A, B)
    return (A * B) / mcd(A, B);
}

void main(void)
{
    // Declaramos las variables para los dos números
    int A, B;
    // Solicitamos al usuario que ingrese los dos números enteros
    printf("Ingrese dos números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A y B
    scanf("%d %d", &A, &B);
    // Llamamos a la función mcm y almacenamos el resultado en la variable resultado
    int resultado = mcm(A, B);
    // Imprimimos el resultado
    printf("El MCM de %d y %d es: %d", A, B, resultado);
}
