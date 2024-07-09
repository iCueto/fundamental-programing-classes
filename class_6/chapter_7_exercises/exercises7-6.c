#include <stdio.h>
#include <string.h>

/* Concatenación de cadenas de caracteres */

void main(void) {
    // Declaramos dos arreglos de caracteres
    char cad1[20] = "Hola, ";
    char cad2[20] = "Mundo!";
    char cad3[40];

    // Concatenamos las cadenas y mostramos el resultado
    strcpy(cad3, cad1);  // Copiamos cad1 en cad3
    strcat(cad3, cad2);  // Concatenamos cad2 al final de cad3
    puts(cad3);  // Mostramos la cadena resultante
}
