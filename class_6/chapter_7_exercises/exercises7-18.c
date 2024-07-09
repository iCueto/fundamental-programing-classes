#include <stdio.h>
#include <string.h>

/* Invierte una cadena.
El programa invierte el orden de los caracteres de una cadena de caracteres. */

void invierte(char *); // Prototipo de función

void main(void) {
    char cad[50];

    // Pedimos al usuario que ingrese la cadena de caracteres
    printf("\nIngrese la cadena de caracteres: ");
    gets(cad);

    // Llamamos a la función invierte para invertir la cadena
    invierte(cad);

    // Mostramos la cadena invertida
    printf("\n\nLa cadena invertida es: ");
    puts(cad);
}

void invierte(char *cadena) {
    int lon, i;
    char temp;

    lon = strlen(cadena); // Calculamos la longitud de la cadena

    // Invertimos la cadena intercambiando los caracteres
    for (i = 0; i < lon / 2; i++) {
        temp = cadena[i];
        cadena[i] = cadena[lon - 1 - i];
        cadena[lon - 1 - i] = temp;
    }
}
