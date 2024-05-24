#include <stdio.h>
#include <math.h>

/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los
mismos satisfacen una expresión determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

int main(void)
{
    // Declara las variables para los tres valores enteros y el resultado
    float RES;
    int R, T, Q;
    // Solicita al usuario que ingrese los tres valores
    printf("Ingrese los valores de R, T y Q: ");
    // Lee los valores ingresados por el usuario y los guarda en las variables correspondientes
    scanf("%d %d %d", &R, &T, &Q);
    // Calcula el resultado de la expresión
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);
    // Verifica si el resultado es menor a 820
    if (RES < 820)
        // Si el resultado es menor a 820, imprime los valores de R, T y Q
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);
}
