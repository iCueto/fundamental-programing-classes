#include <stdio.h>

/* Número de dígitos de un número usando una función.
El programa define una función para calcular el número de dígitos de un número entero.
N: variable de tipo entero.
numero_digitos: función que calcula el número de dígitos de un número. */

// Declaramos la función numero_digitos
int numero_digitos(int N)
{
    // Inicializamos el contador de dígitos a 0
    int contador = 0;
    // Usamos un ciclo while para contar los dígitos del número
    while (N > 0)
    {
        // Incrementamos el contador
        contador++;
        // Eliminamos el último dígito del número
        N /= 10;
    }
    // Retornamos el contador
    return contador;
}

void main(void)
{
    // Declaramos la variable para el número
    int N;
    // Solicitamos al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    // Leemos el valor ingresado por el usuario y lo almacenamos en la variable N
    scanf("%d", &N);
    // Llamamos a la función numero_digitos y almacenamos el resultado en la variable resultado
    int resultado = numero_digitos(N);
    // Imprimimos el resultado
    printf("El número de dígitos de %d es: %d", N, resultado);
}
