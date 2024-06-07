#include <stdio.h>

/* Suma de los dígitos de un número usando una función.
El programa define una función para calcular la suma de los dígitos de un número entero.
N: variable de tipo entero.
suma_digitos: función que calcula la suma de los dígitos de un número. */

// Declaramos la función suma_digitos
int suma_digitos(int N)
{
    // Inicializamos la suma a 0
    int suma = 0;
    // Usamos un ciclo while para sumar los dígitos del número
    while (N > 0)
    {
        // Sumamos el último dígito a suma
        suma += N % 10;
        // Eliminamos el último dígito del número
        N /= 10;
    }
    // Retornamos la suma
    return suma;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función suma_digitos y almacenamos el resultado en la variable resultado
    int resultado = suma_digitos(N);
    // Imprimimos el resultado
    printf("La suma de los dígitos de %d es: %d", N, resultado);
}
