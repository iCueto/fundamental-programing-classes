#include <stdio.h>
#include <stdlib.h>

/* Funciones para el manejo de caracteres de la biblioteca stdlib.h */

void main(void) {
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    // Pedimos al usuario que ingrese una cadena de caracteres
    printf("\nIngrese una cadena de caracteres: ");
    gets(cad0);

    // Convertimos la cadena a un entero y mostramos el resultado
    i = atoi(cad0);
    printf("\nLa cadena convertida a entero es: %d", i);
}
