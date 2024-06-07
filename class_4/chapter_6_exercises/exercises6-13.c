#include <stdio.h>

/* MCM de tres números usando una función.
El programa define una función para calcular el mínimo común múltiplo (MCM) de tres números enteros.
A, B y C: variables de tipo entero.
mcm: función que calcula el MCM de dos números.
mcm3: función que calcula el MCM de tres números. */

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

// Declaramos la función mcm para calcular el MCM de dos números
int mcm(int A, int B)
{
    // Retornamos el MCM usando la relación MCM(A, B) = (A * B) / MCD(A, B)
    return (A * B) / mcd(A, B);
}

// Declaramos la función mcm3 para calcular el MCM de tres números
int mcm3(int A, int B, int C)
{
    // Retornamos el MCM de los tres números usando la función mcm
    return mcm(mcm(A, B), C);
}

void main(void)
{
    // Declaramos las variables para los tres números
    int A, B, C;
    // Solicitamos al usuario que ingrese los tres números enteros
    printf("Ingrese tres números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A, B y C
    scanf("%d %d %d", &A, &B, &C);
    // Llamamos a la función mcm3 y almacenamos el resultado en la variable resultado
    int resultado = mcm3(A, B, C);
    // Imprimimos el resultado
    printf("El MCM de %d, %d y %d es: %d", A, B, C, resultado);
}
