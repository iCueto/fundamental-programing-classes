#include <stdio.h>

/* División de dos números usando una función.
El programa define una función para dividir dos números enteros.
A y B: variables de tipo entero.
division: función que divide dos números. */

// Declaramos la función division
float division(int A, int B)
{
    // Retornamos la división de A y B
    return (float)A / B;
}

void main(void)
{
    // Declaramos las variables para los dos números
    int A, B;
    // Solicitamos al usuario que ingrese los dos números enteros
    printf("Ingrese dos números enteros: ");
    // Leemos los valores ingresados por el usuario y los almacenamos en las variables A y B
    scanf("%d %d", &A, &B);
    // Verificamos que el divisor no sea cero
    if (B != 0)
    {
        // Llamamos a la función division y almacenamos el resultado en la variable resultado
        float resultado = division(A, B);
        // Imprimimos el resultado
        printf("La división de %d entre %d es: %.2f", A, B, resultado);
    }
    else
        // Si el divisor es cero, imprimimos un mensaje de error
        printf("Error: División por cero");
}
