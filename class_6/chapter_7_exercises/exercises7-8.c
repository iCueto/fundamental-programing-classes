#include <stdio.h>
#include <string.h>

/* Comparación de cadenas de caracteres */

void main(void) {
    // Declaramos dos arreglos de caracteres
    char cad1[20], cad2[20] = "Hola";

    // Pedimos al usuario que ingrese una cadena
    printf("\nIngrese una cadena: ");
    gets(cad1);

    // Comparamos las cadenas y mostramos el resultado
    if (strcmp(cad1, cad2) == 0)
        printf("\nLas cadenas son iguales");
    else
        printf("\nLas cadenas son diferentes");
}
