#include <stdio.h>
#include <string.h>

/* Copia de cadenas de caracteres */

void main(void) {
    // Declaramos dos arreglos de caracteres
    char cad1[20], cad2[20] = "Buenos días";

    // Copiamos cad2 en cad1 y mostramos el resultado
    strcpy(cad1, cad2);
    puts(cad1);  // Mostramos la cadena copiada
}
