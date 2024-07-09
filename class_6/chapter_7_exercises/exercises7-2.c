#include <stdio.h>
#include <ctype.h>

/* Funciones de entrada y salida con caracteres */

void main(void) {
    // Declaramos una variable tipo char para almacenar el caracter ingresado
    char p;

    // Pedimos al usuario que ingrese un caracter
    printf("\nIngrese un caracter: ");
    p = getchar();  // Usamos getchar para leer el caracter

    // Mostramos el caracter ingresado en mayúscula
    putchar(toupper(p));  // Convertimos el caracter a mayúscula y lo mostramos
}
